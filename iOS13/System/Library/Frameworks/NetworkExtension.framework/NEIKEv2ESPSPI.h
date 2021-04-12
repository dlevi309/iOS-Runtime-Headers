/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2SPI.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {

	unsigned _value;

}

@property (assign) unsigned value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(id)initWithValue:(unsigned)arg1 ;
@end

