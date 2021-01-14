/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContext:(id)arg1 visionIntegration:(id)arg2 ;
-(float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg1 ;
-(CGPoint)centroidForLandmarkRegion:(id)arg1 ;
-(id)analyzeImage:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)configureRequest:(id)arg1 ;
-(long long)_expressionTypeFromExpressionString:(id)arg1 ;
@end

