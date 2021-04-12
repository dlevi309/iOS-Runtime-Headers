/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) BOOL suspended; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)suspended;
-(void)cancelAllOperations;
-(void)enqueueMaintenanceOperation:(id)arg1 ;
-(void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2 ;
-(id)takeMaintenanceSuspensionAssertionForOwner:(id)arg1 ;
@end

