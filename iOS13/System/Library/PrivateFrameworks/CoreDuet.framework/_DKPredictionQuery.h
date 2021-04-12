/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKEventQuery.h>

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery : _DKEventQuery {

	BOOL _useHistoricalHistogram;
	BOOL _isTopNPrediction;
	int _slotDuration;
	int _minimumDaysOfHistory;
	int _totalSlotsInDay;
	unsigned long long _type;
	unsigned long long _partitionType;
	NSDate* _asOfDate;
	_DKKnowledgeStorage* _storage;
	/*^block*/id _predictionHandler;
	long long _topN;
	double _minLikelihood;

}

@property (assign,nonatomic) int totalSlotsInDay;                           //@synthesize totalSlotsInDay=_totalSlotsInDay - In the implementation block
@property (assign,nonatomic) BOOL isTopNPrediction;                         //@synthesize isTopNPrediction=_isTopNPrediction - In the implementation block
@property (assign,nonatomic) long long topN;                                //@synthesize topN=_topN - In the implementation block
@property (assign,nonatomic) double minLikelihood;                          //@synthesize minLikelihood=_minLikelihood - In the implementation block
@property (assign,nonatomic) int slotDuration;                              //@synthesize slotDuration=_slotDuration - In the implementation block
@property (assign,nonatomic) int minimumDaysOfHistory;                      //@synthesize minimumDaysOfHistory=_minimumDaysOfHistory - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long partitionType;              //@synthesize partitionType=_partitionType - In the implementation block
@property (assign,nonatomic) BOOL useHistoricalHistogram;                   //@synthesize useHistoricalHistogram=_useHistoricalHistogram - In the implementation block
@property (nonatomic,retain) NSDate * asOfDate;                             //@synthesize asOfDate=_asOfDate - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStorage * storage;                 //@synthesize storage=_storage - In the implementation block
@property (copy) id predictionHandler;                                      //@synthesize predictionHandler=_predictionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
+(id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
+(BOOL)calendar:(id)arg1 isWeekendWithIntervalToWeekdayWeekendTransition:(double*)arg2 containingOrAfterDate:(id)arg3 ;
+(id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(_DKKnowledgeStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(void)setSlotDuration:(int)arg1 ;
-(int)totalSlotsInDay;
-(void)setAsOfDate:(NSDate *)arg1 ;
-(void)setIsTopNPrediction:(BOOL)arg1 ;
-(void)setTopN:(long long)arg1 ;
-(void)setMinLikelihood:(double)arg1 ;
-(BOOL)both:(id)arg1 and:(id)arg2 areWeekendOrWeekdayWithCalendar:(id)arg3 ;
-(BOOL)both:(id)arg1 and:(id)arg2 areSameDayOfWeekWith:(id)arg3 ;
-(int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2 ;
-(void)setValueForIndex:(int)arg1 forObservations:(id)arg2 withDenominator:(double)arg3 ;
-(BOOL)shouldIncludeEventWithStartDate:(id)arg1 eventSlot:(int)arg2 withPredictionStartDate:(id)arg3 withPartitionType:(unsigned long long)arg4 andCalendar:(id)arg5 ;
-(int)computeSlotFromMidnightForDate:(id)arg1 ;
-(void)addEventsToObservations:(id)arg1 startingHistogram:(id)arg2 endingHistogram:(id)arg3 withPredictionDate:(id)arg4 ;
-(void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 durationSinceFirstEvent:(double)arg3 calendar:(id)arg4 observations:(id)arg5 lastDate:(id*)arg6 lastSlot:(int*)arg7 ;
-(void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 durationSinceFirstEvent:(double)arg4 calendar:(id)arg5 observations:(id)arg6 useWeights:(BOOL)arg7 ;
-(id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withHistogramInterval:(id)arg3 withPredictionStartDate:(id)arg4 durationSinceFirstEvent:(double)arg5 ;
-(id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3 ;
-(id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2 ;
-(void)setPartitionType:(unsigned long long)arg1 ;
-(void)setUseHistoricalHistogram:(BOOL)arg1 ;
-(void)setMinimumDaysOfHistory:(int)arg1 ;
-(int)slotDuration;
-(int)minimumDaysOfHistory;
-(unsigned long long)partitionType;
-(BOOL)useHistoricalHistogram;
-(NSDate *)asOfDate;
-(id)predictionHandler;
-(void)setPredictionHandler:(id)arg1 ;
-(void)setTotalSlotsInDay:(int)arg1 ;
-(BOOL)isTopNPrediction;
-(long long)topN;
-(double)minLikelihood;
@end

