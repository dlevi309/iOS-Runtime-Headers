/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@class ColorMatchingTuning, ConfidenceTuning, LinearBlendingTuning;

@interface StreamingTuning : NSObject {

	ColorMatchingTuning* _colorMatching;
	ConfidenceTuning* _confidenceTuning;
	LinearBlendingTuning* _linearBlending;

}

@property (nonatomic,retain) ColorMatchingTuning * colorMatching;                //@synthesize colorMatching=_colorMatching - In the implementation block
@property (nonatomic,retain) ConfidenceTuning * confidenceTuning;                //@synthesize confidenceTuning=_confidenceTuning - In the implementation block
@property (nonatomic,retain) LinearBlendingTuning * linearBlending;              //@synthesize linearBlending=_linearBlending - In the implementation block
-(ColorMatchingTuning *)colorMatching;
-(void)setColorMatching:(ColorMatchingTuning *)arg1 ;
-(ConfidenceTuning *)confidenceTuning;
-(void)setConfidenceTuning:(ConfidenceTuning *)arg1 ;
-(LinearBlendingTuning *)linearBlending;
-(void)setLinearBlending:(LinearBlendingTuning *)arg1 ;
@end

