/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>

@class SBSpotlightSettings, SBSpotlightTransientOverlayViewController, SBMainWorkspaceTransaction, NSString;

@interface SBSpotlightTransientOverlayInteractiveGestureTransaction : SBMainWorkspaceTransaction <BSTransactionObserver> {

	BOOL _gestureFinishedBeforeTransactionBegan;
	SBSpotlightSettings* _settings;
	SBSpotlightTransientOverlayViewController* _spotlightTransientOverlayViewController;
	SBMainWorkspaceTransaction* _presentTransientOverlayTransaction;

}

@property (nonatomic,retain) SBSpotlightSettings * settings;                                                                   //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) SBSpotlightTransientOverlayViewController * spotlightTransientOverlayViewController;              //@synthesize spotlightTransientOverlayViewController=_spotlightTransientOverlayViewController - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * presentTransientOverlayTransaction;                                  //@synthesize presentTransientOverlayTransaction=_presentTransientOverlayTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transactionDidComplete:(id)arg1 ;
-(void)_begin;
-(void)_didComplete;
-(BOOL)canInterruptForTransitionRequest:(id)arg1 ;
-(void)setSettings:(SBSpotlightSettings *)arg1 ;
-(SBSpotlightSettings *)settings;
-(void)_logForInterruptAttemptReason:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 spotlightTransientOverlayViewController:(id)arg2 ;
-(void)_presentTransientOverlayViewController:(id)arg1 ;
-(void)_dismissSpotlightTransientOverlayViewController;
-(void)updatePresentationWithProgress:(double)arg1 translation:(double)arg2 ;
-(void)endPresentation:(BOOL)arg1 ;
-(void)noteGestureFinishedBeforeTransactionBegan;
-(SBSpotlightTransientOverlayViewController *)spotlightTransientOverlayViewController;
-(void)setSpotlightTransientOverlayViewController:(SBSpotlightTransientOverlayViewController *)arg1 ;
-(SBMainWorkspaceTransaction *)presentTransientOverlayTransaction;
-(void)setPresentTransientOverlayTransaction:(SBMainWorkspaceTransaction *)arg1 ;
@end

