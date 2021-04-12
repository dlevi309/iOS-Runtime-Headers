/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString, NSDate;

@interface CRKExecutionTimer : NSObject {

	NSString* _timerDescription;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSString * timerDescription;              //@synthesize timerDescription=_timerDescription - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
+(id)startedTimerWithDescription:(id)arg1 ;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)start;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)stop;
-(id)initWithDescription:(id)arg1 ;
-(NSString *)timerDescription;
@end

