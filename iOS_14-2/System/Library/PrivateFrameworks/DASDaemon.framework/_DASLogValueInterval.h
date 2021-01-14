/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setValue:(NSObject *)arg1 ;
-(id)description;
-(id)durationString;
-(double)duration;
-(NSObject *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)intervalString;
@end

