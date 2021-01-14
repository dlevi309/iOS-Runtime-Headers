/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
*/

#import <DuetActivityScheduler/_DASWidgetInfo.h>

@class NSDate;

@interface _DASWidgetView : _DASWidgetInfo {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)viewFrom:(id)arg1 to:(id)arg2 forWidgetID:(id)arg3 ;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
@end

