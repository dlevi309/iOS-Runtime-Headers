/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMapTable, NSHashTable, NSObject;

@interface FigCaptureSessionObservatory : NSObject {

	NSMapTable* _captureSessionsStorage;
	NSHashTable* _registeredObservers;
	NSObject*<OS_dispatch_queue> _queue;
	long long _lastRunningIdentifier;

}
+(void)initialize;
+(id)sharedObservatory;
-(id)init;
-(void)dealloc;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)captureSessionWasCreated:(OpaqueFigCaptureSessionRef)arg1 ;
-(void)_registerObserver:(id)arg1 ;
-(void)_setRunning:(BOOL)arg1 forCaptureSession:(OpaqueFigCaptureSessionRef)arg2 ;
@end

