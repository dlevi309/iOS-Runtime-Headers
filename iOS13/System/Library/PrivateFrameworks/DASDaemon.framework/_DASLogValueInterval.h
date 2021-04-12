/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DASDaemon.framework/DASDaemon
*/


@class NSDate, NSObject;

@interface _DASLogValueInterval : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSObject* _value;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSObject * value;                //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSObject *)value;
-(void)setValue:(NSObject *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)durationString;
-(id)intervalString;
@end

