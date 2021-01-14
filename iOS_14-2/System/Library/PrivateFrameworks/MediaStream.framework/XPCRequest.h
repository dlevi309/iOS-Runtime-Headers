/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


@protocol OS_xpc_object;
@class NSObject;

@interface XPCRequest : NSObject {

	/*^block*/id _handler;
	unsigned long long _sequence;
	NSObject*<OS_xpc_object> _message;
	NSObject*<OS_xpc_object> _reply;

}

@property (nonatomic,readonly) unsigned long long sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> reply;                //@synthesize reply=_reply - In the implementation block
-(NSObject*<OS_xpc_object>)message;
-(NSObject*<OS_xpc_object>)reply;
-(unsigned long long)sequence;
-(void)sendReply;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3 ;
@end

