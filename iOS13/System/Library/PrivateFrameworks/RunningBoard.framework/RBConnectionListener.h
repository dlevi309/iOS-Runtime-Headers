/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@protocol OS_dispatch_queue, OS_xpc_object, OS_os_transaction;
@class NSObject, NSMapTable, RBConnectionContext, NSArray, NSString;

@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {

	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;
	NSMapTable* _lock_connectionToClientMap;
	NSMapTable* _lock_identifierToClientMap;
	RBConnectionContext* _context;
	NSObject*<OS_os_transaction> _transaction;

}

@property (nonatomic,readonly) NSArray * clients; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
+(id)sharedConnectionWorkloop;
-(id)init;
-(NSString *)debugDescription;
-(void)stop;
-(void)start;
-(id)initWithContext:(id)arg1 ;
-(NSArray *)clients;
-(id)captureState;
-(NSString *)stateCaptureTitle;
@end

