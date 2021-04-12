/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDMaintenanceOperation.h>

@interface _HDMaintenanceWorkCoordinatorAsynchronousWorkOperation : HDMaintenanceOperation {

	/*^block*/id _operationBlock;
	BOOL executing;
	BOOL finished;

}

@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
-(void)start;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isAsynchronous;
-(void)setExecuting:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 operationBlock:(/*^block*/id)arg2 ;
@end

