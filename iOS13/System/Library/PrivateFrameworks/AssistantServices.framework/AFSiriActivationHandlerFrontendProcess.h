/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)initWithConnection:(id)arg1 ;
-(BOOL)handleContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)_waitUntilListeningForContext:(id)arg1 timeoutInterval:(double)arg2 completion:(/*^block*/id)arg3 ;
@end

