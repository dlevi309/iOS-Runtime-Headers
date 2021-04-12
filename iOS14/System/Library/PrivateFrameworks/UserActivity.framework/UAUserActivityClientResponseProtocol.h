/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
*/


@protocol UAUserActivityClientResponseProtocol <NSObject>
@required
-(void)tellClientUserActivityItWasResumed:(id)arg1;
-(void)tellClientDebuggingEnabled:(BOOL)arg1 logFileHandle:(id)arg2;
-(void)askClientUserActivityToSave:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)askClientUserActivityToSave:(id)arg1;

@end

