/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSString* _value;
	NSString* _normalizedValue;

}

@property (nonatomic,copy,readonly) NSString * normalizedValue;              //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)handleTypeForValue:(id)arg1 ;
+(id)normalizedEmailAddressHandleForValue:(id)arg1 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2 ;
+(id)normalizedGenericHandleForValue:(id)arg1 ;
-(id)initWithHandle:(id)arg1 ;
-(NSString *)normalizedValue;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

