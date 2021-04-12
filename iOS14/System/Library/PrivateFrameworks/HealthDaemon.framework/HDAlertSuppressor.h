/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDProcessStateObserver.h>
#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, HDAssertionManager, NSMutableSet, NSString;

@interface HDAlertSuppressor : NSObject <HDProcessStateObserver, HDAssertionObserver> {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _queue;
	HDAssertionManager* _assertionManager;
	NSMutableSet* _waitingForSuspension;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)initWithDaemon:(id)arg1 ;
-(void)dealloc;
-(void)assertionManager:(id)arg1 assertionTaken:(id)arg2 ;
-(void)processSuspended:(id)arg1 ;
-(void)processResumed:(id)arg1 ;
-(void)processTerminated:(id)arg1 ;
-(void)processDidEnterBackground:(id)arg1 ;
-(void)processDidEnterForeground:(id)arg1 ;
-(id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 processBundleIdentifier:(id)arg2 ;
-(void)_queue_clearSuppressionTimerForAssertion:(id)arg1 ;
-(void)_queue_suppressActivityAlertsForProcessIdentifier:(id)arg1 ;
-(id)_queue_startAlertSuppressionTimerForProcessIdentifier:(id)arg1 ;
-(void)_queue_invalidateSuppressActivityAlertsForProcessIdentifier:(id)arg1 ;
-(void)_invalidateSuppressActivityAlertsForSuspendedProcess:(id)arg1 ;
@end

