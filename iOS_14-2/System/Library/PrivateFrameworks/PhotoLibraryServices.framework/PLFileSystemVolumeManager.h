/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initSharedVolumeManager;
-(id)volumeForURL:(id)arg1 context:(id)arg2 ;
-(void)_updateOfflineStates;
-(void)unregisterPLFileSystemVolume:(id)arg1 ;
-(void)registerPLFileSystemVolume:(id)arg1 ;
-(void)dealloc;
-(void)_updateMountedVolumeURLs;
@end

