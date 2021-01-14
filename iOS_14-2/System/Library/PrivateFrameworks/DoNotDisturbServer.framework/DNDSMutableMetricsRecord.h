/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSMetricsRecord.h>

@class NSDictionary, NSDate;

@interface DNDSMutableMetricsRecord : DNDSMetricsRecord

@property (nonatomic,copy) NSDictionary * metricsByDay; 
@property (nonatomic,copy) NSDate * lastDailyHeartbeat; 
@property (nonatomic,copy) NSDictionary * metricsByWeek; 
@property (nonatomic,copy) NSDate * lastWeeklyHeartbeat; 
@property (nonatomic,copy) NSDictionary * metricsByMonth; 
@property (nonatomic,copy) NSDate * lastMonthlyHeartbeat; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetricsByDay:(NSDictionary *)arg1 ;
-(void)setMetricsByWeek:(NSDictionary *)arg1 ;
-(void)setMetricsByMonth:(NSDictionary *)arg1 ;
-(void)setLastDailyHeartbeat:(NSDate *)arg1 ;
-(void)setLastWeeklyHeartbeat:(NSDate *)arg1 ;
-(void)setLastMonthlyHeartbeat:(NSDate *)arg1 ;
@end

