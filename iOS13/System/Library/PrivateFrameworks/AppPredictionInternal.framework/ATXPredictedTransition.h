/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate, ATXLocationOfInterest;

@interface ATXPredictedTransition : NSObject {

	NSDate* _date;
	ATXLocationOfInterest* _loi;

}

@property (nonatomic,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) ATXLocationOfInterest * loi;              //@synthesize loi=_loi - In the implementation block
-(id)init;
-(id)description;
-(NSDate *)date;
-(ATXLocationOfInterest *)loi;
-(id)transitionArrayForDate:(id)arg1 ;
-(id)initWithDate:(id)arg1 loi:(id)arg2 ;
@end

