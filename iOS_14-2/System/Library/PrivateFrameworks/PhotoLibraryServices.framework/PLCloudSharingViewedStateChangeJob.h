/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob {

	BOOL _albumHasUnseenContent;
	BOOL _assetCollectionHasUnreadComments;
	long long _jobType;
	NSString* _albumGUID;
	long long _albumUnviewedAssetCount;
	NSString* _assetCollectionGUID;
	NSDate* _assetCollectionLastViewedCommentDate;

}

@property (assign,nonatomic) long long jobType;                                          //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                                       //@synthesize albumGUID=_albumGUID - In the implementation block
@property (assign,nonatomic) BOOL albumHasUnseenContent;                                 //@synthesize albumHasUnseenContent=_albumHasUnseenContent - In the implementation block
@property (assign,nonatomic) long long albumUnviewedAssetCount;                          //@synthesize albumUnviewedAssetCount=_albumUnviewedAssetCount - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                             //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (assign,nonatomic) BOOL assetCollectionHasUnreadComments;                      //@synthesize assetCollectionHasUnreadComments=_assetCollectionHasUnreadComments - In the implementation block
@property (nonatomic,retain) NSDate * assetCollectionLastViewedCommentDate;              //@synthesize assetCollectionLastViewedCommentDate=_assetCollectionLastViewedCommentDate - In the implementation block
+(void)markAlbum:(id)arg1 asHavingUnseenContent:(BOOL)arg2 ;
+(void)updateUnviewedAssetCollectionCount:(int)arg1 forAlbum:(id)arg2 ;
+(void)markAssetCollection:(id)arg1 asHavingUnreadComments:(BOOL)arg2 inAlbum:(id)arg3 ;
+(void)setLastViewedCommentDate:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 ;
-(void)setJobType:(long long)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(long long)jobType;
-(id)description;
-(NSString *)albumGUID;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(void)_executeAlbumViewedStateChanged;
-(void)_executeAlbumUnviewedAssetCountChangedWithGroup;
-(BOOL)albumHasUnseenContent;
-(void)_executeAssetCommentsReadStateChangedWithGroup;
-(void)_executeAssetLastViewedCommentDateChangedWithGroup;
-(void)setAlbumHasUnseenContent:(BOOL)arg1 ;
-(long long)albumUnviewedAssetCount;
-(void)setAlbumUnviewedAssetCount:(long long)arg1 ;
-(NSString *)assetCollectionGUID;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(BOOL)assetCollectionHasUnreadComments;
-(void)setAssetCollectionHasUnreadComments:(BOOL)arg1 ;
-(NSDate *)assetCollectionLastViewedCommentDate;
-(void)setAssetCollectionLastViewedCommentDate:(NSDate *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
-(void)setAlbumGUID:(NSString *)arg1 ;
@end

