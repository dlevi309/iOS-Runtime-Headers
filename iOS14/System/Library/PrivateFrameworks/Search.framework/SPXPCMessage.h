/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/


@protocol OS_xpc_object, OS_os_transaction;
@class SPXPCConnection, NSObject, NSString, NSDictionary;

@interface SPXPCMessage : NSObject {

	SPXPCConnection* _receivingConnection;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_message;
	NSObject*<OS_xpc_object> _x_rootObject;
	NSObject*<OS_xpc_object> _x_Objects;
	NSObject*<OS_xpc_object> _x_reply;
	NSObject*<OS_xpc_object> _x_feedbackData;
	NSObject*<OS_os_transaction> _replyTransaction;
	NSString* _name;
	NSDictionary* _info;

}

@property (nonatomic,readonly) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> feedbackData; 
@property (nonatomic,copy) NSDictionary * info;                                    //@synthesize info=_info - In the implementation block
-(BOOL)needsReply;
-(void)sendReply:(id)arg1 ;
-(NSDictionary *)info;
-(void)setRootObject:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setRootObjectForFeedback:(id)arg1 ;
-(id)rootObjectOfClasses:(id)arg1 ;
-(id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2 ;
-(id)rootObjectOfClassesForFeedback:(id)arg1 ;
-(NSObject*<OS_xpc_object>)feedbackData;
-(void)setObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
@end

