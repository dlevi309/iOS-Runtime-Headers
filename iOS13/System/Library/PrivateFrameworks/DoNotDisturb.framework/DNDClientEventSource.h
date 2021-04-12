/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(id)_initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
@end

