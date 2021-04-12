/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPImageQualityAnalyzer : NSObject {

	float _qualityScore;

}

@property (readonly) float qualityScore;              //@synthesize qualityScore=_qualityScore - In the implementation block
-(float)qualityScore;
-(int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(/*^block*/id)arg3 ;
@end

