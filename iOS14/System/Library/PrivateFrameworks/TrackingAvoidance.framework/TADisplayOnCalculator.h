/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface TADisplayOnCalculator : NSObject <NSSecureCoding> {

	BOOL _useBudget;
	NSDate* _evaluatedUntil;
	double _budgetRemaining;
	NSDate* _startTime;

}

@property (assign,nonatomic) BOOL useBudget;                         //@synthesize useBudget=_useBudget - In the implementation block
@property (assign,nonatomic) double budgetRemaining;                 //@synthesize budgetRemaining=_budgetRemaining - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) NSDate * evaluatedUntil;              //@synthesize evaluatedUntil=_evaluatedUntil - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithStartTime:(id)arg1 ;
-(BOOL)useBudget;
-(double)budgetRemaining;
-(NSDate *)evaluatedUntil;
-(id)initWithStartTime:(id)arg1 budget:(double)arg2 ;
-(void)completeDisplayOnWithEndDate:(id)arg1 ;
-(double)calculateDisplayOnWithEvents:(id)arg1 advertisements:(id)arg2 endDate:(id)arg3 ;
-(void)setUseBudget:(BOOL)arg1 ;
-(void)setBudgetRemaining:(double)arg1 ;
@end

