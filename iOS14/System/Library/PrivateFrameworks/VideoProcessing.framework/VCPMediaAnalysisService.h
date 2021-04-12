/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/VCPMediaAnalysisClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableDictionary* _progressBlocks;
	int _nextRequestID;

}
+(int)queryProgressDetail:(id*)arg1 forPhotoLibraryURL:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)analysisService;
+(id)errorWithDescription:(id)arg1 ;
+(int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)sharedAnalysisService;
+(int)queryProgressDetail:(id*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
-(int)requestVideoStabilizationForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(int)requestResetFaceClassificationModelForPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(BOOL)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestAnalysisTypes:(unsigned long long)arg1 forAssetWithResourceURLs:(id)arg2 withOptions:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestClusterCacheValidationWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestRebuildPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestPersonPromoterStatusWithAdvancedFlag:(BOOL)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelAllRequests;
-(int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)requestVIPModelFilepathForPhotoLibraryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)requestResetFaceClusteringStateWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)requestSceneprintProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)connection;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestSuggestedMePersonIdentifierWithContext:(id)arg1 photoLibraryURL:(id)arg2 progressHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(int)requestFaceProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestReclusterFacesWithPhotoLibraryURL:(id)arg1 progressHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelBackgroundActivity;
-(void)invalidate;
-(int)requestQuickFaceIdentificationForPhotoLibraryURL:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestFaceProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestFaceCandidatesforKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 photoLibraryURL:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestSuggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 photoLibraryURL:(id)arg4 progessHandler:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(int)requestUpdateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(BOOL)arg2 photoLibraryURL:(id)arg3 progessHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)requestMultiWorkerProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)cancelRequest:(int)arg1 ;
-(int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

