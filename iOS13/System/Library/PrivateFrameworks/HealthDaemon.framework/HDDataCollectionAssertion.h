/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDAssertion.h>

@class HDDataCollectionObserverState, NSSet, HDDataCollectionManager;

@interface HDDataCollectionAssertion : HDAssertion {

	os_unfair_lock_s _lock;
	HDDataCollectionObserverState* _observerState;
	NSSet* _sampleTypes;
	double _collectionInterval;
	HDDataCollectionManager* _dataCollectionManager;

}

@property (nonatomic,readonly) NSSet * sampleTypes;                                                 //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,readonly) double collectionInterval;                                           //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,__weak,readonly) HDDataCollectionManager * dataCollectionManager;              //@synthesize dataCollectionManager=_dataCollectionManager - In the implementation block
@property (nonatomic,copy) HDDataCollectionObserverState * observerState;                           //@synthesize observerState=_observerState - In the implementation block
-(id)description;
-(double)collectionInterval;
-(NSSet *)sampleTypes;
-(HDDataCollectionManager *)dataCollectionManager;
-(void)setObserverState:(HDDataCollectionObserverState *)arg1 ;
-(id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4 ;
-(HDDataCollectionObserverState *)observerState;
@end

