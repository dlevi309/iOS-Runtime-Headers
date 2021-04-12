/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/


#import <Memories/Memories-Structs.h>
@class PHAssetResource, NSString, NSDate, PHAsset;

@interface PHAssetRepresentation : NSObject {

	BOOL _isAvailable;
	BOOL _adjustedVersion;
	unsigned long long _lastKnownPersistenceState;
	PHAssetResource* _mostUsefulResource;
	NSString* _localIdentifier;
	NSDate* _modificationDate;
	unsigned long long _downloadState;
	double _downloadProgress;
	NSDate* _downloadRequestDate;
	PHAsset* _asset;
	long long _mediaType;

}

@property (nonatomic,retain) PHAsset * asset;                                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSString * localIdentifier;                                 //@synthesize localIdentifier=_localIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * modificationDate;                                  //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) long long mediaType;                                        //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) unsigned long long lastKnownPersistenceState;               //@synthesize lastKnownPersistenceState=_lastKnownPersistenceState - In the implementation block
@property (assign,nonatomic) unsigned long long downloadState;                           //@synthesize downloadState=_downloadState - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                    //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) NSDate * downloadRequestDate;                               //@synthesize downloadRequestDate=_downloadRequestDate - In the implementation block
@property (assign,getter=isAdjustedVersion,nonatomic) BOOL adjustedVersion;              //@synthesize adjustedVersion=_adjustedVersion - In the implementation block
@property (readonly) PHAssetResource * mostUsefulResource;                               //@synthesize mostUsefulResource=_mostUsefulResource - In the implementation block
@property (nonatomic,readonly) NSString * derivativeFilePath; 
+(void)initialize;
+(void)clearStaticCache;
+(id)assetRepresentationWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2 ;
+(id)assetRepresentationWithIdentifierURL:(id)arg1 ;
+(void)createStaticCache;
+(id)_cachedAssetRepresentationWithIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 ;
+(void)_cacheAssetRepresentation:(id)arg1 ;
+(id)assetRepresentationWithPhotosIdentifierURL:(id)arg1 ;
+(id)assetRepresentationWithAssetsLibraryPersistentURL:(id)arg1 ;
-(NSDate *)modificationDate;
-(void)setAsset:(PHAsset *)arg1 ;
-(CGSize)imageSize;
-(NSString *)localIdentifier;
-(unsigned long long)downloadState;
-(void)setMediaType:(long long)arg1 ;
-(long long)mediaType;
-(PHAsset *)asset;
-(BOOL)isHEIF;
-(id)imageWithSize:(CGSize)arg1 ;
-(id)image;
-(double)downloadProgress;
-(void)setLocalIdentifier:(NSString *)arg1 ;
-(id)description;
-(id)imageData;
-(id)thumbnailImage;
-(void)setDownloadState:(unsigned long long)arg1 ;
-(void)setModificationDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isDownloading;
-(void)setDownloadProgress:(double)arg1 ;
-(id)avAsset;
-(id)privateFileURL;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(PHAssetResource *)mostUsefulResource;
-(id)identifierURL;
-(CGImageRef)cgimageWithSize:(CGSize)arg1 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestPlayerItemWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(NSString *)derivativeFilePath;
-(id)privateFileURLForResource:(id)arg1 ;
-(BOOL)isAdjustedVersion;
-(id)initWithAsset:(id)arg1 adjustedVersion:(BOOL)arg2 ;
-(id)initWithLocalIdentifier:(id)arg1 adjustedVersion:(BOOL)arg2 modificationDate:(id)arg3 mediaType:(long long)arg4 ;
-(id)initWithAsset:(id)arg1 localIdentifier:(id)arg2 adjustedVersion:(BOOL)arg3 modificationDate:(id)arg4 mediaType:(long long)arg5 ;
-(void)setAdjustedVersion:(BOOL)arg1 ;
-(unsigned long long)lastKnownPersistenceState;
-(int)requestThumbnailWithResultHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 synchronous:(BOOL)arg2 ;
-(id)imageWithSize:(CGSize)arg1 imageManager:(id)arg2 ;
-(CGImageRef)cgimageWithSize:(CGSize)arg1 imageManager:(id)arg2 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 synchronous:(BOOL)arg3 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestVideoWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 imageManager:(id)arg3 ;
-(id)privateVideoFileURL;
-(id)handleVideoRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 imageManager:(id)arg3 ;
-(BOOL)isDerivativeFilePathPointingToJPEGorRAWorHEIFFile;
-(void)queryLastKnownPersistenceState;
-(unsigned long long)estimatedFileSize;
-(int)requestMediaWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestExportSessionWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(int)requestImageDataWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 ;
-(int)requestImageWithResultHandler:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 ;
-(id)handlePlayerItemRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(id)handleRequestCompletionWithResult:(id)arg1 info:(id)arg2 videoRequestOptions:(id)arg3 ;
-(void)setLastKnownPersistenceState:(unsigned long long)arg1 ;
-(NSDate *)downloadRequestDate;
-(void)setDownloadRequestDate:(NSDate *)arg1 ;
@end

