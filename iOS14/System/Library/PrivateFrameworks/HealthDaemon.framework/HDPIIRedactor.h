/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDataDetector, NSRegularExpression;

@interface HDPIIRedactor : NSObject <NSCopying, NSSecureCoding> {

	NSSet* _names;
	NSDataDetector* _dataDetectorAll;
	NSDataDetector* _dataDetectorSkipLink;
	NSDataDetector* _dataDetectorSkipPhoneNumbers;
	NSDataDetector* _dataDetectorSkipLinkSkipPhoneNumbers;
	NSRegularExpression* _fullWordRegex;
	NSRegularExpression* _SSNRegex;
	NSRegularExpression* _longNumberRegex;

}

@property (nonatomic,readonly) NSDataDetector * dataDetectorAll;                                   //@synthesize dataDetectorAll=_dataDetectorAll - In the implementation block
@property (nonatomic,readonly) NSDataDetector * dataDetectorSkipLink;                              //@synthesize dataDetectorSkipLink=_dataDetectorSkipLink - In the implementation block
@property (nonatomic,readonly) NSDataDetector * dataDetectorSkipPhoneNumbers;                      //@synthesize dataDetectorSkipPhoneNumbers=_dataDetectorSkipPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSDataDetector * dataDetectorSkipLinkSkipPhoneNumbers;              //@synthesize dataDetectorSkipLinkSkipPhoneNumbers=_dataDetectorSkipLinkSkipPhoneNumbers - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * fullWordRegex;                                //@synthesize fullWordRegex=_fullWordRegex - In the implementation block
@property (setter=SNRegex,nonatomic,readonly) NSRegularExpression * SSNRegex;                      //@synthesize SSNRegex=_SSNRegex - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * longNumberRegex;                              //@synthesize longNumberRegex=_longNumberRegex - In the implementation block
@property (nonatomic,readonly) NSSet * names;                                                      //@synthesize names=_names - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_namesToRedactWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)_redactFullWordRegexWithError:(id*)arg1 ;
+(id)_SSNRegularExpressionWithError:(id*)arg1 ;
+(id)_longNumberRegexWithError:(id*)arg1 ;
+(id)_meContactNameKeys;
+(void)_addNamesFromMeContact:(id)arg1 toSet:(id)arg2 ;
+(void)_addName:(id)arg1 toSet:(id)arg2 ;
+(void)_addNames:(id)arg1 toSet:(id)arg2 ;
+(id)redactorWithProfile:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)names;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRegularExpression *)SSNRegex;
-(NSDataDetector *)dataDetectorAll;
-(NSDataDetector *)dataDetectorSkipLink;
-(NSDataDetector *)dataDetectorSkipPhoneNumbers;
-(NSDataDetector *)dataDetectorSkipLinkSkipPhoneNumbers;
-(NSRegularExpression *)fullWordRegex;
-(NSRegularExpression *)longNumberRegex;
-(id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2 redactedCount:(unsigned long long*)arg3 ;
-(unsigned long long)_redactDataDetectorTypesFromString:(id)arg1 options:(unsigned long long)arg2 ;
-(unsigned long long)_redactNamesFromString:(id)arg1 ;
-(unsigned long long)_redactSSNsFromString:(id)arg1 ;
-(unsigned long long)_redactLongNumbersFromString:(id)arg1 ;
-(id)redactedStringWithString:(id)arg1 ;
-(id)redactedStringWithString:(id)arg1 redactedCount:(unsigned long long*)arg2 ;
-(id)redactedStringWithString:(id)arg1 options:(unsigned long long)arg2 ;
@end
