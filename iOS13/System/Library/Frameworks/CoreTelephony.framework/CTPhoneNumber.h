/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(id)initWithDigits:(long long)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(id)encodedString;
-(BOOL)isShortCode;
-(id)canonicalFormat;
-(id)formatForCallingCountry:(id)arg1 ;
-(long long)numberOfDigitsForShortCodeNumber:(long long)arg1 ;
-(void)setIsShortCode:(BOOL)arg1 ;
-(long long)numberOfDigitsForShortCodeNumber;
-(id)initWithDigits:(id)arg1 countryCode:(id)arg2 ;
-(NSString *)digits;
@end

