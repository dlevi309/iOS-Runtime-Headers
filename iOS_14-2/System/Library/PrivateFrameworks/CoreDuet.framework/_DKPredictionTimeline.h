/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * transitionDates; 
@property (nonatomic,retain) _DKHistogram * startHistogram;              //@synthesize startHistogram=_startHistogram - In the implementation block
@property (nonatomic,retain) _DKHistogram * endHistogram;                //@synthesize endHistogram=_endHistogram - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predictionUnavailable;
+(id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
+(id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
-(void)setStartHistogram:(_DKHistogram *)arg1 ;
-(NSArray *)transitionDates;
-(NSDate *)endDate;
-(_DKHistogram *)endHistogram;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)valueAtDate:(id)arg1 ;
-(id)description;
-(BOOL)isUnavailable;
-(id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(_DKHistogram *)startHistogram;
-(void)setEndHistogram:(_DKHistogram *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

