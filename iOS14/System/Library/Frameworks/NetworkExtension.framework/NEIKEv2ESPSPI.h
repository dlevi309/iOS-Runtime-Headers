/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2SPI.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2ESPSPI : NEIKEv2SPI <NSCopying> {

	unsigned _value;

}

@property (assign) unsigned value;              //@synthesize value=_value - In the implementation block
-(id)initWithValue:(unsigned)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)value;
-(BOOL)isEqual:(id)arg1 ;
@end

