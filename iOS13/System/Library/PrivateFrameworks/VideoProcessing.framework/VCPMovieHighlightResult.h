/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject {

	float _score;
	VCPVideoKeyFrameResult* _keyFrame;
	SCD_Struct_VC28 _timerange;

}

@property (nonatomic,readonly) SCD_Struct_VC28 timerange;                      //@synthesize timerange=_timerange - In the implementation block
@property (nonatomic,readonly) float score;                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) VCPVideoKeyFrameResult * keyFrame;              //@synthesize keyFrame=_keyFrame - In the implementation block
-(float)score;
-(SCD_Struct_VC28)timerange;
-(VCPVideoKeyFrameResult *)keyFrame;
-(id)initWithTimeRange:(SCD_Struct_VC28)arg1 score:(float)arg2 andKeyFrame:(id)arg3 ;
@end

