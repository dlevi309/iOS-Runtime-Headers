/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVCallbackContextRegistry, NSMutableDictionary, NSObject;

@interface AVCMNotificationDispatcher : NSObject {

	opaqueCMNotificationCenterRef _cmNotificationCenter;
	AVCallbackContextRegistry* _callbackContextRegistry;
	NSMutableDictionary* _listenerObjectsPassedToFig;
	NSObject*<OS_dispatch_queue> _listenerObjectsQueue;

}

@property (getter=_callbackContextRegistry,nonatomic,readonly) AVCallbackContextRegistry * callbackContextRegistry; 
@property (nonatomic,readonly) opaqueCMNotificationCenterRef CMNotificationCenter; 
+(void)initialize;
+(id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
-(void)addListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 flags:(unsigned)arg5 ;
-(id)initWithCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)_callbackContextRegistry;
-(void)_addListenerAndCallback:(id)arg1 forWeakReferenceToListener:(id)arg2 callback:(/*function pointer*/void*)arg3 name:(CFStringRef)arg4 object:(const void*)arg5 ;
-(opaqueCMNotificationCenterRef)CMNotificationCenter;
-(id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(const void*)arg4 ;
@end

