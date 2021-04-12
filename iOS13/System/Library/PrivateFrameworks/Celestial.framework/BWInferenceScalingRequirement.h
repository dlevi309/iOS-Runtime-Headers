/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSArray;

@interface BWInferenceScalingRequirement : NSObject {

	NSArray* _orderedVideoRequirements;

}

@property (nonatomic,readonly) NSArray * orderedVideoRequirements;              //@synthesize orderedVideoRequirements=_orderedVideoRequirements - In the implementation block
-(void)dealloc;
-(void)_appendIntermediateRequirementsToList:(id)arg1 forSatisfyingOutputRequirement:(id)arg2 ;
-(id)initWithInputVideoRequirement:(id)arg1 requestedOutputVideoRequirements:(id)arg2 ;
-(NSArray *)orderedVideoRequirements;
@end

