/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, HDAssertionManager, NSObject, NSMutableSet, NSString;

@interface HDWorkoutEventsManager : NSObject <HDAssertionObserver> {

	HDProfile* _profile;
	HDAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _eventCollectors;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(id)_queue_eventCollectorsForType:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)takeSessionAssertionWithOwnerIdentifier:(id)arg1 activityType:(unsigned long long)arg2 sessionIdentifier:(id)arg3 eventsDelegate:(id)arg4 ;
-(void)requestPendingEventsThroughDate:(id)arg1 sessionIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

