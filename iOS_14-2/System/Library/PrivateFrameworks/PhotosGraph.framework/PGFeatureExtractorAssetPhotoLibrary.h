/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGFeatureExtractor.h>

@class MAFeatureExtractor;

@interface PGFeatureExtractorAssetPhotoLibrary : PGFeatureExtractor {

	MAFeatureExtractor* _photoLibraryFeatureExtractor;

}

@property (nonatomic,readonly) MAFeatureExtractor * photoLibraryFeatureExtractor;              //@synthesize photoLibraryFeatureExtractor=_photoLibraryFeatureExtractor - In the implementation block
-(id)featureNames;
-(id)name;
-(long long)featureLength;
-(id)floatVectorWithEntity:(id)arg1 error:(id*)arg2 ;
-(id)initWithPhotoLibraryFeatureExtractor:(id)arg1 ;
-(MAFeatureExtractor *)photoLibraryFeatureExtractor;
@end

