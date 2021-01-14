/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPVoiceOverClientProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface VCPVoiceOverService : NSObject <VCPVoiceOverClientProtocol> {

	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _managementQueue;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	int _nextRequestID;

}
+(id)errorWithDescription:(id)arg1 ;
+(id)service;
-(int)requestProcessingViaXPC:(id)arg1 ofPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(int)requestProcessing:(id)arg1 ofPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(id)connection;
-(void)invalidate;
@end

