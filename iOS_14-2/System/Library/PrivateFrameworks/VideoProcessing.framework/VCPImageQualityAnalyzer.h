/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@interface VCPImageQualityAnalyzer : NSObject {

	float _qualityScore;

}

@property (readonly) float qualityScore;              //@synthesize qualityScore=_qualityScore - In the implementation block
-(float)qualityScore;
-(int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(/*^block*/id)arg3 ;
@end

