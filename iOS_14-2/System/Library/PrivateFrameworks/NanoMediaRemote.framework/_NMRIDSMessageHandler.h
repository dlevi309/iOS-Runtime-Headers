/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned short)messageType;
-(void)setMessageType:(unsigned short)arg1 ;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(id)target;
@end

