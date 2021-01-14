/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SGPostalAddressComponents : NSObject <NSCopying, NSSecureCoding> {

	NSString* _street;
	NSString* _subLocality;
	NSString* _city;
	NSString* _subAdministrativeArea;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _isoCountryCode;

}

@property (nonatomic,readonly) NSString * street;                             //@synthesize street=_street - In the implementation block
@property (nonatomic,readonly) NSString * subLocality;                        //@synthesize subLocality=_subLocality - In the implementation block
@property (nonatomic,readonly) NSString * city;                               //@synthesize city=_city - In the implementation block
@property (nonatomic,readonly) NSString * subAdministrativeArea;              //@synthesize subAdministrativeArea=_subAdministrativeArea - In the implementation block
@property (nonatomic,readonly) NSString * state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * postalCode;                         //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,readonly) NSString * country;                            //@synthesize country=_country - In the implementation block
@property (nonatomic,readonly) NSString * isoCountryCode;                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)components:(id)arg1 city:(id)arg2 state:(id)arg3 postalCode:(id)arg4 country:(id)arg5 ;
+(id)components:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 ;
-(NSString *)subLocality;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)street;
-(NSString *)country;
-(NSString *)subAdministrativeArea;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)isoCountryCode;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(BOOL)isEqualToPostalAddressComponents:(id)arg1 ;
-(id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

