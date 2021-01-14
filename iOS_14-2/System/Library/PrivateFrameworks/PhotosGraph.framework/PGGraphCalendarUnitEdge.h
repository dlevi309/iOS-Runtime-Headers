/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphPropertylessEdge.h>

@interface PGGraphCalendarUnitEdge : PGGraphPropertylessEdge {

	unsigned _calendarUnit : 8;

}
+(id)dayFilter;
+(id)monthFilter;
+(id)yearFilter;
+(id)weekOfYearFilter;
+(id)weekOfMonthFilter;
+(id)dayOfWeekFilter;
-(id)initWithLabel:(id)arg1 fromDateNode:(id)arg2 toCalendarUnitNode:(id)arg3 ;
-(unsigned short)domain;
-(id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 ;
-(id)label;
@end

