/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, OS_xpc_object, RBDaemonContextProviding, OS_os_transaction;
@class NSObject, NSMapTable, NSMutableArray, NSString;

@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSMapTable* _lock_connectionToClientMap;
	NSMapTable* _lock_identifierToClientMap;
	NSMutableArray* _lock_readyClients;
	id<RBDaemonContextProviding> _context;
	NSObject*<OS_os_transaction> _transaction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(id)captureState;
-(id)init;
-(NSString *)debugDescription;
-(NSString *)stateCaptureTitle;
@end

