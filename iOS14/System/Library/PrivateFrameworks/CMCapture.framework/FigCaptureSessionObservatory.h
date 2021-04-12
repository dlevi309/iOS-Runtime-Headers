/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSMapTable, NSHashTable, NSObject;

@interface FigCaptureSessionObservatory : NSObject {

	NSMapTable* _captureSessionsStorage;
	NSHashTable* _registeredObservers;
	NSObject*<OS_dispatch_queue> _queue;
	long long _lastRunningIdentifier;

}
+(void)initialize;
+(id)sharedObservatory;
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(id)init;
-(void)_setRunning:(BOOL)arg1 forCaptureSession:(OpaqueFigCaptureSessionRef)arg2 ;
-(void)captureSessionWasCreated:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_registerObserver:(id)arg1 ;
-(void)dealloc;
@end

