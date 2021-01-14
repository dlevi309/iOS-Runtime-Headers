/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class NSObject, NSMutableDictionary;

@interface AVCMNotificationDispatcher : NSObject {

	opaqueCMNotificationCenterRef _cmNotificationCenter;
	NSObject*<OS_dispatch_queue> _listenerObjectsQueue;
	NSMutableDictionary* _observersForListenerKeys;

}

@property (nonatomic,readonly) opaqueCMNotificationCenterRef CMNotificationCenter; 
+(void)initialize;
+(id)notificationDispatcherForCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)init;
-(id)initWithCMNotificationCenter:(opaqueCMNotificationCenterRef)arg1 ;
-(id)_copyAndRemoveObserverForWeakReferenceToListener:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 ;
-(void)removeListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 ;
-(void)addListenerWithWeakReference:(id)arg1 callback:(/*function pointer*/void*)arg2 name:(CFStringRef)arg3 object:(void*)arg4 flags:(unsigned)arg5 ;
-(opaqueCMNotificationCenterRef)CMNotificationCenter;
-(void)dealloc;
@end

