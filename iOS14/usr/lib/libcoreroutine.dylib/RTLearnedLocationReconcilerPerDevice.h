/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, RTPersistenceManager;

@interface RTLearnedLocationReconcilerPerDevice : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	RTPersistenceManager* _persistenceManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;              //@synthesize persistenceManager=_persistenceManager - In the implementation block
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(RTPersistenceManager *)persistenceManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithPersistenceManager:(id)arg1 ;
-(void)performReconciliationWithHandler:(/*^block*/id)arg1 ;
-(void)collapseReconciledVisitsToLocationsOfInterest:(id)arg1 context:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)_sortDescriptorForReconciliation;
@end

