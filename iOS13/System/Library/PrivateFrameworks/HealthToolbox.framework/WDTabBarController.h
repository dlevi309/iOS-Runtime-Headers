/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTabBarController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class WDProfile, NSMutableDictionary, UIViewController, NSString;

@interface WDTabBarController : HKTabBarController <MFMailComposeViewControllerDelegate, WDUserActivityResponder> {

	WDProfile* _profile;
	NSMutableDictionary* _tabIndicesToNotificationDomains;
	BOOL _exportInProgress;
	UIViewController* _noDoubleTapViewController;

}

@property (nonatomic,retain) UIViewController * noDoubleTapViewController;              //@synthesize noDoubleTapViewController=_noDoubleTapViewController - In the implementation block
@property (nonatomic,readonly) BOOL exportInProgress;                                   //@synthesize exportInProgress=_exportInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)activitiesForLevelLocators:(id)arg1 startAt:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithProfile:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setViewControllers:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(BOOL)exportInProgress;
-(void)_updateActivityForViewDidAppear;
-(void)_registerForBadgeNotifications;
-(void)_deregisterFromBadgeNotifications;
-(void)_updateBadges;
-(UIViewController *)noDoubleTapViewController;
-(void)addActivityForSwitchToIndex:(unsigned long long)arg1 ;
-(void)_updateBadgeForViewControllerAtIndex:(long long)arg1 domain:(long long)arg2 ;
-(void)setBadgeNotificationDomain:(long long)arg1 forTabAtIndex:(long long)arg2 ;
-(void)setNoDoubleTapViewController:(UIViewController *)arg1 ;
@end

