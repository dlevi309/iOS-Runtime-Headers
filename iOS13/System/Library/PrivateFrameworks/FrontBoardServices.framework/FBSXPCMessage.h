/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_xpc_object, BSXPCServiceConnectionMessage;
@class NSObject;

@interface FBSXPCMessage : NSObject {

	NSObject*<OS_xpc_object> _payload;
	id<BSXPCServiceConnectionMessage> _reply;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;              //@synthesize payload=_payload - In the implementation block
+(id)message;
+(id)messageWithPacker:(/*^block*/id)arg1 ;
+(id)messageWithPayload:(id)arg1 ;
+(id)messageWithBSXPCMessage:(id)arg1 ownReply:(BOOL)arg2 ;
-(id)init;
-(NSObject*<OS_xpc_object>)payload;
-(id)initWithMessagePayload:(id)arg1 ;
-(id)initWithMessagePacker:(/*^block*/id)arg1 ;
-(void)sendReplyMessageWithPacker:(/*^block*/id)arg1 ;
@end

