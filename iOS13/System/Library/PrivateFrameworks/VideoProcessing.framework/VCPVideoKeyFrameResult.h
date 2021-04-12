/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPVideoKeyFrameResult : NSObject {

	float _score;
	SCD_Struct_VC6 _timeStamp;

}

@property (nonatomic,readonly) SCD_Struct_VC6 timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) float score;                           //@synthesize score=_score - In the implementation block
-(float)score;
-(SCD_Struct_VC6)timeStamp;
-(id)initWithTime:(SCD_Struct_VC6)arg1 andScore:(float)arg2 ;
@end

