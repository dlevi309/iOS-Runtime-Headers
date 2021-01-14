/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <Preferences/PSListController.h>

@interface AXUISettingsSetupCapableListController : PSListController {

	BOOL _inSetup;

}

@property (assign,nonatomic) BOOL inSetup;              //@synthesize inSetup=_inSetup - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(BOOL)inSetup;
-(void)viewDidLoad;
-(void)setInSetup:(BOOL)arg1 ;
-(id)createWelcomeControllerWithAXSettingsController:(id)arg1 title:(id)arg2 ;
-(void)filterBuddy:(id)arg1 ;
-(void)setAllSpecifiersUnsearchable:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

