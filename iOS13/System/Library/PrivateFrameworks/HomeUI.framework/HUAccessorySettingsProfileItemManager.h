/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>

@class HUAccessorySettingsProfileModule;

@interface HUAccessorySettingsProfileItemManager : HFItemManager {

	HUAccessorySettingsProfileModule* _profileModule;

}

@property (nonatomic,retain) HUAccessorySettingsProfileModule * profileModule;              //@synthesize profileModule=_profileModule - In the implementation block
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 accessoryGroupItem:(id)arg2 ;
-(HUAccessorySettingsProfileModule *)profileModule;
-(void)setProfileModule:(HUAccessorySettingsProfileModule *)arg1 ;
@end

