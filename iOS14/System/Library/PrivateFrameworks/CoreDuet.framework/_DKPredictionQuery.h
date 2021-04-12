/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) int slotDuration;                              //@synthesize slotDuration=_slotDuration - In the implementation block
@property (assign,nonatomic) int minimumDaysOfHistory;                      //@synthesize minimumDaysOfHistory=_minimumDaysOfHistory - In the implementation block
@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long partitionType;              //@synthesize partitionType=_partitionType - In the implementation block
@property (assign,nonatomic) BOOL useHistoricalHistogram;                   //@synthesize useHistoricalHistogram=_useHistoricalHistogram - In the implementation block
@property (nonatomic,retain) NSDate * asOfDate;                             //@synthesize asOfDate=_asOfDate - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStorage * storage;                 //@synthesize storage=_storage - In the implementation block
@property (copy) id predictionHandler;                                      //@synthesize predictionHandler=_predictionHandler - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
+(id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4 ;
+(id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3 ;
-(void)setStorage:(_DKKnowledgeStorage *)arg1 ;
-(id)handleResults:(id)arg1 error:(id)arg2 ;
-(id)executeUsingCoreDataStorage:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)partitionType;
-(_DKKnowledgeStorage *)storage;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)useHistoricalHistogram;
-(void)setPredictionHandler:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)predictionHandler;
-(void)setUseHistoricalHistogram:(BOOL)arg1 ;
-(void)setSlotDuration:(int)arg1 ;
-(void)setMinimumDaysOfHistory:(int)arg1 ;
-(int)minimumDaysOfHistory;
-(void)setPartitionType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDate *)asOfDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setAsOfDate:(NSDate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)slotDuration;
@end

