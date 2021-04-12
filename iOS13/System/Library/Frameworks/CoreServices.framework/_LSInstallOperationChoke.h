/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/


@protocol OS_dispatch_semaphore, OS_dispatch_queue;
#import <CoreServices/CoreServices-Structs.h>
@class NSMutableDictionary, NSObject;

@interface _LSInstallOperationChoke : NSObject {

	unsigned long long _numConcurrentOperations;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _queuedWork;
	unsigned long long _activeInstallers;
	unsigned long long _activeUninstallers;
	NSObject*<OS_dispatch_semaphore> _backpressureSemaphore;
	NSObject*<OS_dispatch_queue> _concurrentQueue;

}
+(long long)_bufferedRequestSlop;
-(id)initWithWidth:(long long)arg1 ;
-(void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)availableOperationOfType:(long long)arg1 ;
-(void)enqueueInstallationOperation:(id)arg1 ;
-(BOOL)becomeUninstaller;
-(BOOL)becomeInstaller;
-(id)claimOperationOfType:(long long)arg1 ;
-(void)retireOperation:(id)arg1 ;
-(void)retireFromUninstaller;
-(void)retireFromInstaller;
@end

