/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

