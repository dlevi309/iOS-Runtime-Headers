/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPCompactResult : NSObject {

	float _score;
	SCD_Struct_VC7 _timerange;

}

@property (assign) SCD_Struct_VC7 timerange;              //@synthesize timerange=_timerange - In the implementation block
@property (assign) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(void)setScore:(float)arg1 ;
-(SCD_Struct_VC7)timerange;
-(id)initWithTimerange:(SCD_Struct_VC7)arg1 andScore:(float)arg2 ;
-(void)setTimerange:(SCD_Struct_VC7)arg1 ;
@end

