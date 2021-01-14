/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDateInterval, NSDate;

@interface REDateRelevanceProvider : RERelevanceProvider {

	NSDateInterval* _interval;
	NSDate* _initialRelevanceDate;
	NSDate* _irrelevantDate;
	double _recentDuration;

}

@property (nonatomic,readonly) NSDateInterval * interval;                  //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSDate * initialRelevanceDate;              //@synthesize initialRelevanceDate=_initialRelevanceDate - In the implementation block
@property (nonatomic,readonly) NSDate * irrelevantDate;                    //@synthesize irrelevantDate=_irrelevantDate - In the implementation block
@property (nonatomic,readonly) double recentDuration;                      //@synthesize recentDuration=_recentDuration - In the implementation block
+(id)_simulationDateFormatter;
+(id)relevanceSimulatorID;
-(NSDateInterval *)interval;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(id)initWithEventInterval:(id)arg1 ;
-(id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 ;
-(id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4 ;
-(id)initWithEventDate:(id)arg1 ;
-(id)initWithEventDate:(id)arg1 duration:(double)arg2 ;
-(NSDate *)initialRelevanceDate;
-(NSDate *)irrelevantDate;
-(double)recentDuration;
@end

