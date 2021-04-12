/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

@class HMDLogEventDispatcher;


@protocol HMDLogEventSubmitting <NSObject>
@property (readonly) HMDLogEventDispatcher * logEventDispatcher; 
@optional
-(void)submitLogEvent:(id)arg1;
-(void)submitLogEvent:(id)arg1 error:(id)arg2;
-(HMDLogEventDispatcher *)logEventDispatcher;

@end

