/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(NSArray *)albumCloudGUIDsToDelete;
-(void)setAlbumCloudGUIDsToDelete:(NSArray *)arg1 ;
-(NSString *)inviterAddress;
-(void)setInviterAddress:(NSString *)arg1 ;
@end

