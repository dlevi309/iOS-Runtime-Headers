/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {

	int _circleChangeToken;
	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableArray* _circleObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerListener:(id)arg1 ;
-(id)init;
-(void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)eventReceived:(const char*)arg1 eventValue:(unsigned long long)arg2 ;
-(void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopObservingCircleStatusChange;
-(const char*)_notificationName;
-(void)dealloc;
@end

