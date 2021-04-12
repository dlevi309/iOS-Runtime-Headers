/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@class NSMutableArray, UIWindow, SBSharedModalAlertItemPresenter, BSMonotonicReferenceTime, NSString;

@interface SBAlertLayoutPresentationVerifier : NSObject <SBUIActiveOrientationObserver, SBReachabilityObserver> {

	BOOL _pendingLayoutVerification;
	NSMutableArray* _updateReasons;
	UIWindow* _alertWindow;
	SBSharedModalAlertItemPresenter* _alertPresenter;
	BSMonotonicReferenceTime* _firstLogEventTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)handleReachabilityYOffsetDidChange;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg1 ;
-(void)setAlertItemWindow:(id)arg1 ;
-(void)setAlertPresenter:(id)arg1 ;
-(void)_performLayoutVerification;
-(BOOL)_hasBrokenHostingLayerInvariants;
-(BOOL)_hasBrokenWindowInvariants;
-(BOOL)_hasBrokenAlertPresentationInvariants;
-(void)_logAlertItemLayout;
@end

