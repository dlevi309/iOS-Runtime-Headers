/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UserNotificationsUIKit/NCNotificationPresentableViewController.h>
#import <libobjc.A.dylib/SBBannerManagerPresentable.h>

@class UIViewController, NSString;

@interface SBNotificationPresentableViewController : NCNotificationPresentableViewController <SBBannerManagerPresentable>

@property (nonatomic,readonly) UIViewController * viewController; 
@property (nonatomic,readonly) long long presentableType; 
@property (getter=isDraggingDismissalEnabled,nonatomic,readonly) BOOL draggingDismissalEnabled; 
@property (getter=isDraggingInteractionEnabled,nonatomic,readonly) BOOL draggingInteractionEnabled; 
@property (getter=isTouchOutsideDismissalEnabled,nonatomic,readonly) BOOL touchOutsideDismissalEnabled; 
@property (nonatomic,copy,readonly) NSString * requesterIdentifier; 
@property (nonatomic,copy,readonly) NSString * requestIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleHomeButtonLongPress;
-(BOOL)handleHeadsetButtonPress:(BOOL)arg1 ;
-(BOOL)handleLockButtonPress;
-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleHomeButtonDoublePress;
-(BOOL)handleVolumeUpButtonPress;
-(BOOL)handleHomeButtonPress;
-(BOOL)shouldAcquireWindowLevelAssertion;
-(BOOL)shouldDismissForReason:(id)arg1 ;
@end

