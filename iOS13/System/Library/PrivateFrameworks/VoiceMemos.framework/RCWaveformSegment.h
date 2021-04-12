/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RCWaveformSegment : NSObject <NSSecureCoding> {

	NSData* _averagePowerLevelData;
	BOOL _isRendered;
	SCD_Struct_RC3 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_RC3 timeRange;                       //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) BOOL isRendered;                                  //@synthesize isRendered=_isRendered - In the implementation block
@property (nonatomic,readonly) const float* averagePowerLevels; 
@property (nonatomic,readonly) long long averagePowerLevelsCount; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_discontinuityRepairedSegmentsByGrowingToFillGapsInSegments:(id)arg1 ;
+(id)_segmentByMergingMergableSegments:(id)arg1 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 beforeTime:(double)arg3 andThenUsePreferredSegmentDuration:(double)arg4 ;
+(id)emptySegmentWithTimeRange:(SCD_Struct_RC3)arg1 ;
+(id)_segmentsByJoiningSegment:(id)arg1 toSegmentIfNecessaryWithGreaterSegment:(id)arg2 averagePowerLevelJoinLimit:(unsigned long long)arg3 ;
+(id)_mergedSegmentByFastMergingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)_mergedSegmentByResamplingWithMergeableSegments:(id)arg1 mergedLevelsDuration:(double)arg2 ;
+(id)segmentsByReparingDiscontinuitiesInSegments:(id)arg1 ;
+(id)segmentsByShiftingSegments:(id)arg1 byTimeOffset:(double)arg2 ;
+(id)segmentsByMergingSegments:(id)arg1 preferredSegmentDuration:(double)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_RC3)timeRange;
-(id)simpleDescription;
-(id)verboseDescription;
-(BOOL)isRendered;
-(id)copyWithTimeRangeOffsetByTimeOffset:(double)arg1 ;
-(id)initWithTimeRange:(SCD_Struct_RC3)arg1 averagePowerLevelVector:(vector<float, std::__1::allocator<float> >*)arg2 ;
-(id)_initWithTimeRange:(SCD_Struct_RC3)arg1 averagePowerLevelData:(id)arg2 ;
-(id)initWithTimeRange:(SCD_Struct_RC3)arg1 averagePowerLevelData:(id)arg2 ;
-(long long)averagePowerLevelsCount;
-(const float*)averagePowerLevels;
-(id)_segmentsByJoiningIfNecessaryGreaterSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)_segmentWithValuesInContainedTimeRange:(SCD_Struct_RC3)arg1 ;
-(id)copyWithAdjustedTimeRange:(SCD_Struct_RC3)arg1 ;
-(BOOL)hasUniformPowerLevel:(float)arg1 ;
-(BOOL)isWaveformDataEqualToDataInSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 ;
-(id)segmentsByJoiningIfSmallSegment:(id)arg1 averagePowerLevelJoinLimit:(unsigned long long)arg2 ;
-(id)segmentByClippingToTimeRange:(SCD_Struct_RC3)arg1 ;
-(void)setIsRendered:(BOOL)arg1 ;
@end

