/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSProgress, PLPhotoLibraryBundle, PLPhotoLibrary, PLDeferredPhotoFinalizer, NSObject;

@interface PLReframeService : NSObject {

	os_unfair_lock_s _lock;
	Aq _cancellationGenerationCounter;
	NSProgress* _currentProgress;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
-(id)photoLibrary;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)deferredPhotoFinalizer;
-(id)enqueueReframeRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
@end

