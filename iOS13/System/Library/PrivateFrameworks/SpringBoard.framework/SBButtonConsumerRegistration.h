/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBButtonConsumerClient;

@interface SBButtonConsumerRegistration : NSObject {

	SBButtonConsumerClient* _client;
	long long _buttonKind;
	unsigned long long _eventMask;
	long long _eventPriority;

}

@property (assign,nonatomic,__weak) SBButtonConsumerClient * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) long long buttonKind;                                //@synthesize buttonKind=_buttonKind - In the implementation block
@property (assign,nonatomic) unsigned long long eventMask;                        //@synthesize eventMask=_eventMask - In the implementation block
@property (assign,nonatomic) long long eventPriority;                             //@synthesize eventPriority=_eventPriority - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(SBButtonConsumerClient *)client;
-(void)setClient:(SBButtonConsumerClient *)arg1 ;
-(unsigned long long)eventMask;
-(void)setEventMask:(unsigned long long)arg1 ;
-(long long)buttonKind;
-(void)setButtonKind:(long long)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
@end

