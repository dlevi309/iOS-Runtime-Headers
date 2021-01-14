/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSArray, NSDictionary;

@interface PLPublishCloudSharedAssetsJob : PLCloudSharingJob {

	BOOL _isNewAlbum;
	NSString* _publishAlbumCloudGUID;
	NSArray* _originalAssetUUIDs;
	NSArray* _stillImageOnlyAssetUUIDs;
	NSDictionary* _customExportsInfo;
	NSDictionary* _trimmedVideoPathInfo;
	NSString* _batchCommentText;

}

@property (nonatomic,retain) NSString * publishAlbumCloudGUID;                 //@synthesize publishAlbumCloudGUID=_publishAlbumCloudGUID - In the implementation block
@property (nonatomic,retain) NSArray * originalAssetUUIDs;                     //@synthesize originalAssetUUIDs=_originalAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSArray * stillImageOnlyAssetUUIDs;               //@synthesize stillImageOnlyAssetUUIDs=_stillImageOnlyAssetUUIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * customExportsInfo;                 //@synthesize customExportsInfo=_customExportsInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * trimmedVideoPathInfo;              //@synthesize trimmedVideoPathInfo=_trimmedVideoPathInfo - In the implementation block
@property (assign,nonatomic) BOOL isNewAlbum;                                  //@synthesize isNewAlbum=_isNewAlbum - In the implementation block
@property (nonatomic,retain) NSString * batchCommentText;                      //@synthesize batchCommentText=_batchCommentText - In the implementation block
+(void)publishBatchOfOriginalAssetUUIDs:(id)arg1 toSharedAlbum:(id)arg2 withAssetsSharingInfos:(id)arg3 customExportsInfo:(id)arg4 trimmedVideoPathInfo:(id)arg5 isNewAlbum:(BOOL)arg6 batchCommentText:(id)arg7 ;
+(id)videoComplementURLForSharingFromAsset:(id)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(id)description;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(void)executeDaemonOperation;
-(BOOL)isNewAlbum;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
-(void)retrieveURLsFromAsset:(id)arg1 withExportedFileURL:(id)arg2 primaryURL:(id*)arg3 videoComplementURL:(id*)arg4 ;
-(NSDictionary *)customExportsInfo;
-(NSString *)publishAlbumCloudGUID;
-(void)setPublishAlbumCloudGUID:(NSString *)arg1 ;
-(NSArray *)originalAssetUUIDs;
-(void)setOriginalAssetUUIDs:(NSArray *)arg1 ;
-(NSArray *)stillImageOnlyAssetUUIDs;
-(void)setStillImageOnlyAssetUUIDs:(NSArray *)arg1 ;
-(void)setCustomExportsInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)trimmedVideoPathInfo;
-(void)setTrimmedVideoPathInfo:(NSDictionary *)arg1 ;
-(void)setIsNewAlbum:(BOOL)arg1 ;
-(NSString *)batchCommentText;
-(void)setBatchCommentText:(NSString *)arg1 ;
@end

