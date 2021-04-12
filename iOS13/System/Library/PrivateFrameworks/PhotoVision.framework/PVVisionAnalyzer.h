/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@protocol PVVisionIntegrating;
#import <PhotoVision/PhotoVision-Structs.h>
@class PVContext, NSDictionary;

@interface PVVisionAnalyzer : NSObject {

	id<PVVisionIntegrating> _visionIntegration;
	PVContext* _context;
	NSDictionary* _detectionOptions;
	NSDictionary* _detailsExtractionOptions;

}
-(void)configureRequest:(id)arg1 ;
-(id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContext:(id)arg1 visionIntegration:(id)arg2 ;
-(CGPoint)centroidForLandmarkRegion:(id)arg1 ;
-(long long)_expressionTypeFromExpressionString:(id)arg1 ;
-(float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1 ;
@end

