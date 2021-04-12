/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob {

	long long _jobType;
	NSArray* _msASComments;
	NSString* _commentGUID;
	NSString* _assetGUID;
	NSString* _albumGUID;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSArray * msASComments;                             //@synthesize msASComments=_msASComments - In the implementation block
@property (nonatomic,retain) NSString * commentGUID;                             //@synthesize commentGUID=_commentGUID - In the implementation block
@property (nonatomic,retain) NSString * assetGUID;                               //@synthesize assetGUID=_assetGUID - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)assetsdLocallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 libraryServicesManager:(id)arg5 ;
+(void)publishCommentToServer:(id)arg1 ;
+(void)deleteSharedCommentFromServer:(id)arg1 ;
+(void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4 ;
+(void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2 ;
-(void)run;
-(id)description;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(NSString *)albumGUID;
-(long long)jobType;
-(void)setJobType:(long long)arg1 ;
-(NSDictionary *)mstreamdInfoDictionary;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)executeProcessServerNotificationOfCommentChanges;
-(void)executePublishCommentToServer;
-(void)executeDeleteCommentFromServer;
-(NSArray *)msASComments;
-(void)setMsASComments:(NSArray *)arg1 ;
-(NSString *)commentGUID;
-(void)setCommentGUID:(NSString *)arg1 ;
-(NSString *)assetGUID;
-(void)setAssetGUID:(NSString *)arg1 ;
@end

