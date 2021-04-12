/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, NSObject, PLPhotoLibrary, NSString, NSDate;

@interface PLCameraPreviewWellManager : NSObject {

	NSMutableArray* _workQueue;
	os_unfair_lock_s _queueLock;
	BOOL _active;
	os_unfair_lock_s _activeLock;
	NSObject*<OS_dispatch_queue> _serialQueue;
	PLPhotoLibrary* _photoLibrary;
	BOOL _currentPreviewWellMetadataIsLoaded;
	NSString* _currentPreviewWellAssetUUID;
	NSDate* _currentPreviewWellAddedDate;
	double _currentPreviewWellSortToken;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)_fetchPreviewWellAssetWithAssetHandler:(/*^block*/id)arg1 ;
-(void)_inqProcessAssetChanges;
-(void)_clearPreviewWellAndNotify;
-(void)_processChange:(id)arg1 ;
-(void)_saveImageAndNotify:(CGImageRef)arg1 assetUUID:(id)arg2 ;
-(void)_fetchPreviewWellMetadataIfNeeded;
-(void)considerAssetForPreviewWellChanges:(id)arg1 ;
-(void)refreshPreviewWellImage;
@end

