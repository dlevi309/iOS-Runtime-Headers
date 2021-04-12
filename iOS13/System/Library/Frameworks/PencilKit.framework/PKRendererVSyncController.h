/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class NSObject, NSHashTable;

@interface PKRendererVSyncController : NSObject {

	NSObject*<OS_dispatch_queue> _vSyncQueue;
	NSObject*<OS_dispatch_queue> _runloopQueue;
	NSHashTable* _rendererControllers;
	IOMobileFramebufferRef _ioMobileFramebuffer;

}
+(id)sharedController;
-(id)init;
-(void)createVSyncNotifications;
-(void)signalVSyncSemaphore:(double)arg1 presentationTime:(unsigned long long)arg2 ;
-(void)addRendererController:(id)arg1 ;
-(void)removeRendererController:(id)arg1 ;
-(void)removeVSyncNotifications;
@end

