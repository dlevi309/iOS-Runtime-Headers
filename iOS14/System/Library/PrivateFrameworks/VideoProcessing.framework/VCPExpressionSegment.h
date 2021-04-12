/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPExpressionSegment : NSObject {

	float _score;
	SCD_Struct_VC7 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_VC7 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setTimeRange:(SCD_Struct_VC7)arg1 ;
-(SCD_Struct_VC7)timeRange;
-(void)setScore:(float)arg1 ;
@end

