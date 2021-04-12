/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSDate;


@protocol _REPeriodOfDayProperties <REExportedInterface>
@property (nonatomic,readonly) unsigned long long periodOfDay; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)periodOfDay;

@end

