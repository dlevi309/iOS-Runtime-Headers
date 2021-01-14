/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureSliceTransformer.h>

@interface PGFeatureTransformerMultiplyByScalar : PGFeatureSliceTransformer {

	float _scalarToMultiply;

}

@property (nonatomic,readonly) float scalarToMultiply;              //@synthesize scalarToMultiply=_scalarToMultiply - In the implementation block
+(id)name;
+(id)instanceWithParameters:(id)arg1 error:(id*)arg2 ;
-(id)applyTransformationToFloatVector:(id)arg1 error:(id*)arg2 ;
-(id)initWithScalarToMultiply:(float)arg1 ;
-(id)initWithScalarToMultiply:(float)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 ;
-(float)scalarToMultiply;
@end

