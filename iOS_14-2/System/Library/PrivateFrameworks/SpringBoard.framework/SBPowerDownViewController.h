/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SBPowerDownViewDelegate.h>

@protocol SBPowerDownViewControllerDelegate;
@class SBPowerDownView, NSString;

@interface SBPowerDownViewController : SBTransientOverlayViewController <SBPowerDownViewDelegate> {

	unsigned long long _aggdStartTime;
	BOOL _canAlterScreenBrightness;
	SBPowerDownView* _powerDownView;
	id<SBPowerDownViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBPowerDownViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleLockButtonPress;
-(id<SBPowerDownViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)setDelegate:(id<SBPowerDownViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(long long)idleTimerMode;
-(BOOL)shouldDisableControlCenter;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)powerDownViewAnimateOutCompleted:(id)arg1 ;
-(void)powerDownViewWillAnimateIn:(id)arg1 ;
-(void)powerDownViewWillAnimateOut:(id)arg1 ;
-(void)powerDownViewRequestPowerDown:(id)arg1 ;
-(void)powerDownViewRequestCancel:(id)arg1 ;
-(BOOL)shouldDisableSiri;
-(void)viewDidLayoutSubviews;
-(void)_beginTimeTracking;
-(void)_incrementCountForKey:(id)arg1 ;
-(void)_endTimeTrackingIncludingReportWithKey:(id)arg1 ;
-(void)_resetScreenBrightness;
-(void)powerDownViewDidBeginSlide:(id)arg1 ;
-(void)powerDownView:(id)arg1 didUpdateSlideWithValue:(double)arg2 ;
-(void)powerDownViewDidCompleteSlide:(id)arg1 ;
-(void)powerDownViewDidCancelSlide:(id)arg1 ;
-(void)powerDownViewDidReceiveCancelButtonAction:(id)arg1 ;
-(void)powerDownViewDidFireIdleTimer:(id)arg1 ;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(BOOL)shouldDisableBanners;
-(BOOL)shouldPendAlertItems;
@end

