/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@class PSGTVOutManager;

@interface PSGTVOutController : PSListController {

	PSGTVOutManager* _tvOutManager;

}
-(id)specifiers;
-(id)init;
-(void)handleTVOutChange;
-(void)dealloc;
-(void)writeValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(id)isWidescreen:(id)arg1 ;
-(void)setWidescreen:(id)arg1 specifier:(id)arg2 ;
-(id)tvSignal:(id)arg1 ;
-(void)setTVSignal:(id)arg1 specifier:(id)arg2 ;
@end

