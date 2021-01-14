/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {

	id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBLockScreenEmergencyCallViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<SBLockScreenEmergencyCallViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setBackgroundStyle:(long long)arg1 ;
-(id)tintColorForBackgroundStyle:(long long)arg1 outBlurRadius:(double*)arg2 ;
-(void)dismiss;
-(long long)_wallpaperStyleFromUIBackgroundStyle:(long long)arg1 ;
@end

