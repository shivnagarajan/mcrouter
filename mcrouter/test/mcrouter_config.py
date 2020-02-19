#!/usr/bin/env python3
# Copyright (c) Facebook, Inc. and its affiliates.
#
# This source code is licensed under the MIT license found in the
# LICENSE file in the root directory of this source tree.

class McrouterGlobals:
    @staticmethod
    def binPath(name):
        bins = {
            'mcrouter': './mcrouter/mcrouter',
            'mcpiper': './mcrouter/tools/mcpiper/mcpiper',
            'mockmc': './mcrouter/lib/network/mock_mc_server',
            'prodmc': './mcrouter/lib/network/mock_mc_server',
        }
        return bins[name]

    @staticmethod
    def preprocessArgs(args):
        return args
