/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {

	BOOL _enableSharing;

}

@property (assign,nonatomic) BOOL enableSharing;              //@synthesize enableSharing=_enableSharing - In the implementation block
+(void)enableCloudSharing:(BOOL)arg1 ;
+(void)disableCloudSharingWithLibraryServicesManager:(id)arg1 ;
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(BOOL)arg2 withReason:(id)arg3 ;
-(void)run;
-(id)description;
-(void)runDaemonSide;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(long long)daemonOperation;
-(BOOL)shouldArchiveXPCToDisk;
-(BOOL)enableSharing;
-(void)setEnableSharing:(BOOL)arg1 ;
@end

