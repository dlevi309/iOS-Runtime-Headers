/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject;

@interface PLThumbnailContextCleanupTimer : NSObject {

	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	os_unfair_lock_s _transactionLock;
	NSObject*<OS_os_transaction> _transaction;

}
-(void)startOrRestartTimer;
-(void)activate;
-(void)_timerFired;
-(id)initWithHandler:(/*^block*/id)arg1 ;
-(void)invalidate;
@end

