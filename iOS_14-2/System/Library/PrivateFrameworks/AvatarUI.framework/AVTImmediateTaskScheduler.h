/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTTaskScheduler.h>

@class NSString;

@interface AVTImmediateTaskScheduler : NSObject <AVTTaskScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scheduleTask:(/*^block*/id)arg1 ;
-(void)cancelAllTasks;
-(void)cancelTask:(/*^block*/id)arg1 ;
-(void)lowerTaskPriority:(/*^block*/id)arg1 ;
@end

