/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDictionary, NSDate;

@interface _CDAutoSuCache : NSObject {

	NSDictionary* _predictedSleep;
	NSDate* _predictedSleepValidityStartDate;
	NSDate* _predictedSleepValidityEndDate;

}

@property (retain) NSDictionary * predictedSleep;                         //@synthesize predictedSleep=_predictedSleep - In the implementation block
@property (retain) NSDate * predictedSleepValidityStartDate;              //@synthesize predictedSleepValidityStartDate=_predictedSleepValidityStartDate - In the implementation block
@property (retain) NSDate * predictedSleepValidityEndDate;                //@synthesize predictedSleepValidityEndDate=_predictedSleepValidityEndDate - In the implementation block
+(id)sharedCache;
-(void)clear;
-(void)setPredictedSleepValidityEndDate:(NSDate *)arg1 ;
-(NSDictionary *)predictedSleep;
-(void)setPredictedSleep:(NSDictionary *)arg1 ;
-(void)setPredictedSleepValidityStartDate:(NSDate *)arg1 ;
-(void)setCachedPredictedSleepDictionary:(id)arg1 validityStartDate:(id)arg2 validityEndDate:(id)arg3 ;
-(id)cachedPredictedSleepDictionaryForDate:(id)arg1 ;
-(NSDate *)predictedSleepValidityStartDate;
-(NSDate *)predictedSleepValidityEndDate;
@end

