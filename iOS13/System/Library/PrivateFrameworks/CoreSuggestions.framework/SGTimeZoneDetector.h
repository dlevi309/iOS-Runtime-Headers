/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSDictionary, NSObject;

@interface SGTimeZoneDetector : NSObject {

	NSDictionary* _countryCodeForCountryName;
	NSDictionary* _timeZoneForCountryCode;
	NSDictionary* _timeZoneForCountryCodeDictionarySupplement;
	NSDictionary* _regionAbbreviations;
	NSDictionary* _timeZoneForPostalCode;
	NSDictionary* _timeZoneAbbreviations;
	NSDictionary* _uniquePostalCodeFormats;
	NSDictionary* _postalCodeFormats;
	BOOL _keepData;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;

}
+(id)_normalizedString:(id)arg1 ;
+(id)_regularExpressionForPostalCodeFormat:(id)arg1 ;
+(id)_normalizedCountryString:(id)arg1 ;
-(id)init;
-(id)countryCodeForAddress:(id)arg1 ;
-(id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2 ;
-(void)cleanupCache;
-(void)_handleMemoryPressureStatus;
-(id)_getCountryCodeForCountryName;
-(id)_getTimeZoneForCountryCode;
-(void)_readPlistRegionAbbreviationsData;
-(id)_getTimeZoneForCountryCodeDictionarySupplement;
-(id)_getRegionAbbreviations;
-(id)_getTimeZoneForPostalCode;
-(id)_getTimeZoneAbbreviations;
-(id)_getUniquePostalCodeFormats;
-(id)_getPostalCodeFormats;
-(id)_getRegionNames;
-(id)_postalCodeForAddress:(id)arg1 withCountryCode:(id)arg2 ;
-(id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg1 ;
-(id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg1 ;
-(id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg1 withWords:(id)arg2 ;
-(id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg1 ;
-(id)_timeZoneNameForPostalCode:(id)arg1 withPostalCodeTable:(id)arg2 ;
@end

