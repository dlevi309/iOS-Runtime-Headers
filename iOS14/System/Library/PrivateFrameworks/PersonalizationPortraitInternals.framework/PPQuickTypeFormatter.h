/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


@class PPQuickTypeQuery, NSLocale, NSString, _PASLock, NSDateFormatter, NSCache, NSURL, NSMeasurementFormatter, NSLengthFormatter, NSDateComponentsFormatter;

@interface PPQuickTypeFormatter : NSObject {

	PPQuickTypeQuery* _query;
	NSLocale* _locale;
	NSString* _desiredLanguage;
	NSString* _fallbackLanguage;
	_PASLock* _localizedStrings;
	NSDateFormatter* _birthdayFormatter;
	NSDateFormatter* _chineseBirthdayFormatter;
	NSDateFormatter* _yearlessChineseBirthdayFormatter;
	NSDateFormatter* _shortEventFormatter;
	NSDateFormatter* _longEventFormatter;
	NSCache* _localizedLabelCache;
	NSCache* _dateFormatCache;
	NSURL* _labeledValueLocalizationURL;
	NSCache* _appNameCache;
	NSMeasurementFormatter* _measurementWholeFormatter;
	NSMeasurementFormatter* _measurementDecimalFormatter;
	NSMeasurementFormatter* _measurementUnscaledFormatter;
	NSLengthFormatter* _lengthFormatter;
	NSDateComponentsFormatter* _dateComponentFormatter;

}
+(id)new;
+(id)keyDictionaryForQuery:(id)arg1 ;
+(id)formatterWithQuery:(id)arg1 ;
-(id)_locale;
-(id)destinationLabel;
-(id)makeShortEventFormatter;
-(id)init;
-(void)_initializeLocalizedLableCache;
-(id)makeBirthdayFormatter;
-(id)makeMeasurementUnscaledFormatter;
-(id)formattedBirthday:(id)arg1 ;
-(id)makeMeasurementWholeFormatter;
-(id)formattedEventTime:(id)arg1 ;
-(id)formattedStringForLabel:(id)arg1 ;
-(id)streetLabel;
-(id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2 ;
-(id)formattedMeasurement:(id)arg1 allowDecimals:(BOOL)arg2 scaleUnits:(BOOL)arg3 ;
-(id)makeLengthFormatter;
-(id)formattedLengthInMeters:(double)arg1 ;
-(void)_precacheDateFormats;
-(id)_localizedStringForKey:(id)arg1 ;
-(id)attributionPattern;
-(id)initWithquery:(id)arg1 ;
-(id)_dateFormatForTemplate:(id)arg1 ;
-(id)formattedStringsForLabels:(id)arg1 ;
-(id)makeChineseBirthdayFormatter;
-(id)formattedPostalAddress:(id)arg1 ;
-(id)makeLongEventFormatter;
-(id)makeMeasurementDecimalFormatter;
-(id)localizedAppNameForBundleIdentifier:(id)arg1 ;
-(id)_dateFromComponents:(id)arg1 destinationCalendar:(id)arg2 ;
-(id)makeYearlessChineseBirthdayFormatter;
-(id)itemLabelForBundleId:(id)arg1 typeLabel:(id)arg2 ;
-(id)makeDateComponentFormatter;
-(id)formattedTimeInterval:(double)arg1 ;
-(id)etaLabel;
-(id)distanceLabel;
-(id)timeLeftLabel;
-(BOOL)_isYearlessComponents:(id)arg1 ;
@end

