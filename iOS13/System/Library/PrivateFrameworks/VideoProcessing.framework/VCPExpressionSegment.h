/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPExpressionSegment : NSObject {

	float _score;
	SCD_Struct_VC28 _timeRange;

}

@property (assign,nonatomic) SCD_Struct_VC28 timeRange;              //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) float score;                            //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(void)setTimeRange:(SCD_Struct_VC28)arg1 ;
-(SCD_Struct_VC28)timeRange;
@end

