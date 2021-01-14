/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)requestAnalysis:(unsigned long long)arg1 ofAssetData:(id)arg2 withProperties:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestAnalysis:(unsigned long long)arg1 ofAssetSurface:(id)arg2 withProperties:(id)arg3 progressHandler:(/*^block*/id)arg4 andCompletionHandler:(/*^block*/id)arg5 ;
-(int)requestResidentMaintenanceWithOptions:(id)arg1 andCompletionHandler:(/*^block*/id)arg2 ;
-(int)requestIdentificationForFaceCrop:(id)arg1 withOptions:(id)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)cancelAllRequests;
-(id)connection;
-(void)reportProgress:(double)arg1 forRequest:(int)arg2 ;
-(void)cancelRequest:(int)arg1 ;
@end

