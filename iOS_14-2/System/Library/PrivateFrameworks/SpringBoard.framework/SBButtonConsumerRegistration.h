/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SBButtonConsumerClient *)client;
-(void)setClient:(SBButtonConsumerClient *)arg1 ;
-(unsigned long long)eventMask;
-(id)description;
-(unsigned long long)hash;
-(void)setEventMask:(unsigned long long)arg1 ;
-(long long)buttonKind;
-(void)setButtonKind:(long long)arg1 ;
-(long long)eventPriority;
-(void)setEventPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

