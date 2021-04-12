/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) UIViewController*<CCUIContentModuleContentViewController> contentViewController; 
@property (nonatomic,readonly) UIViewController*<CCUIContentModuleBackgroundViewController> backgroundViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(id)contentViewControllerForContext:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateMenuItems;
-(void)setContentModuleContext:(id)arg1 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_refreshState;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_refreshStateWithSelected:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_createMenuItems;
-(void)_updateMenuItemsWithDate:(id)arg1 ;
-(void)_turnOnSpokenMessages;
-(void)_muteSpokenMessages;
-(void)_turnOffSpokenMessagesForTheDay;
-(BOOL)isConnectedToH1Device;
@end

