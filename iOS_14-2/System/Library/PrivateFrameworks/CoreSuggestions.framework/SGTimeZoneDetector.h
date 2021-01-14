/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_handleMemoryPressureStatus;
-(id)countryCodeForAddress:(id)arg1 ;
-(id)timeZoneNameForAddress:(id)arg1 withCountryCode:(id)arg2 ;
-(void)cleanupCache;
-(id)_getRegionNames;
-(id)_getCountryCodeForCountryName;
-(id)_getTimeZoneForCountryCode;
-(void)_readPlistRegionAbbreviationsData;
-(id)_getTimeZoneForCountryCodeDictionarySupplement;
-(id)_getRegionAbbreviations;
-(id)_getTimeZoneForPostalCode;
-(id)_getTimeZoneAbbreviations;
-(id)_getUniquePostalCodeFormats;
-(id)_getPostalCodeFormats;
-(id)_postalCodeForAddress:(id)arg1 withCountryCode:(id)arg2 ;
-(id)_countryCodeByRegionAbbreviationFromNormalizedAddress:(id)arg1 ;
-(id)_countryCodeByRegularExpressionFromNormalizedAddress:(id)arg1 ;
-(id)_countryCodeByCountryNameFromNormalizedAddressWords:(id)arg1 ;
-(id)_countryCodeByRegionNameFromNormalizedAddress:(id)arg1 withWords:(id)arg2 ;
-(id)_timeZoneNameForPostalCode:(id)arg1 withPostalCodeTable:(id)arg2 ;
@end

