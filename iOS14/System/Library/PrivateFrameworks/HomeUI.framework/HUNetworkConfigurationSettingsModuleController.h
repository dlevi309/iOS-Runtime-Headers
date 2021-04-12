/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUNetworkConfigurationSettingsModuleDelegate.h>
#import <libobjc.A.dylib/HUTappableTextViewDelegate.h>

@class NSString;

@interface HUNetworkConfigurationSettingsModuleController : HUItemTableModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSelectItem:(id)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(NSString *)description;
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)tappableTextView:(id)arg1 tappedAtIndex:(unsigned long long)arg2 withAttributes:(id)arg3 ;
-(void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)arg1 ;
-(id)_presentNetworkConfigurationSettingsMismatchViewController;
@end

