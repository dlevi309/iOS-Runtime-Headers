/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFSiriActivationHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, AFSiriActivationConnection, AFNotifyObserver, NSMutableDictionary, NSString;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling> {

	NSObject*<OS_dispatch_queue> _queue;
	AFSiriActivationConnection* _connection;
	AFNotifyObserver* _clientStateObserver;
	NSMutableDictionary* _clientStateTransitionHandlersByTimestamp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(id)init;
-(void)_waitUntilListeningForContext:(id)arg1 timeoutInterval:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(BOOL)handleContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

