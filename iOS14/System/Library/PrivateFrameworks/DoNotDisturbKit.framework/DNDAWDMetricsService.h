/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_queue_postAWDMetric;
-(unsigned long long)_queue_currentAWDMetricState;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)handleTransitionToUILocked:(BOOL)arg1 ;
-(void)resume;
@end

