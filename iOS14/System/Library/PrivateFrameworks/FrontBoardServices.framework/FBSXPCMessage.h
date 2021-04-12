/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)messageWithBSXPCMessage:(id)arg1 ownReply:(BOOL)arg2 ;
+(id)messageWithPayload:(id)arg1 ;
+(id)messageWithPacker:(/*^block*/id)arg1 ;
-(id)init;
-(NSObject*<OS_xpc_object>)payload;
-(id)initWithMessagePacker:(/*^block*/id)arg1 ;
-(void)sendReplyMessageWithPacker:(/*^block*/id)arg1 ;
-(id)initWithMessagePayload:(id)arg1 ;
@end

