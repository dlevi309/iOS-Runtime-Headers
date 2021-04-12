/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)sequence;
-(NSObject*<OS_xpc_object>)message;
-(NSObject*<OS_xpc_object>)reply;
-(void)sendReply;
-(id)initWithMessage:(id)arg1 sequence:(unsigned long long)arg2 connection:(id)arg3 ;
@end

