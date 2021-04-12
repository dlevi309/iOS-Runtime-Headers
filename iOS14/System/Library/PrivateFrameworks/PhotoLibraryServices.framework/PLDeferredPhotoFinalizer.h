/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/AVCaptureDeferredPhotoProcessorDelegate.h>

@class NSMutableDictionary, AVCaptureDeferredPhotoProcessor, NSMutableSet, PAImageConversionServiceClient, NSString;

@interface PLDeferredPhotoFinalizer : NSObject <AVCaptureDeferredPhotoProcessorDelegate> {

	NSMutableDictionary* _identifierToAssetMap;
	NSMutableDictionary* _identifierToCompletionHandler;
	AVCaptureDeferredPhotoProcessor* _finalizer;
	os_unfair_lock_s _identifierToAssetMapLock;
	NSMutableSet* _taskIdentifiersToFinalize;
	os_unfair_lock_s _taskIdentifiersToFinalizeLock;
	PAImageConversionServiceClient* _imageConversionServiceClient;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)_errorIsRecoverable:(id)arg1 ;
-(void)processor:(id)arg1 didFinishProcessingPhotoProxy:(id)arg2 finalPhoto:(id)arg3 error:(id)arg4 ;
-(void)_writeDebugFileFromProxyMetadata:(id)arg1 forAsset:(id)arg2 isWide:(BOOL)arg3 ;
-(void)requestCancellationOfAsset:(id)arg1 ;
-(void)_callCompletionHandlersWithPhotoProxy:(id)arg1 processor:(id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)performSemanticEnhanceForAsset:(id)arg1 isBackgroundPriority:(BOOL)arg2 reason:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_createAssetAdjustmentsForAsset:(id)arg1 error:(id*)arg2 ;
-(id)_imageConversionOptionsForAsset:(id)arg1 adjustments:(id)arg2 isBackgroundPriority:(BOOL)arg3 reason:(id)arg4 ;
-(void)_setupMediaConversionSourceCollections:(id)arg1 destinationCollection:(id)arg2 forAsset:(id)arg3 ;
-(void)_prepareFinalizedAssetForSemanticDevelopment:(id)arg1 finalizedPhotoData:(id)arg2 ;
-(void)cancelFinalizationForTaskIdentifier:(id)arg1 ;
-(void)requestFinalizationOfAsset:(id)arg1 forWide:(BOOL)arg2 isBackgroundPriority:(BOOL)arg3 reason:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)deleteIntermediatesExcludingDeferredIdentifiers:(id)arg1 ;
@end

