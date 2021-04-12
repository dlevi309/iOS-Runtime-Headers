/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBFAnalyticsBackendEventHandling.h>

@class PETScalarEventTracker, NSString;

@interface SBApplicationLayoutGestureMetric : NSObject <SBFAnalyticsBackendEventHandling> {

	PETScalarEventTracker* _pinGestureCompletionTracker;
	PETScalarEventTracker* _unpinGestureCompletionTracker;
	PETScalarEventTracker* _movePIPGestureCompletionTracker;
	PETScalarEventTracker* _moveSideGestureCompletionTracker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)handleEvent:(unsigned long long)arg1 withContext:(id)arg2 ;
-(unsigned long long)_moveActionForInitialFloatingConfig:(long long)arg1 finalConfig:(long long)arg2 ;
-(unsigned long long)_moveActionForInitialSpaceConfig:(long long)arg1 finalConfig:(long long)arg2 ;
@end

