/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/


@protocol OS_xpc_object;
@class ATXPCConnection, NSString, NSDictionary, NSObject;

@interface ATXPCMessage : NSObject {

	ATXPCConnection* _receivingConnection;
	NSString* _name;
	NSDictionary* _info;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_reply;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSDictionary *)info;
-(void)sendReply:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)needsReply;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
@end

