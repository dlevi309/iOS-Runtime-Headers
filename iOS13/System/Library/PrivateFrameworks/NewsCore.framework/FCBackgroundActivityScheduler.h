/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCBackgroundActivityScheduler.h>

@protocol FCBackgroundActivityScheduler <NSObject>
@required
-(void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(/*^block*/id)arg3;
-(void)cancelRepeatingTaskWithIdentifier:(id)arg1;
-(void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2;

@end


@class NSString;

@interface FCBackgroundActivityScheduler : NSObject <FCBackgroundActivityScheduler>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_makeFullIdentifierFromIdentifier:(id)arg1 ;
-(long long)_makeFromFCResult:(long long)arg1 ;
-(void)scheduleBackgroundTaskRepeatingAtInterval:(double)arg1 identifier:(id)arg2 task:(/*^block*/id)arg3 ;
-(void)cancelRepeatingTaskWithIdentifier:(id)arg1 ;
-(void)requestBackgroundAppRefreshStartingAfter:(id)arg1 before:(id)arg2 ;
@end

