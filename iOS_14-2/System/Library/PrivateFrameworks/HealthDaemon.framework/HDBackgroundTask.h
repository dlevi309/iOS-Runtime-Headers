/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_xpc_object;
@class NSObject, NSDate, NSDictionary;

@interface HDBackgroundTask : NSObject {

	NSObject*<OS_xpc_object> _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDictionary * userContext; 
@property (assign,nonatomic) BOOL shiftsDatesWithSystemClockChanges; 
@property (assign,nonatomic) BOOL allowsPowerOptimizedScheduling; 
-(NSDictionary *)userContext;
-(NSDate *)endDate;
-(id)_job;
-(void)setStartDate:(NSDate *)arg1 ;
-(id)init;
-(NSDate *)startDate;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)description;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(id)_initWithJob:(id)arg1 ;
-(void)setShiftsDatesWithSystemClockChanges:(BOOL)arg1 ;
-(void)setAllowsPowerOptimizedScheduling:(BOOL)arg1 ;
-(BOOL)shiftsDatesWithSystemClockChanges;
-(BOOL)allowsPowerOptimizedScheduling;
-(BOOL)taskValid;
-(BOOL)taskSatisfied;
-(BOOL)taskExpired;
@end

