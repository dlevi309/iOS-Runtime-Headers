/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HFItem, HFMediaSystemBuilder;

@interface HUMediaAccessoryAudioSettingsItemManager : HFItemManager {

	HFItem* _audioSettingsItem;
	HFMediaSystemBuilder* _mediaSystemBuilder;

}

@property (nonatomic,readonly) HFItem * audioSettingsItem;                             //@synthesize audioSettingsItem=_audioSettingsItem - In the implementation block
@property (nonatomic,readonly) HFMediaSystemBuilder * mediaSystemBuilder;              //@synthesize mediaSystemBuilder=_mediaSystemBuilder - In the implementation block
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithMediaSystemBuilder:(id)arg1 sourceItem:(id)arg2 delegate:(id)arg3 ;
-(HFItem *)audioSettingsItem;
-(HFMediaSystemBuilder *)mediaSystemBuilder;
@end

