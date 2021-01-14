/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)userDidNavigateAwayFromAllSharedAlbums;
+(void)userDidChangeStatusForSuggestedCMM:(id)arg1 ;
+(void)userDidNavigateAwayFromSharedAlbum:(id)arg1 ;
+(void)userDidLeavePhotosApplication;
+(void)userDidNavigateIntoSharedAlbum:(id)arg1 ;
+(id)newUserActivityDaemonJob;
+(void)userDidViewCloudFeedContent:(long long)arg1 ;
+(void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1 ;
+(void)userDidChangeStatusForMomentShare:(id)arg1 ;
+(void)userDidReadCommentOnSharedAsset:(id)arg1 ;
+(void)userDidDeleteSharedAlbum:(id)arg1 ;
+(void)userDidDeleteSharedAssets:(id)arg1 ;
-(void)setActionType:(long long)arg1 ;
-(long long)actionType;
-(void)run;
-(void)runDaemonSide;
-(id)initWithAssetsdClient:(id)arg1 ;
-(void)setCloudFeedContent:(long long)arg1 ;
-(long long)cloudFeedContent;
-(void)setMomentShareUUID:(NSString *)arg1 ;
-(NSString *)momentShareUUID;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(NSArray *)assetUUIDs;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
-(void)setAssetUUIDs:(NSArray *)arg1 ;
-(NSString *)suggestedCMMUUID;
-(NSString *)albumUUID;
-(void)setSuggestedCMMUUID:(NSString *)arg1 ;
-(void)setAlbumUUID:(NSString *)arg1 ;
@end

