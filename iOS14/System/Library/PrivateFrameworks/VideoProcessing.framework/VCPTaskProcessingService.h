/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPTaskProcessingClientProtocol.h>

@class NSXPCConnection;

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {

	NSXPCConnection* _connection;

}
+(id)service;
-(id)connection;
-(id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2 ;
-(void)requestImageProcessingTask:(Class)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(void)requestImageProcessingTask:(Class)arg1 forAssetURL:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
@end

