/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPRealTimeAnalysisClientProtocol.h>

@class NSLock, NSXPCConnection;

@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(id)analysisService;
+(id)errorWithStatus:(int)arg1 andDescription:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)connection;
-(void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(CVBufferRef)arg2 withProperties:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
@end

