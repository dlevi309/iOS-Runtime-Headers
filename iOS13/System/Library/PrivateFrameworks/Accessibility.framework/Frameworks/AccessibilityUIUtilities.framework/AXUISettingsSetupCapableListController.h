/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <Preferences/PSListController.h>

@interface AXUISettingsSetupCapableListController : PSListController {

	BOOL _inSetup;

}

@property (assign,nonatomic) BOOL inSetup;              //@synthesize inSetup=_inSetup - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setInSetup:(BOOL)arg1 ;
-(BOOL)inSetup;
-(id)createWelcomeControllerWithAXSettingsController:(id)arg1 title:(id)arg2 ;
-(void)filterBuddy:(id)arg1 ;
-(void)setAllSpecifiersUnsearchable:(id)arg1 ;
@end

