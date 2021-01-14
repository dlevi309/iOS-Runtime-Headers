/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(CGSize*)imageSize;
-(id)uuid;
-(BOOL)isRAW;
-(BOOL)isJPEG;
-(id)thumbnailIdentifier;
-(id)uniformTypeIdentifier;
-(short)kindSubtype;
-(double)aspectRatio;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(id)debugFilename;
-(short)savedAssetType;
-(BOOL)isLoopingVideo;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForOriginalFile;
-(id)pathForAdjustmentFile;
-(id)pathForAdjustmentDataFile;
-(BOOL)isInFlight;
-(BOOL)isCloudSharedAsset;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(BOOL)isCloudPlaceholder;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;
-(short)kind;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isVideo;
-(id)originalFilename;
-(int)orientation;
-(BOOL)hasAdjustments;
-(double)duration;
-(CGSize*)originalImageSize;

@end

