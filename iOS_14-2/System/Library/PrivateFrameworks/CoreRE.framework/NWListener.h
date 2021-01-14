/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRE.framework/CoreRE
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_nw_listener;
#import <CoreRE/CoreRE-Structs.h>
@class NSObject;

@interface NWListener : NSObject {

	NSObject*<OS_dispatch_queue> listenerQueue;
	NSObject*<OS_dispatch_queue> transportQueue;
	NSObject*<OS_dispatch_semaphore> readySemaphore;
	NSObject*<OS_nw_listener> listener;
	int listenerState;
	os_unfair_lock_s layerLock;
	NWProtocolLayer* layer;

}
-(void)stopListening;
-(id)initWithLayer:(NWProtocolLayer*)arg1 ;
-(void)setListener:(id)arg1 ;
-(void)waitForReady;
@end

