/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)errorWithDescription:(id)arg1 ;
+(int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3 ;
+(id)sharedAnalysisService;
+(id)analysisService;
-(id)init;
-(void)invalidate;
-(id)connection;
-(void)cancelAllRequests;
-(void)cancelRequest:(int)arg1 ;
-(void)notifyLibraryAvailableAtURL:(id)arg1 ;
-(int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(BOOL)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestSceneprintProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(/*^block*/id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
@end

