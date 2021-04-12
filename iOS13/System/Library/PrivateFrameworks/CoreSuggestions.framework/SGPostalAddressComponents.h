/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(NSString *)postalCode;
-(NSString *)city;
-(NSString *)country;
-(NSString *)isoCountryCode;
-(NSString *)street;
-(NSString *)subLocality;
-(NSString *)subAdministrativeArea;
-(id)initWithStreet:(id)arg1 subLocality:(id)arg2 city:(id)arg3 subAdministrativeArea:(id)arg4 state:(id)arg5 postalCode:(id)arg6 country:(id)arg7 isoCountryCode:(id)arg8 ;
-(BOOL)isEqualToPostalAddressComponents:(id)arg1 ;
@end

