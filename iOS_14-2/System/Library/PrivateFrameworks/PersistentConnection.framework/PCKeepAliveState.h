/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/


@interface PCKeepAliveState : NSObject {

	unsigned char _state;
	unsigned char _subState;

}

@property (assign,nonatomic) unsigned char state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned char subState;              //@synthesize subState=_subState - In the implementation block
-(unsigned char)subState;
-(id)initWithKeepAliveState:(unsigned char)arg1 subState:(unsigned char)arg2 ;
-(void)setSubState:(unsigned char)arg1 ;
-(void)setState:(unsigned char)arg1 ;
-(unsigned char)state;
@end

