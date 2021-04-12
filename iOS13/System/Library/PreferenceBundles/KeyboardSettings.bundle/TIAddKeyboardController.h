/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>

@interface TIAddKeyboardController : PSListController
+(BOOL)shouldAddInputMode:(id)arg1 toEnabledInputModes:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)cancelButtonTapped;
-(void)doneButtonTapped;
-(void)updateDoneButton;
-(id)newSpecifiers;
-(void)toggleInputMode:(id)arg1 ;
-(void)addCheckedInputModes;
@end

