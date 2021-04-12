/*
* Generated on Thursday, January 14, 2021 at 2:24:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<PRBeaconListenerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegate:(id<PRBeaconListenerDelegate>)arg1 ;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)didFailWithError:(id)arg1 ;
-(void)_updateState:(unsigned long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)clearBeaconWhitelistWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)pushBeaconWhitelist:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2 ;
-(void)didReceiveNewSolutions:(id)arg1 ;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1 ;
-(void)deamonConnectionInvalidated;
-(void)deamonConnectionInterrupted;
@end

