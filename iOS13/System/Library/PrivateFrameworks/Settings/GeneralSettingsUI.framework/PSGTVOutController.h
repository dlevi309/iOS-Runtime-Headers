/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@class PSGTVOutManager;

@interface PSGTVOutController : PSListController {

	PSGTVOutManager* _tvOutManager;

}
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(void)handleTVOutChange;
-(void)writeValue:(CFStringRef)arg1 forKey:(CFStringRef)arg2 ;
-(id)isWidescreen:(id)arg1 ;
-(void)setWidescreen:(id)arg1 specifier:(id)arg2 ;
-(id)tvSignal:(id)arg1 ;
-(void)setTVSignal:(id)arg1 specifier:(id)arg2 ;
@end

