/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
*/

#import <Preferences/PSListController.h>

@interface DBSExternalDisplayPreferencesController : PSListController
-(id)specifiers;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewDidLoad;
-(void)dealloc;
-(id)valueForSpecifier:(id)arg1 ;
-(void)connectedDisplayDidUpdate:(id)arg1 ;
-(void)externalBrightnessDidUpdate:(id)arg1 ;
-(void)handleDBSExternalDisplayManagerExternalBrightnessAvailablityDidChangeNotification:(id)arg1 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessAvailablityDidChangeNotification:(id)arg1 ;
-(void)handleDBSExternalDBSDisplayPreferencesControllerExternalDisplayManagerExternalAutoBrightnessValueDidChangeNotification:(id)arg1 ;
-(id)displayModeSpecifiers;
-(void)setMatchContentEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)matchContentEnabled:(id)arg1 ;
-(id)externalBrightnessSpecifiers;
-(void)setExternalBrightnessValue:(id)arg1 specifier:(id)arg2 ;
-(id)externalBrightnessValueForSpecifier:(id)arg1 ;
-(void)setExternalAutoBrightnessValue:(id)arg1 specifier:(id)arg2 ;
-(id)externalAutoBrightnessValueForSpecifier:(id)arg1 ;
-(void)insertExternalBrightnessSpecifiers;
-(void)removeExternalBrightnessSpecifiers;
@end

