/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>

@interface HUNetworkConfigurationItemListModuleController : HUItemTableModuleController {

	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)style;
-(id)initWithModule:(id)arg1 style:(unsigned long long)arg2 ;
-(id)presentNetworkConfigurationSettingsForItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)arg1 ;
@end

