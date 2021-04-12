/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBHomeGestureDismissableCoverSheetViewController.h>
#import <libobjc.A.dylib/SBLockScreenEmergencyDialerDelegate.h>

@class TUCallCenter, SBLockScreenEmergencyDialerController, NSString;

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate> {

	TUCallCenter* _callCenter;
	SBLockScreenEmergencyDialerController* _controller;
	BOOL _inEmergencyCall;
	BOOL _inEmergencyCallMode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)handleEvent:(id)arg1 ;
-(long long)presentationType;
-(long long)presentationPriority;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_deactivateEmergencyDialerController;
-(void)_activateEmergencyDialerController;
-(void)_updateEmergencyCallMode:(id)arg1 ;
-(void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2 ;
@end

