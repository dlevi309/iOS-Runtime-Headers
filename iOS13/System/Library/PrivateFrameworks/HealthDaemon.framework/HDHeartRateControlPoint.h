/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic {

	unsigned char _operation;

}

@property (assign,nonatomic) unsigned char operation;              //@synthesize operation=_operation - In the implementation block
+(id)uuid;
-(id)description;
-(unsigned char)operation;
-(void)setOperation:(unsigned char)arg1 ;
-(id)initWithOperation:(unsigned char)arg1 ;
-(id)getBinaryValueWithError:(id*)arg1 ;
@end

