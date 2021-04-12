/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
*/

#import <libobjc.A.dylib/DNDStateUpdateListener.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDStateService, DNDState, NSString;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDStateService* _notificationsStateService;
	DNDState* _currentState;
	unsigned long long _lockState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_queue_postAWDMetric;
-(unsigned long long)_queue_currentAWDMetricState;
-(void)handleTransitionToUILocked:(BOOL)arg1 ;
@end

