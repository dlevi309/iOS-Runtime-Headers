/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/VideoProcessors/StereoStitchingProcessor.bundle/StereoStitchingProcessor
*/


@class NSMutableDictionary;

@interface FigStreamingStereoStitchingTuningParameters : NSObject {

	NSMutableDictionary* _tuningParams;

}
-(id)initWithTuningDictionary:(id)arg1 cameraInfoByPortType:(id)arg2 ;
-(int)getTuningForPortType:(id)arg1 options:(id)arg2 tuningParams:(id)arg3 ;
-(int)readStreamingStereoStitchingConfig:(id)arg1 ;
-(id)tuningForPortType:(id)arg1 ;
@end

