/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGAssetCollectionFeatureExtractor.h>

@class MAFeatureExtractor, NSArray, NSString;

@interface PGFeatureExtractorAssetCollectionAverage : PGAssetCollectionFeatureExtractor {

	MAFeatureExtractor* _assetFeatureExtractor;
	NSArray* _assetFetchOptionPropertySet;
	NSString* _name;

}

@property (nonatomic,readonly) MAFeatureExtractor * assetFeatureExtractor;              //@synthesize assetFeatureExtractor=_assetFeatureExtractor - In the implementation block
@property (nonatomic,readonly) NSArray * assetFetchOptionPropertySet;                   //@synthesize assetFetchOptionPropertySet=_assetFetchOptionPropertySet - In the implementation block
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithAssetFeatureExtractor:(id)arg1 assetFetchOptionPropertySet:(id)arg2 name:(id)arg3 ;
-(BOOL)_generateError:(id*)arg1 code:(long long)arg2 message:(id)arg3 underlyingError:(id)arg4 ;
-(MAFeatureExtractor *)assetFeatureExtractor;
-(NSArray *)assetFetchOptionPropertySet;
@end

