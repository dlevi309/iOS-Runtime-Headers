/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPDataDetectorsFeatureExtractor : IPFeatureExtractor
-(id)init;
-(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3 ;
-(DDScannerRef)standardScanner;
-(DDScannerRef)timeScanner;
-(BOOL)stringContainsNonTimeStrings:(id)arg1 aroundRange:(NSRange)arg2 ;
-(NSRange)textRangeReferencingTomorrow:(id)arg1 ;
-(id)tomorrowDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingValentineDay:(id)arg1 ;
-(id)valentineDayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingNewYearsEve:(id)arg1 ;
-(id)newYearsEveDayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingMorning:(id)arg1 ;
-(id)featureDataComplementingFeatureData:(id)arg1 hour:(unsigned long long)arg2 minute:(unsigned long long)arg3 duration:(double)arg4 ;
-(NSRange)textRangeReferencingNoon:(id)arg1 ;
-(NSRange)textRangeReferencingAfternoon:(id)arg1 ;
-(NSRange)textRangeReferencingEvening:(id)arg1 ;
-(NSRange)textRangeReferencingAllDay:(id)arg1 ;
-(void)standardizeTimezonesForDetectedFeatures:(id)arg1 ;
-(void)setTimeZone:(id)arg1 forDateFeatures:(id)arg2 ;
-(id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg1 ;
-(id)thisSaturdayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingThisWeekEnd:(id)arg1 ;
-(NSRange)textRangeReferencingNextWeekEnd:(id)arg1 ;
@end

