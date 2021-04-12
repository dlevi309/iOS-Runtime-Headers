/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@interface TIAddKeyboardController : PSListController
+(BOOL)shouldAddInputMode:(id)arg1 toEnabledInputModes:(id)arg2 ;
-(id)specifiers;
-(void)updateDoneButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(void)viewDidLoad;
-(void)doneButtonTapped;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)newSpecifiers;
-(void)toggleInputMode:(id)arg1 ;
-(void)addCheckedInputModes;
@end

