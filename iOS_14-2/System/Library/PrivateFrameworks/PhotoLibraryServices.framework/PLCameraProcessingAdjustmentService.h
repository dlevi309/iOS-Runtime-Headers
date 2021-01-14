/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSProgress, PLPhotoLibraryBundle, PLPhotoLibrary, PLDeferredPhotoFinalizer, NSObject;

@interface PLCameraProcessingAdjustmentService : NSObject {

	os_unfair_lock_s _lock;
	Aq _cancellationGenerationCounter;
	NSProgress* _currentProgress;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
-(id)deferredPhotoFinalizer;
-(id)photoLibrary;
-(id)initWithLibraryBundle:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)enqueueCameraProcessingAdjustmentRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

