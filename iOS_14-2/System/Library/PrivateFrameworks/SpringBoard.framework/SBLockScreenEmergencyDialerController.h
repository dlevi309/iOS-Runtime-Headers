/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id<SBLockScreenEmergencyDialerDelegate>)delegate;
-(BOOL)isActive;
-(void)deactivate;
-(void)setDelegate:(id<SBLockScreenEmergencyDialerDelegate>)arg1 ;
-(UIViewController *)viewController;
-(void)emergencyCallViewController:(id)arg1 didExitWithError:(id)arg2 ;
-(void)dismissEmergencyCallViewController:(id)arg1 ;
@end

