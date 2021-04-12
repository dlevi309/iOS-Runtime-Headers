/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager {

	HUTVViewingProfilesDevicesItemModule* _tvpDevicesModule;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * tvpDevicesModule;              //@synthesize tvpDevicesModule=_tvpDevicesModule - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUTVViewingProfilesDevicesItemModule *)tvpDevicesModule;
@end

