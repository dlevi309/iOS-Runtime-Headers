/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUAccessorySettingsProfileModule;

@interface HUAccessorySettingsProfileItemManager : HFItemManager {

	HUAccessorySettingsProfileModule* _profileModule;

}

@property (nonatomic,retain) HUAccessorySettingsProfileModule * profileModule;              //@synthesize profileModule=_profileModule - In the implementation block
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2 ;
-(HUAccessorySettingsProfileModule *)profileModule;
-(void)setProfileModule:(HUAccessorySettingsProfileModule *)arg1 ;
@end

