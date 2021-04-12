/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@interface ASMessageHandler : NSObject {

	Class _protobufClass;
	SEL _handleReceiveMessageAction;
	SEL _handleErrorSendingMessageAction;

}

@property (assign,nonatomic) Class protobufClass;                              //@synthesize protobufClass=_protobufClass - In the implementation block
@property (assign,nonatomic) SEL handleReceiveMessageAction;                   //@synthesize handleReceiveMessageAction=_handleReceiveMessageAction - In the implementation block
@property (assign,nonatomic) SEL handleErrorSendingMessageAction;              //@synthesize handleErrorSendingMessageAction=_handleErrorSendingMessageAction - In the implementation block
-(Class)protobufClass;
-(void)setProtobufClass:(Class)arg1 ;
-(SEL)handleReceiveMessageAction;
-(void)setHandleReceiveMessageAction:(SEL)arg1 ;
-(SEL)handleErrorSendingMessageAction;
-(void)setHandleErrorSendingMessageAction:(SEL)arg1 ;
@end

