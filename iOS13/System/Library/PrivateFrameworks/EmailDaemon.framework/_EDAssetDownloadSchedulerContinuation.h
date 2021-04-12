/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/

#import <libobjc.A.dylib/EDAssetDownloadSchedulerContinuation.h>

@protocol OS_xpc_object;
@class EDAssetDownloadScheduler, NSObject, NSString;

@interface _EDAssetDownloadSchedulerContinuation : NSObject <EDAssetDownloadSchedulerContinuation> {

	EDAssetDownloadScheduler* _scheduler;
	NSObject*<OS_xpc_object> _activity;

}

@property (assign,nonatomic,__weak) EDAssetDownloadScheduler * scheduler;              //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> activity;                        //@synthesize activity=_activity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_xpc_object>)activity;
-(void)setActivity:(NSObject*<OS_xpc_object>)arg1 ;
-(EDAssetDownloadScheduler *)scheduler;
-(void)setScheduler:(EDAssetDownloadScheduler *)arg1 ;
-(void)rescheduleAfterSuccess;
-(void)rescheduleAfterFailure;
-(void)stopScheduling;
@end

