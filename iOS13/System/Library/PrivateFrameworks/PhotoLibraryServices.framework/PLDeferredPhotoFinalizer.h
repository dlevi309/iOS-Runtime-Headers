/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/AVCaptureDeferredPhotoProcessorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, AVCaptureDeferredPhotoProcessor, NSObject, NSMutableSet, NSString;

@interface PLDeferredPhotoFinalizer : NSObject <AVCaptureDeferredPhotoProcessorDelegate> {

	NSMutableDictionary* _identifierToAssetMap;
	NSMutableDictionary* _identifierToCompletionHandler;
	AVCaptureDeferredPhotoProcessor* _finalizer;
	os_unfair_lock_s _identifierToAssetMapLock;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	NSMutableSet* _taskIdentifiersToFinalize;
	os_unfair_lock_s _taskIdentifiersToFinalizeLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)processor:(id)arg1 didFinishProcessingPhotoProxy:(id)arg2 finalPhoto:(id)arg3 error:(id)arg4 ;
-(void)cancelFinalizationForTaskIdentifier:(id)arg1 ;
-(void)enqueueAssetForFinalization:(id)arg1 forWide:(BOOL)arg2 withTaskIdentifier:(id)arg3 taskDidBeginHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)deleteIntermediatesExcludingDeferredIdentifiers:(id)arg1 ;
-(BOOL)_errorIsRecoverable:(id)arg1 ;
-(void)_writeDebugFileFromProxyMetadata:(id)arg1 forAsset:(id)arg2 isWide:(BOOL)arg3 ;
-(void)requestFinalizationOfAsset:(id)arg1 forWide:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestCancellationOfAsset:(id)arg1 ;
-(void)_callCompletionHandlersWithPhotoProxy:(id)arg1 processor:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
@end

