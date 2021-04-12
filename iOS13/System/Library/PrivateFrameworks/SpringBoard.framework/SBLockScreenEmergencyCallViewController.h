/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {

	id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBLockScreenEmergencyCallViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBLockScreenEmergencyCallViewControllerDelegate>)arg1 ;
-(void)dismiss;
-(BOOL)_canShowWhileLocked;
-(void)setBackgroundStyle:(long long)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1 ;
@end

