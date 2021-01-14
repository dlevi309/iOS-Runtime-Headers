/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic {

	unsigned char _operation;

}

@property (assign,nonatomic) unsigned char operation;              //@synthesize operation=_operation - In the implementation block
+(id)uuid;
-(id)initWithOperation:(unsigned char)arg1 ;
-(void)setOperation:(unsigned char)arg1 ;
-(unsigned char)operation;
-(id)description;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end

