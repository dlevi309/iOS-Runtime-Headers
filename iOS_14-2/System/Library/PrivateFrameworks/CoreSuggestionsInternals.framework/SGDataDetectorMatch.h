/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone, SGPostalAddressComponents;

@interface SGDataDetectorMatch : NSObject <NSSecureCoding> {

	BOOL _allDay;
	BOOL _inferredDate;
	BOOL _approximateTime;
	BOOL _partialDate;
	unsigned _matchType;
	int _parsecDomain;
	NSString* _valueString;
	NSString* _labelString;
	NSString* _parsecWikidataQid;
	NSDate* _detectedDate;
	NSTimeZone* _detectedTimeZone;
	NSDate* _detectedEndDate;
	NSTimeZone* _detectedEndTimeZone;
	SGPostalAddressComponents* _postalAddressComponents;
	NSRange _range;
	NSRange _labelRange;
	NSRange _valueRange;

}

@property (nonatomic,readonly) unsigned matchType;                                               //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,readonly) NSRange range;                                                    //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) NSRange labelRange;                                               //@synthesize labelRange=_labelRange - In the implementation block
@property (nonatomic,readonly) NSRange valueRange;                                               //@synthesize valueRange=_valueRange - In the implementation block
@property (nonatomic,readonly) NSString * valueString;                                           //@synthesize valueString=_valueString - In the implementation block
@property (nonatomic,readonly) NSString * labelString;                                           //@synthesize labelString=_labelString - In the implementation block
@property (nonatomic,readonly) int parsecDomain;                                                 //@synthesize parsecDomain=_parsecDomain - In the implementation block
@property (nonatomic,readonly) NSString * parsecWikidataQid;                                     //@synthesize parsecWikidataQid=_parsecWikidataQid - In the implementation block
@property (nonatomic,readonly) NSDate * detectedDate;                                            //@synthesize detectedDate=_detectedDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * detectedTimeZone;                                    //@synthesize detectedTimeZone=_detectedTimeZone - In the implementation block
@property (nonatomic,readonly) NSDate * detectedEndDate;                                         //@synthesize detectedEndDate=_detectedEndDate - In the implementation block
@property (nonatomic,readonly) NSTimeZone * detectedEndTimeZone;                                 //@synthesize detectedEndTimeZone=_detectedEndTimeZone - In the implementation block
@property (nonatomic,readonly) BOOL allDay;                                                      //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,readonly) BOOL inferredDate;                                                //@synthesize inferredDate=_inferredDate - In the implementation block
@property (nonatomic,readonly) BOOL approximateTime;                                             //@synthesize approximateTime=_approximateTime - In the implementation block
@property (nonatomic,readonly) BOOL partialDate;                                                 //@synthesize partialDate=_partialDate - In the implementation block
@property (nonatomic,readonly) SGPostalAddressComponents * postalAddressComponents;              //@synthesize postalAddressComponents=_postalAddressComponents - In the implementation block
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(void)resetUnusedScannersForTesting;
+(BOOL)stringHasDatesOrTimes:(id)arg1 ;
+(id)detectionsInPlainText:(id)arg1 baseDate:(id)arg2 ;
+(BOOL)inferredDateForDataDetectorResult:(_DDResult*)arg1 ;
+(BOOL)partialDateForDataDetectorResult:(_DDResult*)arg1 ;
+(id)detectionsAndSignatureInText:(id)arg1 eligibleRegions:(id)arg2 baseDate:(id)arg3 ;
+(id)_detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 ddSignature:(NSRange*)arg3 baseDate:(id)arg4 ;
+(id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 baseDate:(id)arg3 ;
+(BOOL)approximateTimeForDataDetectorResult:(_DDResult*)arg1 ;
+(id)detectionsInPlainText:(id)arg1 withEligibleRegions:(id)arg2 ;
-(NSString *)valueString;
-(NSDate *)detectedEndDate;
-(NSRange)range;
-(NSString *)labelString;
-(NSString *)parsecWikidataQid;
-(BOOL)allDay;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)partialDate;
-(NSTimeZone *)detectedEndTimeZone;
-(NSDate *)detectedDate;
-(int)parsecDomain;
-(id)description;
-(id)initWithLookupHintInDomain:(int)arg1 range:(NSRange)arg2 labelRange:(NSRange)arg3 labelString:(id)arg4 valueRange:(NSRange)arg5 valueString:(id)arg6 qid:(id)arg7 ;
-(NSTimeZone *)detectedTimeZone;
-(NSRange)labelRange;
-(BOOL)inferredDate;
-(SGPostalAddressComponents *)postalAddressComponents;
-(id)initWithMatchType:(unsigned)arg1 range:(NSRange)arg2 labelRange:(NSRange)arg3 labelString:(id)arg4 valueRange:(NSRange)arg5 valueString:(id)arg6 postalAddressComponents:(id)arg7 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)valueRange;
-(BOOL)isEqualToDataDetectorMatch:(id)arg1 ;
-(id)initWithMatchType:(unsigned)arg1 range:(NSRange)arg2 labelRange:(NSRange)arg3 labelString:(id)arg4 valueRange:(NSRange)arg5 valueString:(id)arg6 ;
-(BOOL)approximateTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDetectedDate:(id)arg1 detectedTimeZone:(id)arg2 detectedEndDate:(id)arg3 detectedEndTimeZone:(id)arg4 matchType:(unsigned)arg5 range:(NSRange)arg6 labelRange:(NSRange)arg7 labelString:(id)arg8 valueRange:(NSRange)arg9 valueString:(id)arg10 allDay:(BOOL)arg11 inferredDate:(BOOL)arg12 approximateTime:(BOOL)arg13 partialDate:(BOOL)arg14 ;
-(unsigned)matchType;
@end

