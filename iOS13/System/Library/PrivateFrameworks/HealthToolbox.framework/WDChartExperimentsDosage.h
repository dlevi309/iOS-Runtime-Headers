/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/


@class NSDate, NSNumber;

@interface WDChartExperimentsDosage : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _doseInMilligrams;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                         //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSNumber * doseInMilligrams;              //@synthesize doseInMilligrams=_doseInMilligrams - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setDoseInMilligrams:(NSNumber *)arg1 ;
-(NSNumber *)doseInMilligrams;
@end

