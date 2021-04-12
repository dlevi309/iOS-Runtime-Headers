/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@interface THAButton : NSObject {

	unsigned char _identifier;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned char identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(void)setIdentifier:(unsigned char)arg1 ;
-(unsigned char)identifier;
-(id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

