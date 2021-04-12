/*
* Generated on Thursday, January 14, 2021 at 2:22:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {

	BOOL _enableSharing;

}

@property (assign,nonatomic) BOOL enableSharing;              //@synthesize enableSharing=_enableSharing - In the implementation block
+(void)enableCloudSharing:(BOOL)arg1 withPathManager:(id)arg2 ;
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(BOOL)arg2 withReason:(id)arg3 ;
+(void)disableCloudSharingWithLibraryServicesManager:(id)arg1 ;
-(void)run;
-(void)runDaemonSide;
-(id)description;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(BOOL)enableSharing;
-(void)setEnableSharing:(BOOL)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(long long)daemonOperation;
@end

