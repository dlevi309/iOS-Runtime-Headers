/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface THAButton : NSObject {

	unsigned char _identifier;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned char)identifier;
-(void)setIdentifier:(unsigned char)arg1 ;
-(id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2 ;
@end

