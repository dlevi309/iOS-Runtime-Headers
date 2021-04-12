/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
-(id)description;
-(BOOL)contains:(id)arg1 ;
-(double)duration;
@end

