/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)performOperationForBundleIdentifier:(id)arg1 installType:(long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)becomeInstaller;
-(BOOL)becomeUninstaller;
-(id)claimOperationOfType:(long long)arg1 ;
-(void)retireFromUninstaller;
-(void)retireOperation:(id)arg1 ;
-(void)enqueueInstallationOperation:(id)arg1 ;
-(void)retireFromInstaller;
-(id)availableOperationOfType:(long long)arg1 ;
-(id)initWithWidth:(long long)arg1 ;
@end

