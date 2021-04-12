/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)stringForType:(long long)arg1 ;
+(id)handleWithDestinationID:(id)arg1 ;
+(id)normalizedEmailAddressHandleForValue:(id)arg1 ;
+(id)normalizedGenericHandleForValue:(id)arg1 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2 ;
+(id)handlesForCHRecentCall:(id)arg1 ;
+(id)handleForCHRecentCall:(id)arg1 ;
+(id)normalizedHandleWithDestinationID:(id)arg1 ;
+(id)handleWithDictionaryRepresentation:(id)arg1 ;
+(id)handleWithPersonHandle:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)personHandle;
-(NSString *)isoCountryCode;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(id)initWithHandle:(id)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(NSString *)normalizedValue;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
-(id)canonicalHandleForISOCountryCode:(id)arg1 ;
-(BOOL)isCanonicallyEqualToHandle:(id)arg1 isoCountryCode:(id)arg2 ;
-(id)initWithDestinationID:(id)arg1 ;
-(void)setHasSetISOCountryCode:(BOOL)arg1 ;
-(BOOL)isValidForISOCountryCode:(id)arg1 ;
-(BOOL)hasSetISOCountryCode;
@end

