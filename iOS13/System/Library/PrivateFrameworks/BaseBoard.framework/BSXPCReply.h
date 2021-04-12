/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)message;
-(id)_initWithReply:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(void)sendReply:(/*^block*/id)arg1 ;
-(long long)messageKind;
@end

