/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSString * uniqueName; 
@property (nonatomic,readonly) NSArray * dataStorePropertyKeys; 
@property (nonatomic,retain) NSDictionary * dataStoreProperties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)registrationDate;
-(NSString *)uniqueName;
-(NSString *)description;
-(id<ACHEarnedInstanceAwarding>)source;
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

