/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFacesFromAssetFeatureExtractor.h>

@class MAFeatureExtractor, NSString;

@interface PGFeatureExtractorFacesFromAssetAverage : PGFacesFromAssetFeatureExtractor {

	MAFeatureExtractor* _faceFeatureExtractor;
	NSString* _name;

}

@property (readonly) MAFeatureExtractor * faceFeatureExtractor;              //@synthesize faceFeatureExtractor=_faceFeatureExtractor - In the implementation block
@property (readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
-(id)featureNames;
-(NSString *)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithFaceFeatureExtractor:(id)arg1 name:(id)arg2 ;
-(id)floatVectorWithFaces:(id)arg1 error:(id*)arg2 ;
-(BOOL)_generateError:(id*)arg1 withCode:(long long)arg2 andMessage:(id)arg3 underlyingError:(id)arg4 ;
-(MAFeatureExtractor *)faceFeatureExtractor;
@end

