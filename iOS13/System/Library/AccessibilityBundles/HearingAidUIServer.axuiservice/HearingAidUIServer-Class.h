/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/HearingAidUIServer.axuiservice/HearingAidUIServer
*/

#import <libobjc.A.dylib/AXUIService.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>

@class UIAlertController, UIViewController, AXHearingAidDisplayController, AXAssertion, UNUserNotificationCenter, NSString;

@interface HearingAidUIServer : NSObject <AXUIService, AXUIContentViewControllerDelegate> {

	UIAlertController* _handoffAlertController;
	UIViewController* _emptyViewController;
	AXHearingAidDisplayController* _displayController;
	AXAssertion* _disableSystemGestureAssertion;
	UNUserNotificationCenter* _userNotificationCenter;

}

@property (nonatomic,retain) AXAssertion * disableSystemGestureAssertion;                      //@synthesize disableSystemGestureAssertion=_disableSystemGestureAssertion - In the implementation block
@property (nonatomic,readonly) UNUserNotificationCenter * userNotificationCenter;              //@synthesize userNotificationCenter=_userNotificationCenter - In the implementation block
@property (nonatomic,retain) AXHearingAidDisplayController * displayController;                //@synthesize displayController=_displayController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UNUserNotificationCenter *)userNotificationCenter;
-(double)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(BOOL)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
-(AXHearingAidDisplayController *)displayController;
-(void)setDisplayController:(AXHearingAidDisplayController *)arg1 ;
-(void)setDisableSystemGestureAssertion:(AXAssertion *)arg1 ;
-(void)setNewDisplayController:(id)arg1 ;
-(id)createUserNotificationRequest:(id)arg1 ;
-(AXAssertion *)disableSystemGestureAssertion;
@end

