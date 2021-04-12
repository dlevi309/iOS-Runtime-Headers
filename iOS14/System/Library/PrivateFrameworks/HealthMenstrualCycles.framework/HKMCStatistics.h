/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface HKMCStatistics : NSObject <HKRedactedDescription, NSSecureCoding, NSCopying> {

	long long _numberOfCycles;
	NSNumber* _firstMenstruationStartDayIndex;
	NSNumber* _lastMenstruationStartDayIndex;
	NSNumber* _cycleLengthMedian;
	NSNumber* _cycleLengthLowerPercentile;
	NSNumber* _cycleLengthUpperPercentile;
	NSNumber* _menstruationLengthMedian;
	NSNumber* _menstruationLengthLowerPercentile;
	NSNumber* _menstruationLengthUpperPercentile;

}

@property (nonatomic,copy) NSNumber * cycleLengthMedian;                                       //@synthesize cycleLengthMedian=_cycleLengthMedian - In the implementation block
@property (nonatomic,copy) NSNumber * menstruationLengthMedian;                                //@synthesize menstruationLengthMedian=_menstruationLengthMedian - In the implementation block
@property (nonatomic,readonly) long long numberOfCycles;                                       //@synthesize numberOfCycles=_numberOfCycles - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * firstMenstruationStartDayIndex;                 //@synthesize firstMenstruationStartDayIndex=_firstMenstruationStartDayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * lastMenstruationStartDayIndex;                  //@synthesize lastMenstruationStartDayIndex=_lastMenstruationStartDayIndex - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * cycleLengthLowerPercentile;                     //@synthesize cycleLengthLowerPercentile=_cycleLengthLowerPercentile - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * cycleLengthUpperPercentile;                     //@synthesize cycleLengthUpperPercentile=_cycleLengthUpperPercentile - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * menstruationLengthLowerPercentile;              //@synthesize menstruationLengthLowerPercentile=_menstruationLengthLowerPercentile - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * menstruationLengthUpperPercentile;              //@synthesize menstruationLengthUpperPercentile=_menstruationLengthUpperPercentile - In the implementation block
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithNumberOfCycles:(long long)arg1 firstMenstruationStartDayIndex:(id)arg2 lastMenstruationStartDayIndex:(id)arg3 cycleLengthMedian:(id)arg4 cycleLengthLowerPercentile:(id)arg5 cycleLengthUpperPercentile:(id)arg6 menstruationLengthMedian:(id)arg7 menstruationLengthLowerPercentile:(id)arg8 menstruationLengthUpperPercentile:(id)arg9 ;
-(long long)numberOfCycles;
-(NSNumber *)firstMenstruationStartDayIndex;
-(NSNumber *)lastMenstruationStartDayIndex;
-(NSNumber *)cycleLengthMedian;
-(NSNumber *)cycleLengthLowerPercentile;
-(NSNumber *)cycleLengthUpperPercentile;
-(NSNumber *)menstruationLengthMedian;
-(NSNumber *)menstruationLengthLowerPercentile;
-(NSNumber *)menstruationLengthUpperPercentile;
-(void)setCycleLengthMedian:(NSNumber *)arg1 ;
-(void)setMenstruationLengthMedian:(NSNumber *)arg1 ;
@end

