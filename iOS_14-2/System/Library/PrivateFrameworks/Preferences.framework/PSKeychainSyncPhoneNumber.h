/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/


@class NSString, KeychainSyncCountryInfo;

@interface PSKeychainSyncPhoneNumber : NSObject {

	NSString* _digits;
	KeychainSyncCountryInfo* _countryInfo;

}

@property (nonatomic,retain) NSString * digits;                                  //@synthesize digits=_digits - In the implementation block
@property (nonatomic,retain) KeychainSyncCountryInfo * countryInfo;              //@synthesize countryInfo=_countryInfo - In the implementation block
+(id)phoneNumberWithDigits:(id)arg1 countryInfo:(id)arg2 ;
-(KeychainSyncCountryInfo *)countryInfo;
-(void)setCountryInfo:(KeychainSyncCountryInfo *)arg1 ;
-(void)setDigits:(NSString *)arg1 ;
-(id)formattedString;
-(id)_stringByAddingDialingPrefixToString:(id)arg1 ;
-(id)formattedStringWithDialingPrefix;
-(id)formattedAndObfuscatedString;
-(NSString *)digits;
@end

