/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)specifiers;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)cancelButtonTapped;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)dismissForDone;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(void)willResume;
-(void)showAddSystemKeyboardSheet:(id)arg1 ;
-(void)showAddExtensionKeyboardSheet:(id)arg1 ;
-(void)handleSoleInputModeAddition:(id)arg1 ;
@end

