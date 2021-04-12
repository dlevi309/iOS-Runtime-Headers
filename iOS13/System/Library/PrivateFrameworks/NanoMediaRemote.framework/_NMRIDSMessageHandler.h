/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
*/


@interface _NMRIDSMessageHandler : NSObject {

	unsigned short _messageType;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic,__weak) id target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(unsigned short)messageType;
-(void)setMessageType:(unsigned short)arg1 ;
@end

