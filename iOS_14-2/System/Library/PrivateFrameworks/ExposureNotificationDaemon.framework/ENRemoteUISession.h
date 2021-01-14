/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
*/


@protocol OS_xpc_object;
@class NSUUID, ENXPCConnection, NSObject;

@interface ENRemoteUISession : NSObject {

	NSUUID* _sessionID;
	ENXPCConnection* _connection;
	NSObject*<OS_xpc_object> _originalRequest;

}

@property (nonatomic,copy) NSUUID * sessionID;                                      //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic,__weak) ENXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(NSObject*<OS_xpc_object>)originalRequest;
-(void)setOriginalRequest:(NSObject*<OS_xpc_object>)arg1 ;
-(ENXPCConnection *)connection;
-(void)setConnection:(ENXPCConnection *)arg1 ;
@end

