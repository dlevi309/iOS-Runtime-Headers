/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <libobjc.A.dylib/VCPHomeKitAnalysisClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface VCPHomeKitAnalysisService : NSObject <VCPHomeKitAnalysisClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	NSMutableDictionary* _progressBlocks;
	int _nextRequestID;

}
+(id)analysisService;
-(id)init;
-(id)connection;
-(void)cancelAllRequests;
-(void)cancelRequest:(int)arg1 ;
-(int)requestAnalysis:(unsigned long long)arg1 ofAssetData:(id)arg2 withProperties:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(int)requestAnalysis:(unsigned long long)arg1 ofAssetSurface:(id)arg2 withProperties:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
@end

