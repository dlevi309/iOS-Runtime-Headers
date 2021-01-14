/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OSActivityStreamDelegate <NSObject>
@optional
-(void)streamDidStop:(id)arg1;
-(void)streamDidStart:(id)arg1;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 error:(id)arg3;
-(void)streamDidFail:(id)arg1 error:(id)arg2;

@required
-(BOOL)activityStream:(id)arg1 results:(id)arg2;

@end

