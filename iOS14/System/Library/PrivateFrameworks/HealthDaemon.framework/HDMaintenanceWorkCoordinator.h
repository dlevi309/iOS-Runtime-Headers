/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDAssertionObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, HDAssertionManager, NSObject, NSLock, NSString;

@interface HDMaintenanceWorkCoordinator : NSObject <HDAssertionObserver> {

	NSOperationQueue* _maintenanceWorkQueue;
	HDAssertionManager* _assertionManager;
	NSObject*<OS_dispatch_queue> _assertionQueue;
	NSLock* _lock;

}

@property (assign) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(void)cancelAllOperations;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1 ;
-(void)enqueueMaintenanceOperation:(id)arg1 ;
@end

