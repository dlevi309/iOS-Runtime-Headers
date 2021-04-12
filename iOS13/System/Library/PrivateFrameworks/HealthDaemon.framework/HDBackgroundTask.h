/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSDictionary *)userContext;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(id)_job;
-(id)_initWithJob:(id)arg1 ;
-(void)setShiftsDatesWithSystemClockChanges:(BOOL)arg1 ;
-(void)setAllowsPowerOptimizedScheduling:(BOOL)arg1 ;
-(BOOL)shiftsDatesWithSystemClockChanges;
-(BOOL)allowsPowerOptimizedScheduling;
-(BOOL)taskValid;
-(BOOL)taskSatisfied;
-(BOOL)taskExpired;
@end

