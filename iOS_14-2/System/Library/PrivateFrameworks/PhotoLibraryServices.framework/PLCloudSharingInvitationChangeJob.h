/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString, NSDictionary;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob {

	NSArray* _MSASSharingRelationships;
	long long _relationshipChangeType;
	NSString* _albumGUID;
	NSString* _resendInvitationGUID;
	long long _jobType;
	NSDictionary* _mstreamdInfoDictionary;

}

@property (nonatomic,retain) NSArray * MSASSharingRelationships;                 //@synthesize MSASSharingRelationships=_MSASSharingRelationships - In the implementation block
@property (assign,nonatomic) long long relationshipChangeType;                   //@synthesize relationshipChangeType=_relationshipChangeType - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;                               //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) NSString * resendInvitationGUID;                    //@synthesize resendInvitationGUID=_resendInvitationGUID - In the implementation block
@property (assign,nonatomic) long long jobType;                                  //@synthesize jobType=_jobType - In the implementation block
@property (nonatomic,retain) NSDictionary * mstreamdInfoDictionary;              //@synthesize mstreamdInfoDictionary=_mstreamdInfoDictionary - In the implementation block
+(void)sendServerPendingInvitationsForAlbumWithGUID:(id)arg1 ;
+(void)resendPendingInvitationWithGUID:(id)arg1 albumGUID:(id)arg2 ;
+(void)saveServerStateLocallyForSharingACLRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
+(void)saveServerStateLocallyForSharingInvitationRelationships:(id)arg1 changeType:(long long)arg2 info:(id)arg3 ;
-(void)setJobType:(long long)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(long long)jobType;
-(id)description;
-(NSString *)albumGUID;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
-(NSDictionary *)mstreamdInfoDictionary;
-(void)setMstreamdInfoDictionary:(NSDictionary *)arg1 ;
-(void)setAlbumGUID:(NSString *)arg1 ;
-(void)executeSaveServerStateLocallyForSharingInvitationRelationships;
-(NSArray *)MSASSharingRelationships;
-(void)executeSaveServerStateLocallyForSharingACLRelationships;
-(void)executeSendServerPendingInvitationsForAlbumWithGUID;
-(void)setMSASSharingRelationships:(NSArray *)arg1 ;
-(long long)relationshipChangeType;
-(void)setRelationshipChangeType:(long long)arg1 ;
-(NSString *)resendInvitationGUID;
-(void)setResendInvitationGUID:(NSString *)arg1 ;
@end

