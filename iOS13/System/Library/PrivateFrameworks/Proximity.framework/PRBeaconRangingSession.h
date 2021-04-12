/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
*/

#import <libobjc.A.dylib/PRBeaconListenerDelegate.h>

@protocol OS_os_log, OS_dispatch_queue, PRBeaconRangingSessionDelegate;
@class NSObject, PRBeaconListener, PRBeaconDescriptor, NSString;

@interface PRBeaconRangingSession : NSObject <PRBeaconListenerDelegate> {

	NSObject*<OS_os_log> _logger;
	NSObject*<OS_dispatch_queue> _queue;
	PRBeaconListener* _beaconListener;
	unsigned long long _beaconListenerState;
	PRBeaconDescriptor* _activeDescriptor;
	id<PRBeaconRangingSessionDelegate> _delegate;

}

@property (__weak) id<PRBeaconRangingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<PRBeaconRangingSessionDelegate>)delegate;
-(void)setDelegate:(id<PRBeaconRangingSessionDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(void)startRangingInternal;
-(void)beaconListener:(id)arg1 didChangeState:(unsigned long long)arg2 ;
-(void)beaconListener:(id)arg1 didFailWithError:(id)arg2 ;
-(void)beaconListener:(id)arg1 didOutputRangeResults:(id)arg2 ;
-(void)startRangingWithBeaconsMatchingDescriptor:(id)arg1 ;
-(void)stopRangingWithBeaconsMatchingDescriptor:(id)arg1 ;
-(void)stopRangingInternal;
@end

