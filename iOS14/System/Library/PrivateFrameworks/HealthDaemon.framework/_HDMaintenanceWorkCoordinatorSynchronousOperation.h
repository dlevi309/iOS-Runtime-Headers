/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDMaintenanceOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(id)initWithName:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)main;
@end

