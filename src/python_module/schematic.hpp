#pragma once
#include <Python.h>
#include "block/block.hpp"
#include "schematic/schematic.hpp"
#include "project/project.hpp"
#include "pool/pool_cached.hpp"

extern PyTypeObject SchematicType;

class SchematicWrapper {
public:
    SchematicWrapper(const horizon::Project &prj, const horizon::UUID &block_uuid);
    horizon::PoolCached pool;
    horizon::Block block;
    horizon::Schematic schematic;
};

typedef struct {
    PyObject_HEAD
            /* Type-specific fields go here. */
            SchematicWrapper *schematic;
} PySchematic;
