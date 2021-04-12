/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, NSHashTable;

@interface AXUserEventTimer : NSObject {

	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSHashTable* _assertions;

}
+(id)sharedInstance;
-(id)init;
-(void)_stopTrackingPoorMansAssertion:(id)arg1 ;
-(void)_startTrackingPoorMansAssertion:(id)arg1 ;
-(BOOL)_canUseIdleTimerServices;
-(id)acquireAssertionToDisableIdleTimerWithReason:(id)arg1 ;
-(void)userEventOccurred;
@end

