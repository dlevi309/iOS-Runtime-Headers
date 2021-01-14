/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)confidence;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(double)duration;
@end

