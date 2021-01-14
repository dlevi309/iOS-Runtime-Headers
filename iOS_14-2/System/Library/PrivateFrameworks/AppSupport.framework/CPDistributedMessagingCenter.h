/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
*/


#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSLock, NSOperationQueue, NSMutableDictionary, CPDistributedMessagingCallout;

@interface CPDistributedMessagingCenter : NSObject {

	NSString* _centerName;
	NSLock* _lock;
	unsigned _sendPort;
	NSOperationQueue* _asyncQueue;
	CFRunLoopSourceRef _serverSource;
	NSString* _requiredEntitlement;
	NSMutableDictionary* _callouts;
	unsigned _parkedServerPort;
	CPDistributedMessagingCallout* _currentCallout;
	unsigned _replyPort;
	BOOL _portPassing;
	BOOL _delayedReply;
	BOOL _requireLookupByPID;
	int _targetPID;

}
+(id)_centerNamed:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
+(id)pidRestrictedCenterNamed:(id)arg1 ;
+(id)centerNamed:(id)arg1 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 ;
-(void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1 ;
-(BOOL)doesServerExist;
-(void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)_initWithServerName:(id)arg1 ;
-(void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id*)arg3 auditToken:(SCD_Struct_CP3*)arg4 ;
-(void)unregisterForMessageName:(id)arg1 ;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 nonBlocking:(BOOL)arg8 ;
-(void)sendDelayedReply:(id)arg1 dictionary:(id)arg2 ;
-(id)name;
-(void)_setSendPort:(unsigned)arg1 ;
-(unsigned)_serverPort;
-(id)_initWithServerName:(id)arg1 requireLookupByPID:(BOOL)arg2 ;
-(BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2 ;
-(id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
-(void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void*)arg5 ;
-(BOOL)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(BOOL)arg5 receiveReply:(id*)arg6 nonBlocking:(BOOL)arg7 error:(id*)arg8 ;
-(void)runServerOnCurrentThread;
-(void)stopServer;
-(id)_initClientWithPort:(unsigned)arg1 ;
-(BOOL)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2 ;
-(id)delayReply;
-(void)_setupInvalidationSource;
-(BOOL)_isTaskEntitled:(SCD_Struct_CP3*)arg1 ;
-(id)_initAnonymousServer;
-(void)setTargetPID:(int)arg1 ;
-(void)_sendReplyMessage:(id)arg1 portPassing:(BOOL)arg2 onMachPort:(unsigned)arg3 ;
-(unsigned)_sendPort;
-(id)_requiredEntitlement;
-(BOOL)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id*)arg3 error:(id*)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void*)arg7 ;
-(void)dealloc;
@end

