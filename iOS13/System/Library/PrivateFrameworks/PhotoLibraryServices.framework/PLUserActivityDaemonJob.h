/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob {

	long long _actionType;
	NSString* _albumUUID;
	NSArray* _assetUUIDs;
	long long _cloudFeedContent;
	NSString* _suggestedCMMUUID;
	NSString* _momentShareUUID;

}

@property (assign) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * albumUUID;                      //@synthesize albumUUID=_albumUUID - In the implementation block
@property (nonatomic,retain) NSArray * assetUUIDs;                    //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (assign,nonatomic) long long cloudFeedContent;              //@synthesize cloudFeedContent=_cloudFeedContent - In the implementation block
@property (nonatomic,copy) NSString * suggestedCMMUUID;               //@synthesize suggestedCMMUUID=_suggestedCMMUUID - In the implementation block
@property (nonatomic,copy) NSString * momentShareUUID;                //@synthesize momentShareUUID=_momentShareUUID - In the implementation block
+(void)userDidDeleteSharedAssets:(id)arg1 ;
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(id)newUserActivityDaemonJob;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
+(void)userDidChangeStatusForSuggestedCMM:(id)arg1 ;
+(void)userDidChangeStatusForMomentShare:(id)arg1 ;
-(void)run;
-(long long)actionType;
-(void)setActionType:(long long)arg1 ;
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)runDaemonSide;
-(NSArray *)assetUUIDs;
-(void)setAlbumUUID:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(NSString *)albumUUID;
-(long long)cloudFeedContent;
-(void)setCloudFeedContent:(long long)arg1 ;
-(NSString *)suggestedCMMUUID;
-(void)setSuggestedCMMUUID:(NSString *)arg1 ;
-(NSString *)momentShareUUID;
-(void)setMomentShareUUID:(NSString *)arg1 ;
@end

