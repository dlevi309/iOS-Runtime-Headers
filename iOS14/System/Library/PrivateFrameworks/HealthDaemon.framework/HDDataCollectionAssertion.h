/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)collectionInterval;
-(HDDataCollectionObserverState *)observerState;
-(NSSet *)sampleTypes;
-(id)description;
-(id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4 ;
-(void)setObserverState:(HDDataCollectionObserverState *)arg1 ;
-(HDDataCollectionManager *)dataCollectionManager;
@end

