/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@class NSArray;

@interface BWInferenceScalingRequirement : NSObject {

	NSArray* _orderedVideoRequirements;

}

@property (nonatomic,readonly) NSArray * orderedVideoRequirements;              //@synthesize orderedVideoRequirements=_orderedVideoRequirements - In the implementation block
-(void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2 intermediatePixelBufferCompressionType:(int)arg3 ;
-(id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 intermediatePixelBufferCompressionType:(int)arg3 ;
-(NSArray *)orderedVideoRequirements;
-(void)dealloc;
@end

