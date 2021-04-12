/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate;

@interface _CDInBedDetection : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	double _confidence;

}

@property (retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (assign) double confidence;               //@synthesize confidence=_confidence - In the implementation block
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)confidence;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setConfidence:(double)arg1 ;
@end

