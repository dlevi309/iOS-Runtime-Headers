/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <Proximity/Proximity-Structs.h>
#import <Proximity/PRRangingDevice.h>
#import <libobjc.A.dylib/PRRangingClientProtocol.h>

@protocol PRBeaconListenerDelegate, OS_dispatch_queue;
@class NSObject, NSString;

@interface PRBeaconListener : PRRangingDevice <PRRangingClientProtocol> {

	DaemonBackedService _service;
	id<PRBeaconListenerDelegate> _delegate;
	unsigned long long _state;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<PRBeaconListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                                  //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<PRBeaconListenerDelegate>)delegate;
-(void)setDelegate:(id<PRBeaconListenerDelegate>)arg1 ;
-(unsigned long long)state;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)didFailWithError:(id)arg1 ;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)clearBeaconWhitelistWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushBeaconWhitelist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)deamonConnectionInvalidated;
-(void)deamonConnectionInterrupted;
@end

