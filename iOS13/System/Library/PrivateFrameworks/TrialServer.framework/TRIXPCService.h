/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol OS_xpc_object, TRIXPCMessageHandling;
@class NSObject;

@interface TRIXPCService : NSObject {

	NSObject*<OS_xpc_object> _listener;
	BOOL _isRunning;
	id<TRIXPCMessageHandling> _messageHandler;

}

@property (readonly) BOOL isRunning;                                                //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) id<TRIXPCMessageHandling> messageHandler;              //@synthesize messageHandler=_messageHandler - In the implementation block
+(id)classStringForKeyedArchiver:(id)arg1 ;
+(id)classesForKeyedArchiver:(id)arg1 ;
+(id)encodeClassesFromObject:(id)arg1 error:(id*)arg2 ;
+(id)decodeClassesFromData:(id)arg1 error:(id*)arg2 ;
+(id)encodeResult:(id)arg1 error:(id)arg2 ;
+(id)decodeResult:(id)arg1 success:(BOOL*)arg2 error:(id*)arg3 ;
+(id)sendMessage:(id)arg1 success:(BOOL*)arg2 error:(id*)arg3 ;
-(id)init;
-(void)start;
-(BOOL)isRunning;
-(void)setMessageHandler:(id<TRIXPCMessageHandling>)arg1 ;
-(id<TRIXPCMessageHandling>)messageHandler;
-(void)startXpcService;
-(void)keepAlive:(id*)arg1 time:(double*)arg2 ;
-(BOOL)replyRequested:(id)arg1 ;
@end

