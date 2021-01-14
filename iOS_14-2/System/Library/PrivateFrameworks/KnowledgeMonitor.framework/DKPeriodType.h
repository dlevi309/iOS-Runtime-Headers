/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

@class NSDate;


@protocol DKPeriodType
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
@property (readonly) double duration; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(double)duration;

@end

