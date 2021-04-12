/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@protocol _PLImageLoadingAsset <_PLThumbnailLoadingAsset,NSObject>
@required
-(id)uuid;
-(int)orientation;
-(double)duration;
-(short)kind;
-(CGSize*)originalImageSize;
-(double)aspectRatio;
-(CGSize*)imageSize;
-(BOOL)isVideo;
-(id)debugFilename;
-(BOOL)isJPEG;
-(id)originalFilename;
-(short)savedAssetType;
-(id)pathForOriginalFile;
-(BOOL)hasAdjustments;
-(BOOL)hasLegacyAdjustments;
-(BOOL)isCloudSharedAsset;
-(id)uniformTypeIdentifier;
-(id)pathForAdjustmentFile;
-(short)kindSubtype;
-(void)generateLargeThumbnailFileIfNecessary;
-(BOOL)isInFlight;
-(id)thumbnailIdentifier;
-(BOOL)isCloudPlaceholder;
-(id)assetsLibraryURL;
-(long long)originalImageOrientation;
-(BOOL)isLoopingVideo;
-(BOOL)isPrimaryImageFormat;
-(BOOL)isRAW;
-(BOOL)isPartOfBurst;
-(BOOL)isStreamedVideo;
-(id)pathForAdjustmentDataFile;
-(long long)cloudSharedAssetPlaceholderKind;
-(BOOL)isCloudPhotoLibraryAsset;
-(id)managedAssetForPhotoLibrary:(id)arg1;
-(BOOL)isTimelapsePlaceholder;
-(BOOL)isOriginalSRGB;
-(unsigned long long)localResourcesState;

@end

