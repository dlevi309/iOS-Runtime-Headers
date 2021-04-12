/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <KnowledgeGraphKit/MAFeatureExtractor.h>

@class MAFeatureExtractor, NSArray;

@interface PGSequentialFeatureExtractor : MAFeatureExtractor {

	MAFeatureExtractor* _featureExtractor;
	NSArray* _featureTransformers;

}

@property (nonatomic,readonly) MAFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
@property (nonatomic,readonly) NSArray * featureTransformers;                      //@synthesize featureTransformers=_featureTransformers - In the implementation block
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)defaultFloatVectorWithError:(id*)arg1 ;
-(MAFeatureExtractor *)featureExtractor;
-(BOOL)_generateError:(id*)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
-(id)initWithFeatureExtractor:(id)arg1 featureTransformers:(id)arg2 ;
-(id)_transformFloatVector:(id)arg1 error:(id*)arg2 ;
-(NSArray *)featureTransformers;
@end

