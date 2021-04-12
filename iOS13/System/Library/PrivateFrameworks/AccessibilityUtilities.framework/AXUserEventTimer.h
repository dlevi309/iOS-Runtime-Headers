/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)userEventOccurred;
-(id)acquireAssertionToDisableIdleTimerWithReason:(id)arg1 ;
@end

