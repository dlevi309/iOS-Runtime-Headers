/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

@class NSDate;


@protocol _REPeriodOfDayProperties <REExportedInterface>
@property (nonatomic,readonly) unsigned long long periodOfDay; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@required
-(NSDate *)endDate;
-(NSDate *)startDate;
-(unsigned long long)periodOfDay;

@end

