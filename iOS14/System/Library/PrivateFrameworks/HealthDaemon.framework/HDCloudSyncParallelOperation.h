/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDCloudSyncOperation.h>
#import <libobjc.A.dylib/HDSynchronousTaskGroupDelegate.h>

@class NSMutableArray, HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncParallelOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {

	NSMutableArray* _operations;
	HDSynchronousTaskGroup* _taskGroup;
	os_unfair_lock_s _lock;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldLogAtOperationStart;
+(BOOL)shouldProduceOperationAnalytics;
-(NSArray *)operations;
-(void)addOperation:(id)arg1 ;
-(void)main;
-(id)initWithConfiguration:(id)arg1 cloudState:(id)arg2 ;
-(void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(BOOL)arg2 errors:(id)arg3 ;
-(void)addOperationOfClass:(Class)arg1 ;
@end

