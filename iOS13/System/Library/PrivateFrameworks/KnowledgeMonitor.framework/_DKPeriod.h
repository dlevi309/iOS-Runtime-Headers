/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <libobjc.A.dylib/DKPeriodType.h>

@class NSDate;

@interface _DKPeriod : NSObject <DKPeriodType> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
-(BOOL)contains:(id)arg1 ;
@end

