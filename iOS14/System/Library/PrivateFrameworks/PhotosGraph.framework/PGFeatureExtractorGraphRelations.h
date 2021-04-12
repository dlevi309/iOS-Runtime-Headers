/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAssetFeatureExtractor.h>

@class PGGraph, MAFeatureExtractor;

@interface PGFeatureExtractorGraphRelations : PGAssetFeatureExtractor {

	PGGraph* _graph;
	MAFeatureExtractor* _featureExtractor;

}

@property (nonatomic,readonly) PGGraph * graph;                                    //@synthesize graph=_graph - In the implementation block
@property (nonatomic,readonly) MAFeatureExtractor * featureExtractor;              //@synthesize featureExtractor=_featureExtractor - In the implementation block
-(PGGraph *)graph;
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 ;
-(id)initWithGraph:(id)arg1 featureExtractor:(id)arg2 ;
-(id)floatVectorWithMoment:(id)arg1 error:(id*)arg2 ;
-(MAFeatureExtractor *)featureExtractor;
@end

