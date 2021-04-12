/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PLAbstractLibraryServicesManagerService.h>
#import <libobjc.A.dylib/PLAssetsdSyncServiceProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject, PLXPCTransaction, PLFileSystemAssetImporter, NSString;

@interface PLAssetsdSyncService : PLAbstractLibraryServicesManagerService <PLAssetsdSyncServiceProtocol> {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSObject*<OS_dispatch_group> _updateGroup;
	PLXPCTransaction* _libraryTransaction;
	PLFileSystemAssetImporter* _importer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(void)updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3 ;
-(void)finalizeOTARestoreRecreatingAlbums:(BOOL)arg1 ;
-(void)_finalizeOTARestoreEndedAndRecreateAlbums:(BOOL)arg1 ;
-(void)_updateRestoredAssetWithUUID:(id)arg1 paths:(id)arg2 fixAddedDate:(BOOL)arg3 ;
-(void)_updatePendingCountForMissingAsset:(id)arg1 ;
-(void)_linkPathsAside:(id)arg1 ;
-(void)_recoverAsideFiles:(id)arg1 ;
-(void)_cleanupAlbumMetadataAsideFilesAfterRestore;
-(id)_fileRestoreExclusionPaths;
-(id)_readRestoreAlbumMetadataForAlbum:(id)arg1 ;
-(void)_addAsset:(id)arg1 toAlbumsForUUID:(id)arg2 ;
@end

