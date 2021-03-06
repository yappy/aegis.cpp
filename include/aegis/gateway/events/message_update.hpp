//
// message_update.hpp
// ******************
//
// Copyright (c) 2019 Sharon W (sharon at aegis dot gg)
//
// Distributed under the MIT License. (See accompanying file LICENSE)
//

#pragma once

#include "aegis/config.hpp"
#include "aegis/fwd.hpp"
#include "aegis/gateway/objects/message.hpp"
#include <nlohmann/json.hpp>

namespace aegis
{

namespace gateway
{

namespace events
{

/**\todo Needs documentation
 */
struct message_update
{
    shards::shard & shard; /**< Reference to shard object this message came from */
    aegis::channel & channel; /**< Reference to channel object this message came from */
    lib::optional<std::reference_wrapper<aegis::user>> user; /**< Cached user object */
    objects::message msg; /**< Message object */
};

}

}

}
