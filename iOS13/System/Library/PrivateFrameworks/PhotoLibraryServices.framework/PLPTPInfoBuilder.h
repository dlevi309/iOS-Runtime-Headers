/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol PLPTPTransferableAsset, PLFileManager;
@class NSString, NSKnownKeysDictionary, NSMutableDictionary;

@interface PLPTPInfoBuilder : NSObject {

	id<PLPTPTransferableAsset> _asset;
	id<PLFileManager> _fileManager;
	NSString* _filenameForPTP;
	NSKnownKeysDictionary* _info;
	NSMutableDictionary* _relatedFilesMetadata;

}
+(id)pictureTransferProtocolInformationForAsset:(id)arg1 asFirstAsset:(BOOL)arg2 ;
+(id)_ptpCalendar;
-(id)initWithAsset:(id)arg1 ;
-(id)pictureTransferProtocolInformationAsFirstAsset:(BOOL)arg1 ;
-(id)initWithAsset:(id)arg1 fileManager:(id)arg2 ;
-(BOOL)_suppressPtpInfo;
-(BOOL)_buildDirectoryPathAndFilename;
-(void)_buildCloudPhotosEnabledWithFirstAsset:(BOOL)arg1 ;
-(void)_buildExifAvailable;
-(void)_buildFileSize;
-(void)_buildOriginatingAssetID;
-(void)_buildThumbnailOffsetAndLength;
-(void)_buildImageDimensions;
-(void)_buildThumbnailDimensions;
-(void)_buildOrientation;
-(void)_buildPhotoKey;
-(void)_buildModificationAndCreationDate;
-(void)_durationOfTheAsset;
-(void)_buildGPSInformation;
-(void)_buildBurst;
-(void)_buildSlowMo;
-(void)_buildTimelapse;
-(void)_buildRelatedFiles;
-(BOOL)_buildSidecarRelatedFiles:(id)arg1 ;
-(BOOL)_buildDiagnosticRelatedFile:(id)arg1 ;
-(BOOL)_buildAdjustmentRelatedFile:(id)arg1 ;
@end

