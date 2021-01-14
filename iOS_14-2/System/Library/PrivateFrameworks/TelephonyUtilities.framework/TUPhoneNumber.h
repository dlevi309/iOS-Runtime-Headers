/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TUPhoneNumber : NSObject <NSCoding, NSSecureCoding> {

	CFPhoneNumberRef _phoneNumberRef;

}

@property (assign) CFPhoneNumberRef phoneNumberRef;                                  //@synthesize phoneNumberRef=_phoneNumberRef - In the implementation block
@property (readonly) NSString * digits; 
@property (readonly) NSString * countryCode; 
@property (readonly) NSString * formattedRepresentation; 
@property (readonly) NSString * formattedInternationalRepresentation; 
@property (readonly) NSString * unformattedInternationalRepresentation; 
+(BOOL)supportsSecureCoding;
+(BOOL)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)countryCode;
-(CFPhoneNumberRef)phoneNumberRef;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)formattedInternationalRepresentation;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)formattedRepresentation;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(void)setPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)unformattedInternationalRepresentation;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)digits;
-(void)dealloc;
@end

