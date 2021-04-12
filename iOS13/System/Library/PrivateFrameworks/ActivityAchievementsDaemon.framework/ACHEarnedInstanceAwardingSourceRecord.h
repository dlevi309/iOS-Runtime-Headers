/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/ACHDataStorePropertyProviding.h>

@protocol OS_dispatch_queue, ACHEarnedInstanceAwarding;
@class NSString, NSArray, NSDictionary, ACHDataStore, ACHEarnedInstanceStore, NSOperationQueue, NSObject, NSDateInterval, NSDate;

@interface ACHEarnedInstanceAwardingSourceRecord : NSObject <ACHDataStorePropertyProviding> {

	ACHDataStore* _dataStore;
	ACHEarnedInstanceStore* _earnedInstanceStore;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDateInterval* _lastScheduledEvaluationInterval;
	NSDateInterval* _lastCompletedEvaluationInterval;
	id<ACHEarnedInstanceAwarding> _source;
	NSDate* _registrationDate;

}

@property (nonatomic,readonly) id<ACHEarnedInstanceAwarding> source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * registrationDate;                                     //@synthesize registrationDate=_registrationDate - In the implementation block
@property (nonatomic,readonly) NSDateInterval * lastScheduledEvaluationInterval; 
@property (nonatomic,readonly) NSDateInterval * lastCompletedEvaluationInterval; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) NSArray * dataStorePropertyKeys; 
@property (nonatomic,retain) NSDictionary * dataStoreProperties; 
-(NSString *)description;
-(id<ACHEarnedInstanceAwarding>)source;
-(NSDate *)registrationDate;
-(NSString *)uniqueName;
-(void)dataStoreDidClearAllProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)dataStorePropertyKeys;
-(NSDictionary *)dataStoreProperties;
-(void)setDataStoreProperties:(NSDictionary *)arg1 ;
-(id)initWithSource:(id)arg1 earnedInstanceStore:(id)arg2 dataStore:(id)arg3 registrationDate:(id)arg4 ;
-(void)cancelAllEvaluationOperations;
-(NSDateInterval *)lastCompletedEvaluationInterval;
-(NSDateInterval *)lastScheduledEvaluationInterval;
-(void)addEvaluationOperationWithDateInterval:(id)arg1 databaseContext:(id)arg2 evaluationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
@end

