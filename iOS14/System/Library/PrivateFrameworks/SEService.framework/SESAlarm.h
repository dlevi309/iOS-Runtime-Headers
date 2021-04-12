/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSMutableSet;

@interface SESAlarm : NSObject {

	NSObject*<OS_dispatch_queue> queue;
	NSMapTable* registered;
	NSMutableSet* pendingAlarms;

}
+(void)clearAlarm:(id)arg1 ;
+(void)kickoff;
+(BOOL)registerAlarm:(id)arg1 handler:(id)arg2 ;
+(void)setAlarm:(id)arg1 secondsFromNow:(double)arg2 ;
+(id)sharedObject;
+(BOOL)isAlarmSet:(id)arg1 ;
+(void)deregisterAlarm:(id)arg1 ;
-(id)init;
-(void)_handleAlarmFired:(id)arg1 ;
@end

