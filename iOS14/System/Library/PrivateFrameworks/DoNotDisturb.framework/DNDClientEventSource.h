/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
*/

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DNDClientEventSource : NSObject <NSCopying, NSSecureCoding> {

	NSString* _value;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sourceWithDestinationIdentifier:(id)arg1 ;
+(id)sourceWithCNContactIdentifier:(id)arg1 ;
+(id)sourceWithPhoneNumber:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)description;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)_initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
@end

