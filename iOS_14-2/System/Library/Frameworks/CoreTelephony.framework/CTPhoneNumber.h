/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CTMessageAddress.h>

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {

	NSString* _digits;
	NSString* _countryCode;
	BOOL _isShortCode;
	long long _slot;

}

@property (readonly) NSString * digits;                   //@synthesize digits=_digits - In the implementation block
@property (readonly) NSString * countryCode;              //@synthesize countryCode=_countryCode - In the implementation block
@property (assign) BOOL isShortCode;                      //@synthesize isShortCode=_isShortCode - In the implementation block
+(id)phoneNumberWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
+(BOOL)isValidPhoneNumber:(id)arg1 ;
+(BOOL)isValidPhoneNumberChar:(unsigned short)arg1 ;
+(id)phoneNumberWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(BOOL)isShortCode;
-(id)encodedString;
-(id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(NSString *)countryCode;
-(id)canonicalFormat;
-(void)setIsShortCode:(BOOL)arg1 ;
-(long long)numberOfDigitsForShortCodeNumber:(long long)arg1 ;
-(long long)numberOfDigitsForShortCodeNumber;
-(id)formatForCallingCountry:(id)arg1 ;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)digits;
@end

