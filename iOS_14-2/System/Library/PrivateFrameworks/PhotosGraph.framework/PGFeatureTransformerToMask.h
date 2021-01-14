/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureSliceTransformer.h>

@interface PGFeatureTransformerToMask : PGFeatureSliceTransformer {

	float _maskingValue;

}

@property (nonatomic,readonly) float maskingValue;              //@synthesize maskingValue=_maskingValue - In the implementation block
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initWithMaskingFloatValue:(float)arg1 ;
-(id)initWithMaskingFloatValue:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(float)maskingValue;
@end

