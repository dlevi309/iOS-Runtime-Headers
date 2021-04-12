/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTTaskScheduler.h>

@class NSString;

@interface MTGCDTaskScheduler : NSObject <MTTaskScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduleTask:(id)arg1 ;
-(void)scheduleTaskGroup:(id)arg1 ;
-(void)_scheduleTask:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

