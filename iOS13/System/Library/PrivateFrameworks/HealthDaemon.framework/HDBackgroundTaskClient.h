/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface HDBackgroundTaskClient : NSObject {

	/*^block*/id _taskHandler;

}
-(id)initWithTaskHandler:(/*^block*/id)arg1 ;
-(void)deliverTask:(id)arg1 taskName:(id)arg2 onQueue:(id)arg3 ;
@end

