/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NSURL, NTKPhotoResourcesManifest, NTKPhotosReader, NTKPhotosResourceDirectorySanitizerValidationStrategy;

@interface NTKPhotosResourceDirectorySanitizer : NSObject {

	NSURL* _resourceDirectoryURL;
	NTKPhotoResourcesManifest* _manifest;
	NTKPhotosReader* _reader;
	NTKPhotosResourceDirectorySanitizerValidationStrategy* _strategy;

}
-(id)_createAssetsManifest;
-(BOOL)_manifestIsValid:(id*)arg1 ;
-(id)_createPhotosReader;
-(BOOL)_readerIsValid;
-(BOOL)_imageListItemIsValid:(id)arg1 ;
-(BOOL)_imageListItemContainsValidImage:(id)arg1 ;
-(BOOL)_imageListItemContainsValidIrisVideo:(id)arg1 ;
-(BOOL)_imageListItemHasValidCropValues:(id)arg1 ;
-(BOOL)_imageListItemHasValidAnalysisValues:(id)arg1 ;
-(BOOL)_resourceWithName:(id)arg1 isValidMediaAssetOfType:(id)arg2 withMinFileSize:(unsigned long long)arg3 maxFileSize:(unsigned long long)arg4 ;
-(id)initWithResourceDirectoryURL:(id)arg1 validationStrategy:(id)arg2 ;
-(BOOL)resourceDirectoryIsValid:(id*)arg1 ;
@end

