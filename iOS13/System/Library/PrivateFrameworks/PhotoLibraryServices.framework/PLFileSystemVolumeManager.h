/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSFileManager, NSMutableDictionary, NSMapTable;

@interface PLFileSystemVolumeManager : NSObject {

	NSObject*<OS_dispatch_queue> _synchronizationQueue;
	NSFileManager* _fileManager;
	NSMutableDictionary* _mountedVolumeURLsByUuid;
	NSMutableDictionary* _registeredFileSystemVolumesByUuid;
	NSMapTable* _mocsByVolume;

}
+(id)sharedFileSystemVolumeManager;
-(void)dealloc;
-(id)initSharedVolumeManager;
-(id)volumeForURL:(id)arg1 context:(id)arg2 ;
-(void)registerPLFileSystemVolume:(id)arg1 ;
-(void)unregisterPLFileSystemVolume:(id)arg1 ;
-(void)_updateOfflineStates;
-(void)_updateMountedVolumeURLs;
@end

