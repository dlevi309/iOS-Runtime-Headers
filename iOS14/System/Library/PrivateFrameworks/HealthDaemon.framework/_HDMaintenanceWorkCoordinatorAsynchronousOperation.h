/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDMaintenanceOperation.h>

@interface _HDMaintenanceWorkCoordinatorAsynchronousOperation : HDMaintenanceOperation {

	/*^block*/id _operationBlock;
	BOOL executing;
	BOOL finished;

}

@property (getter=isExecuting) BOOL executing; 
@property (getter=isFinished) BOOL finished; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(id)initWithName:(id)arg1 operationBlock:(/*^block*/id)arg2 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(void)dealloc;
@end

