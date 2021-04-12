/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBLockScreenEmergencyCallViewControllerDelegate.h>

@protocol SBLockScreenEmergencyDialerDelegate;
@class SBLockScreenEmergencyCallViewController, UIViewController, NSString;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate> {

	SBLockScreenEmergencyCallViewController* _viewController;
	BOOL _active;
	id<SBLockScreenEmergencyDialerDelegate> _delegate;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                        //@synthesize active=_active - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                  //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyDialerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBLockScreenEmergencyDialerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenEmergencyDialerDelegate>)arg1 ;
-(BOOL)isActive;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(UIViewController *)viewController;
-(void)deactivate;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
@end

