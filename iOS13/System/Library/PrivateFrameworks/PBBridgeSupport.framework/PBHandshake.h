/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@interface PBHandshake : NSObject {

	unsigned _position;
	unsigned _version;
	unsigned _state;

}

@property (assign,nonatomic) unsigned position;              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned version;               //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned state;                 //@synthesize state=_state - In the implementation block
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)state;
-(unsigned)position;
-(void)setState:(unsigned)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
@end

