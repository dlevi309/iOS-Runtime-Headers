/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/ControlCenter/Bundles/SpokenNotificationsModule.bundle/SpokenNotificationsModule
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModule.h>

@class CCUIContentModuleContext, NSMutableArray, CCUIMenuModuleItem, NSString;

@interface SiriUISpokenNotificationsModule : CCUIMenuModuleViewController <CCUIContentModule> {

	CCUIContentModuleContext* _contentModuleContext;
	BOOL _selectedOnExpansion;
	NSMutableArray* _menuItems;
	CCUIMenuModuleItem* _menuItemOn;
	CCUIMenuModuleItem* _menuItemMute;
	CCUIMenuModuleItem* _menuItemOffForTheDay;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)_refreshState;
-(void)_updateMenuItems;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)setContentModuleContext:(id)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)_refreshStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(void)_createMenuItems;
-(void)_updateMenuItemsWithDate:(id)arg1 ;
-(void)_turnOnSpokenMessages;
-(void)_muteSpokenMessages;
-(void)_turnOffSpokenMessagesForTheDay;
-(BOOL)isConnectedToH1Device;
@end

