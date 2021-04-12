/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _HKSummary : NSObject <NSSecureCoding> {

	long long _typeCode;
	id _value;
	NSDate* _latestSampleDate;
	NSDate* _summaryStartDate;
	NSDate* _summaryEndDate;

}

@property (assign,nonatomic) long long typeCode;                     //@synthesize typeCode=_typeCode - In the implementation block
@property (nonatomic,retain) id value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDate * latestSampleDate;              //@synthesize latestSampleDate=_latestSampleDate - In the implementation block
@property (nonatomic,retain) NSDate * summaryStartDate;              //@synthesize summaryStartDate=_summaryStartDate - In the implementation block
@property (nonatomic,retain) NSDate * summaryEndDate;                //@synthesize summaryEndDate=_summaryEndDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)valuesByTypeFromSummaries:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(long long)typeCode;
-(void)setTypeCode:(long long)arg1 ;
-(id)initWithTypeCode:(long long)arg1 ;
-(void)setSummaryDatesUsingCalendar:(id)arg1 ;
-(void)setSummaryStartDate:(NSDate *)arg1 ;
-(void)setSummaryEndDate:(NSDate *)arg1 ;
-(id)initWithTypeCode:(long long)arg1 value:(id)arg2 sampleDate:(id)arg3 usingCalendar:(id)arg4 ;
-(NSDate *)latestSampleDate;
-(void)setLatestSampleDate:(NSDate *)arg1 ;
-(NSDate *)summaryStartDate;
-(NSDate *)summaryEndDate;
@end

