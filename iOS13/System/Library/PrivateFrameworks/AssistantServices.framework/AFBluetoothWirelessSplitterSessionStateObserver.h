/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFBluetoothWirelessSplitterSessionStateObserverDelegate;
@class NSObject, AFNotifyObserver, NSString;

@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFBluetoothWirelessSplitterSessionStateObserverDelegate> _delegate;
	AFNotifyObserver* _notifyObserver;
	long long _state;

}

@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(long long)state;
-(void)_setState:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
@end

