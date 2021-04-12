/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSDate, NSArray;

@interface _DKEventIntersection : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _events;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) NSArray * events;                //@synthesize events=_events - In the implementation block
+(id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSArray *)events;
@end

