/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleReachabilityYOffsetDidChange;
-(id)init;
-(void)scheduleAlertLayoutVerificationForReason:(id)arg1 ;
-(void)setAlertItemWindow:(id)arg1 ;
-(void)setAlertPresenter:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(void)dealloc;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
@end

