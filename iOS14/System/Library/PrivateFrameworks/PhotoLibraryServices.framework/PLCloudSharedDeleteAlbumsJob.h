/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob {

	NSArray* _albumCloudGUIDsToDelete;
	NSString* _inviterAddress;

}

@property (nonatomic,retain) NSArray * albumCloudGUIDsToDelete;              //@synthesize albumCloudGUIDsToDelete=_albumCloudGUIDsToDelete - In the implementation block
@property (nonatomic,retain) NSString * inviterAddress;                      //@synthesize inviterAddress=_inviterAddress - In the implementation block
+(void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)arg1 ;
+(void)deleteLocalAlbumForMSASAlbumGUID:(id)arg1 inviterAddress:(id)arg2 ;
-(void)run;
-(void)runDaemonSide;
-(id)description;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(NSArray *)albumCloudGUIDsToDelete;
-(void)setAlbumCloudGUIDsToDelete:(NSArray *)arg1 ;
-(NSString *)inviterAddress;
-(void)setInviterAddress:(NSString *)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
@end

