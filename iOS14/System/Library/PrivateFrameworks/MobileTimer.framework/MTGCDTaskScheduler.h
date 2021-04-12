/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTaskScheduler.h>

@class NSString;

@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduleTaskGroup:(id)arg1 ;
-(void)_scheduleTask:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)scheduleTask:(id)arg1 ;
@end

