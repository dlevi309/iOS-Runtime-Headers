/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPEventScheduler.h>

@protocol HDSPEventScheduleDelegate;
@class NSString;

@interface HDSPGCDTimerScheduler : NSObject <HDSPEventScheduler> {

	id<HDSPEventScheduleDelegate> delegate;
	/*^block*/id _currentDateProvider;

}

@property (nonatomic,copy,readonly) id currentDateProvider;                              //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (assign,nonatomic,__weak) id<HDSPEventScheduleDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduleEventForDate:(id)arg1 options:(unsigned long long)arg2 ;
-(id<HDSPEventScheduleDelegate>)delegate;
-(id)currentDateProvider;
-(void)setDelegate:(id<HDSPEventScheduleDelegate>)arg1 ;
-(void)unschedule;
-(id)initWithCurrentDateProvider:(/*^block*/id)arg1 ;
@end

