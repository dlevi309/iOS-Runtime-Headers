/*
* Generated on Monday, March 1, 2021 at 2:34:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>
#import <UIKit/UITextViewDelegate.h>

@class TIAboutKeyboardPrivacyController, NSString;

@interface TIAddKeyboardLanguageListController : PSListController <UITextViewDelegate> {

	TIAboutKeyboardPrivacyController* _aboutPrivacyController;

}

@property (nonatomic,retain) TIAboutKeyboardPrivacyController * aboutPrivacyController;              //@synthesize aboutPrivacyController=_aboutPrivacyController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)specifiers;
-(void)cancelButtonTapped;
-(void)dismissForDone;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(void)willResume;
-(void)showAddSystemKeyboardSheet:(id)arg1 ;
-(void)showAddExtensionKeyboardSheet:(id)arg1 ;
-(void)handleSoleInputModeAddition:(id)arg1 ;
@end

