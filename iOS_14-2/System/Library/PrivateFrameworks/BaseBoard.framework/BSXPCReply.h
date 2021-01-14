/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)replyForMessage:(id)arg1 ;
+(id)messageWithReply:(id)arg1 ;
-(void)sendReply:(/*^block*/id)arg1 ;
-(id)message;
-(long long)messageKind;
-(id)initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
@end

