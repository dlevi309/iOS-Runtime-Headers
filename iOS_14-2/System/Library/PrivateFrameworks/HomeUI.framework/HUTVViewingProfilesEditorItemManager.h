/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager {

	HUTVViewingProfilesDevicesItemModule* _tvpDevicesModule;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * tvpDevicesModule;              //@synthesize tvpDevicesModule=_tvpDevicesModule - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUTVViewingProfilesDevicesItemModule *)tvpDevicesModule;
@end

