/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
+(BOOL)areDigits:(id)arg1 equalToDigits:(id)arg2 usingCountryCode:(id)arg3 ;
+(id)phoneNumberWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)digits;
-(CFPhoneNumberRef)phoneNumberRef;
-(id)initWithCFPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
-(NSString *)formattedRepresentation;
-(NSString *)formattedInternationalRepresentation;
-(NSString *)unformattedInternationalRepresentation;
-(void)setPhoneNumberRef:(CFPhoneNumberRef)arg1 ;
@end

