/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPSegment : NSObject {

	float _sumOfScore;
	float _curationScore;
	unsigned long long _numOfFrames;
	unsigned long long _numOfValidFrames;
	SCD_Struct_VC7 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_VC7 timeRange;                           //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;                   //@synthesize numOfFrames=_numOfFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfValidFrames;              //@synthesize numOfValidFrames=_numOfValidFrames - In the implementation block
@property (assign,nonatomic) float curationScore;                                //@synthesize curationScore=_curationScore - In the implementation block
-(id)init;
-(float)score;
-(void)setTimeRange:(SCD_Struct_VC7)arg1 ;
-(SCD_Struct_VC7)timeRange;
-(void)setCurationScore:(float)arg1 ;
-(float)curationScore;
-(unsigned long long)numOfFrames;
-(unsigned long long)numOfValidFrames;
-(float)sumOfScore;
-(id)initWithTimestamp:(SCD_Struct_VC6)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateWithFirstFrame:(SCD_Struct_VC7)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)updateDuration:(SCD_Struct_VC6)arg1 ;
-(void)updateSegment:(SCD_Struct_VC7)arg1 score:(float)arg2 valid:(BOOL)arg3 ;
-(void)trimSegment:(SCD_Struct_VC6)arg1 fromStart:(BOOL)arg2 ;
-(BOOL)isContentTooShort;
-(void)mergeSegment:(id)arg1 ;
-(void)copyFrom:(id)arg1 ;
@end

