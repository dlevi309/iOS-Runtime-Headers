/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, _DKHistogram;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	NSArray* _transitionDates;
	_DKHistogram* _startHistogram;
	_DKHistogram* _endHistogram;
	NSArray* _values;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSArray * values;                           //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSArray * transitionDates;                  //@synthesize transitionDates=_transitionDates - In the implementation block
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,retain) _DKHistogram * startHistogram;              //@synthesize startHistogram=_startHistogram - In the implementation block
@property (nonatomic,retain) _DKHistogram * endHistogram;                //@synthesize endHistogram=_endHistogram - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
+(id)predictionUnavailable;
+(id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setStartHistogram:(_DKHistogram *)arg1 ;
-(void)setEndHistogram:(_DKHistogram *)arg1 ;
-(id)initWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
-(id)initWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
-(void)setTransitionDates:(NSArray *)arg1 ;
-(BOOL)isUnavailable;
-(NSArray *)transitionDates;
-(id)valueAtDate:(id)arg1 ;
-(id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(_DKHistogram *)startHistogram;
-(_DKHistogram *)endHistogram;
@end

