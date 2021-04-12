/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)presentationPriority;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)aggregateAppearance:(id)arg1 ;
-(long long)presentationType;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)_deactivateEmergencyDialerController;
-(void)_activateEmergencyDialerController;
-(void)_updateEmergencyCallMode:(id)arg1 ;
-(void)emergencyDialer:(id)arg1 willDeactivateWithError:(id)arg2 ;
@end

