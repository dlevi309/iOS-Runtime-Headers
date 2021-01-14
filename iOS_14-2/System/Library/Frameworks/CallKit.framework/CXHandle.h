/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CallKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CXHandle : NSObject <NSCopying, NSSecureCoding> {

	long long _type;
	NSString* _value;

}

@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringForType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(id)init;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

