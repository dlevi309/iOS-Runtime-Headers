/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface CSVoiceIdXPCConnection : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
-(id)initWithConnection:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleClientEvent:(id)arg1 ;
-(void)_handleClientMessage:(id)arg1 client:(id)arg2 ;
-(void)_handleClientError:(id)arg1 client:(id)arg2 ;
-(void)_sendReplyMessageWithResult:(BOOL)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4 ;
-(void)activateConnection;
@end

