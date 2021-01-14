/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject {

	float _score;
	VCPVideoKeyFrameResult* _keyFrame;
	SCD_Struct_VC7 _timerange;

}

@property (nonatomic,readonly) SCD_Struct_VC7 timerange;                       //@synthesize timerange=_timerange - In the implementation block
@property (nonatomic,readonly) float score;                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) VCPVideoKeyFrameResult * keyFrame;              //@synthesize keyFrame=_keyFrame - In the implementation block
-(float)score;
-(VCPVideoKeyFrameResult *)keyFrame;
-(SCD_Struct_VC7)timerange;
-(id)initWithTimeRange:(SCD_Struct_VC7)arg1 score:(float)arg2 andKeyFrame:(id)arg3 ;
@end

