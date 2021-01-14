/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)needsReply;
-(void)sendReply:(id)arg1 ;
-(NSDictionary *)info;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
-(void)dealloc;
@end

