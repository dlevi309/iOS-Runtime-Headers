/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCompactResult : NSObject {

	float _score;
	SCD_Struct_VC28 _timerange;

}

@property (assign) SCD_Struct_VC28 timerange;              //@synthesize timerange=_timerange - In the implementation block
@property (assign) float score;                            //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(SCD_Struct_VC28)timerange;
-(void)setTimerange:(SCD_Struct_VC28)arg1 ;
-(id)initWithTimerange:(SCD_Struct_VC28)arg1 andScore:(float)arg2 ;
@end

