/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <Foundation/NSOperation.h>

@interface HDMaintenanceOperation : NSOperation {

	double _startedTime;

}
+(id)maintenanceOperationWithName:(id)arg1 queue:(id)arg2 synchronousBlock:(/*^block*/id)arg3 ;
+(id)maintenanceOperationWithName:(id)arg1 asynchronousBlock:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(void)_operationDidStart;
-(void)_operationDidFinish;
@end

