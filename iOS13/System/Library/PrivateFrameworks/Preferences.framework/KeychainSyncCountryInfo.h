/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _localizedCountryName;
	NSString* _dialingPrefix;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * countryName;                       //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,retain) NSString * dialingPrefix;                     //@synthesize dialingPrefix=_dialingPrefix - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
+(id)countryInfoWithDictionary:(id)arg1 ;
+(void)_loadCountriesIfNeeded;
+(id)allCountries;
+(id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)countryCode;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(NSString *)localizedCountryName;
-(void)setDialingPrefix:(NSString *)arg1 ;
-(NSString *)dialingPrefix;
@end

