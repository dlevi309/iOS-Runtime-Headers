/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, ENFileSessionDaemon, ENXPCServiceListener;

@interface ENXPCServiceConnection : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	ENFileSessionDaemon* _fileSession;
	ENXPCServiceListener* _serviceListener;
	int _pid;
	NSObject*<OS_xpc_object> _xpcConnection;

}
+(id)connectionWithXPCConnection:(id)arg1 serviceListener:(id)arg2 dispatchQueue:(id)arg3 ;
-(void)activate;
-(void)invalidate;
-(void)xpcConnectionEvent:(id)arg1 ;
-(void)xpcConnectionRequest:(id)arg1 ;
-(void)xpcFileSessionActivate:(id)arg1 archive:(BOOL)arg2 ;
-(void)xpcFileSessionInvalidate:(id)arg1 ;
-(void)xpcFileSessionReadTEKBatch:(id)arg1 ;
-(void)xpcFileSessionReadSignatures:(id)arg1 ;
-(void)xpcSendReplyError:(id)arg1 request:(id)arg2 ;
-(void)xpcSendMessage:(id)arg1 ;
@end

