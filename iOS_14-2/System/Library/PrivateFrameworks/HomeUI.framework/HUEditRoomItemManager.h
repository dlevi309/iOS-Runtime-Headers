/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFStaticItem, HFZoneModule, HFRoomBuilder;

@interface HUEditRoomItemManager : HFItemManager {

	HFStaticItem* _nameItem;
	HFStaticItem* _cameraItem;
	HFStaticItem* _chooseWallpaperItem;
	HFStaticItem* _wallpaperThumbnailItem;
	HFStaticItem* _wallpaperPickerItem;
	HFStaticItem* _removeItem;
	HFZoneModule* _zoneModule;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                        //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (nonatomic,retain) HFStaticItem * nameItem;                            //@synthesize nameItem=_nameItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * cameraItem;                          //@synthesize cameraItem=_cameraItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * chooseWallpaperItem;                 //@synthesize chooseWallpaperItem=_chooseWallpaperItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperThumbnailItem;              //@synthesize wallpaperThumbnailItem=_wallpaperThumbnailItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * wallpaperPickerItem;                 //@synthesize wallpaperPickerItem=_wallpaperPickerItem - In the implementation block
@property (nonatomic,retain) HFStaticItem * removeItem;                          //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) HFZoneModule * zoneModule;                          //@synthesize zoneModule=_zoneModule - In the implementation block
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HFRoomBuilder *)roomBuilder;
-(HFStaticItem *)cameraItem;
-(HFStaticItem *)nameItem;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(void)setNameItem:(HFStaticItem *)arg1 ;
-(void)setRemoveItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)removeItem;
-(id)initWithRoomBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setCameraItem:(HFStaticItem *)arg1 ;
-(void)setChooseWallpaperItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperThumbnailItem:(HFStaticItem *)arg1 ;
-(void)setWallpaperPickerItem:(HFStaticItem *)arg1 ;
-(HFStaticItem *)chooseWallpaperItem;
-(HFStaticItem *)wallpaperThumbnailItem;
-(HFStaticItem *)wallpaperPickerItem;
-(BOOL)_canDeleteRoom;
-(HFZoneModule *)zoneModule;
-(void)setZoneModule:(HFZoneModule *)arg1 ;
@end

