/*
* Generated on Thursday, January 14, 2021 at 2:29:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libIOAccessoryManager.dylib
*/

#import <libIOAccessoryManager.dylib/libIOAccessoryManager.dylib-Structs.h>
#import <libIOAccessoryManager.dylib/BaseResourceArbiterClient.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSObject;

@interface ResourceArbiterClient : BaseResourceArbiterClient {

	unsigned _ioConnect;
	IONotificationPortRef _ioNotificationPort;
	unsigned _ioNotificationObject;
	NSObject*<OS_dispatch_queue> _notificationPortQueue;
	BOOL _resourceAccessStatus;
	unsigned _ioService;
	int _clientPriority;
	int _pendingResourceRequest;
	NSObject*<OS_dispatch_semaphore> _sema;

}

@property (nonatomic,readonly) unsigned ioService;                                 //@synthesize ioService=_ioService - In the implementation block
@property (nonatomic,readonly) int clientPriority;                                 //@synthesize clientPriority=_clientPriority - In the implementation block
@property (nonatomic,readonly) int pendingResourceRequest;                         //@synthesize pendingResourceRequest=_pendingResourceRequest - In the implementation block
@property (nonatomic,readonly) BOOL resourceAccessStatus;                          //@synthesize resourceAccessStatus=_resourceAccessStatus - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> sema;              //@synthesize sema=_sema - In the implementation block
-(NSObject*<OS_dispatch_semaphore>)sema;
-(int)clientPriority;
-(id)initWithID:(int)arg1 ;
-(void)dealloc;
-(unsigned)ioService;
-(void)releaseResourceAccess;
-(BOOL)synchRequestResourceAccess;
-(BOOL)asynchRequestResourceAccess:(BOOL)arg1 ;
-(void)_processResourceAccessStatus:(BOOL)arg1 ;
-(void)resourceAccessRevoked;
-(void)resourceAccessGranted;
-(int)pendingResourceRequest;
-(BOOL)resourceAccessStatus;
@end

