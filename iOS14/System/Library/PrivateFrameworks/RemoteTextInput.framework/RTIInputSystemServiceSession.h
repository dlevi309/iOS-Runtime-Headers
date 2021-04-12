/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/

#import <RemoteTextInput/RTIInputSystemSession.h>
#import <libobjc.A.dylib/RTIInputSystemSessionProtocol.h>
#import <libobjc.A.dylib/RTIInputSystemPayloadDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, RTIDataPayload, NSString;

@interface RTIInputSystemServiceSession : RTIInputSystemSession <RTIInputSystemSessionProtocol, RTIInputSystemPayloadDelegate> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _isPaused;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BOOL isPaused;                                           //@synthesize isPaused=_isPaused - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) RTIDataPayload * currentDataPayload; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sessionWithConnection:(id)arg1 ;
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3 ;
-(id)initWithConnection:(id)arg1 ;
-(void)handleTextActionPayload:(id)arg1 ;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2 ;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1 ;
-(void)flushOperations;
-(RTIDataPayload *)currentDataPayload;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2 ;
-(void)setIsPaused:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isPaused;
-(void)dealloc;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3 ;
-(void)_killConnectionWithCallback;
-(void)didInitializeWithConnection:(id)arg1 ;
-(void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)flushOperationsWithResultHandler:(/*^block*/id)arg1 ;
@end

