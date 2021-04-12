/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEIKEv2SPI.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2IKESPI : NEIKEv2SPI <NSCopying> {

	unsigned long long _value;

}

@property (assign) unsigned long long value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)value;
-(void)setValue:(unsigned long long)arg1 ;
-(id)initWithValue:(unsigned long long)arg1 ;
@end

