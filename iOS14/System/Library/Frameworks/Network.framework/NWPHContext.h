/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_xpc_object;
@class NSObject;

@interface NWPHContext : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_xpc_object> _request;
	NSObject*<OS_xpc_object> _reply;

}

@property (retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (retain) NSObject*<OS_xpc_object> request;                 //@synthesize request=_request - In the implementation block
@property (retain) NSObject*<OS_xpc_object> reply;                   //@synthesize reply=_reply - In the implementation block
@property (nonatomic,readonly) int pid; 
-(int)pid;
-(id)initWithRequest:(id)arg1 onConnection:(id)arg2 ;
-(void)setRequest:(NSObject*<OS_xpc_object>)arg1 ;
-(NSObject*<OS_xpc_object>)request;
-(NSObject*<OS_xpc_object>)connection;
-(NSObject*<OS_xpc_object>)reply;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setReply:(NSObject*<OS_xpc_object>)arg1 ;
@end

