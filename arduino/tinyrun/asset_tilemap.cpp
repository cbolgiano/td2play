// This file is generated from a tiled tilemap!
#include <inttypes.h>
#include "image_data.h"
#include "asset_tilemap.h"

namespace TilemapAsset {
	using namespace TileMap;
// assets/el_01.tmx
	TileMap::Scene<uint16_t> el_01() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_01);
	};
// assets/el_02.tmx
	TileMap::Scene<uint16_t> el_02() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x03,0xff,0x04,0x01,0x00,0x01,
			0x10,0x10,0x12,0xff,0x14,0x10,0x10,0x10,
			0x10,0x10,0x12,0xff,0x14,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_02);
	};
// assets/el_03.tmx
	TileMap::Scene<uint16_t> el_03() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			0x00,0x00,0x00,0xff,0x00,0x00,0xff,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x02,0xff,0x04,0x02,0xff,0x04,
			0x10,0x10,0x12,0xff,0x14,0x13,0xff,0x14,
			0x10,0x10,0x13,0xff,0x15,0x13,0xff,0x14,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_03);
	};
// assets/el_04.tmx
	TileMap::Scene<uint16_t> el_04() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x00,0x00,0xff,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x04,0x03,0xff,0xff,0xff,
			0x00,0x01,0x01,0x24,0x23,0x01,0x01,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_04);
	};
// assets/el_05.tmx
	TileMap::Scene<uint16_t> el_05() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0x00,0xff,0xff,0xff,
			0xff,0xff,0xff,0x00,0x00,0x00,0xff,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0x07,0xff,0xff,0xff,
			0xff,0xff,0xff,0x05,0x27,0x02,0xff,0xff,
			0x00,0x01,0x01,0x25,0x10,0x23,0x01,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_05);
	};
// assets/el_06.tmx
	TileMap::Scene<uint16_t> el_06() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			0x00,0x00,0x00,0xff,0xff,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x01,0x03,0xff,0xff,0x04,0x00,0x01,
			0x10,0x10,0x12,0xff,0xff,0x14,0x10,0x10,
			0x10,0x10,0x12,0xff,0xff,0x14,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_06);
	};
// assets/el_07.tmx
	TileMap::Scene<uint16_t> el_07() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0x05,0xff,0xff,0x05,0x00,0x00,
			0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,
			0x00,0x00,0xff,0xff,0xff,0xff,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x03,0x30,0xff,0xff,0x32,0x04,0x01,
			0x10,0x13,0xff,0xff,0xff,0xff,0x15,0x10,
			0x10,0x13,0xff,0xff,0xff,0xff,0x15,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_07);
	};
// assets/el_08.tmx
	TileMap::Scene<uint16_t> el_08() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
			0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
			0x00,0x00,0xff,0x00,0xff,0x00,0xff,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x02,0xff,0x06,0xff,0x06,0xff,0x04,
			0x10,0x12,0xff,0x16,0xff,0x16,0xff,0x14,
			0x10,0x13,0xff,0x16,0xff,0x16,0xff,0x14,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_08);
	};
// assets/el_09.tmx
	TileMap::Scene<uint16_t> el_09() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x00,0x00,0xff,0xff,0xff,
			0xff,0xff,0x00,0x00,0x00,0x00,0x00,0xff,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x42,0x42,0xff,0xff,0xff,
			0xff,0xff,0x42,0x48,0x4b,0x42,0x42,0xff,
			0xff,0xff,0x48,0x6a,0x69,0x49,0x4b,0xff,
			0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x01,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_09);
	};
// assets/el_10.tmx
	TileMap::Scene<uint16_t> el_10() {
		static const uint8_t flagmapdata[64] PROGMEM = {
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0x00,0x00,0xff,0xff,0x00,0xff,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
			};
		static ProgmemData flagmapLayer(8,8,flagmapdata);
		static const uint8_t layerdata[1][64] PROGMEM = {
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0x75,0xff,0xff,0xff,
			0x00,0x03,0xff,0xff,0x07,0xff,0x05,0x01,
			0x10,0x37,0x00,0x01,0x45,0x01,0x36,0x10,
			0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(8,8,layerdata[0]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 1,TileSet<uint16_t>(tilesetTextures, 1,3),0).setFlagmap(flagmapLayer).setName(ID::el_10);
	};
// assets/skymap.tmx
	TileMap::Scene<uint16_t> skymap() {
		static const uint8_t layerdata[4][256] PROGMEM = {
			{0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
			0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,0x0f,
			0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,0x2e,
			0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,
			0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,0x2f,
			0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,0x3e,
			0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,
			0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,0x4f,
			0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,0x5e,
			0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,0x5f,
			0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,0x6e,
			0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,
			0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,0x6f,
			0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,0x7e,
			0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,
			0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,0x7f,
			},
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0x90,0xb3,0xb3,0xa2,0xa3,0x90,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0x0c,0xb1,0xb1,0xb2,0xb3,0x0d,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xc1,0xc1,0xc2,0xc3,0xc4,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0x90,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x90,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa0,0xa1,0xa2,0xa3,0xa4,0xff,
			0xff,0x90,0xb3,0xa2,0xa3,0xa4,0x90,0xff,0xff,0xff,0xb0,0xb1,0xb2,0xb3,0xb4,0xff,
			0xff,0x0c,0xb1,0xb2,0xb3,0xb0,0x0d,0xff,0xff,0xff,0xc0,0xc1,0xc2,0xc3,0xc4,0xff,
			0xff,0xc0,0xc1,0xc2,0xc3,0xc3,0xc4,0xff,0xff,0x0c,0x0d,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x1c,0x1d,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			},
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xd1,0xd0,0xd1,0xd2,0xd3,0xd4,0xd5,0xd6,0xff,
			0xe0,0xe1,0xe2,0xe3,0xe4,0xe5,0xe1,0xe2,0xe2,0xe1,0xe2,0xe3,0xe4,0xe5,0xe6,0xd4,
			0xf0,0xf1,0xf2,0xf3,0xf4,0xf5,0xf5,0xf5,0xf5,0xf1,0xf2,0xf3,0xf4,0xf5,0xf6,0xf5,
			0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,
			0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,
			0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,0xf4,
			},
			{0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
			0xa8,0xa9,0xa8,0xa8,0xa9,0xa8,0xa8,0xa8,0xa8,0xa9,0xa8,0xa9,0xa9,0xa8,0xa9,0xa8,
			0xb9,0xb9,0xb8,0xb9,0xb8,0xb8,0xb8,0xb9,0xb8,0xb8,0xb8,0xb9,0xb8,0xb8,0xb8,0xb9,
			0xc9,0xc8,0xc8,0xc9,0xc8,0xc9,0xc8,0xc8,0xc8,0xc8,0xc8,0xc8,0xc9,0xc8,0xc8,0xc9,
			},
		};
		static ProgmemData layers[] = {
			ProgmemData(16,16,layerdata[0]),
			ProgmemData(16,16,layerdata[1]),
			ProgmemData(16,16,layerdata[2]),
			ProgmemData(16,16,layerdata[3]),
		};
		static Texture<uint16_t> tilesetTextures[] = {
			Texture<uint16_t>(ImageAsset::ztiles_sky),
			Texture<uint16_t>(ImageAsset::ztiles_sky),
			Texture<uint16_t>(ImageAsset::ztiles_sky),
			Texture<uint16_t>(ImageAsset::ztiles_foreground),
		};
		return TileMap::Scene<uint16_t>(layers, 4,TileSet<uint16_t>(tilesetTextures, 4,3),0).setName(ID::skymap);
	};

}
