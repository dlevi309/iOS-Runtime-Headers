/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface TUHandle : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasSetISOCountryCode;
	long long _type;
	NSString* _value;
	NSString* _isoCountryCode;
	NSString* _normalizedValue;

}

@property (assign,nonatomic) BOOL hasSetISOCountryCode;                                   //@synthesize hasSetISOCountryCode=_hasSetISOCountryCode - In the implementation block
@property (nonatomic,copy) NSString * isoCountryCode;                                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * normalizedValue;                           //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (assign,nonatomic) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * value;                                              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handlesForCHRecentCall:(id)arg1 ;
+(id)stringForType:(long long)arg1 ;
+(id)handleForCHRecentCall:(id)arg1 ;
+(id)handleWithDestinationID:(id)arg1 ;
+(id)handleWithDictionaryRepresentation:(id)arg1 ;
+(id)normalizedHandleWithDestinationID:(id)arg1 ;
+(id)normalizedEmailAddressHandleForValue:(id)arg1 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2 ;
+(id)normalizedGenericHandleForValue:(id)arg1 ;
+(id)handleWithPersonHandle:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)personHandle;
-(id)initWithHandle:(id)arg1 ;
-(NSString *)normalizedValue;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(id)init;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)initWithDestinationID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(void)setType:(long long)arg1 ;
-(BOOL)hasSetISOCountryCode;
-(void)setValue:(NSString *)arg1 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(id)description;
-(void)setHasSetISOCountryCode:(BOOL)arg1 ;
-(id)canonicalHandleForISOCountryCode:(id)arg1 ;
-(long long)type;
-(BOOL)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidForISOCountryCode:(id)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEquivalentToHandle:(id)arg1 ;
-(NSString *)value;
-(BOOL)isEqual:(id)arg1 ;
@end

