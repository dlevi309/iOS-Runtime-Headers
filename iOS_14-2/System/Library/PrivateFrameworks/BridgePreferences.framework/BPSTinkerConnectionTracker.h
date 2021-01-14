/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
*/

#import <libobjc.A.dylib/PBBridgeIDSReachabilityObserver.h>

@protocol BPSTinkerConnectionTrackerDelegate;
@class PBBridgeIDSReachability, NRDevice, NSString;

@interface BPSTinkerConnectionTracker : NSObject <PBBridgeIDSReachabilityObserver> {

	PBBridgeIDSReachability* _reachability;
	NRDevice* _selectedDevice;
	id<BPSTinkerConnectionTrackerDelegate> _delegate;

}

@property (nonatomic,retain) NRDevice * selectedDevice;                                           //@synthesize selectedDevice=_selectedDevice - In the implementation block
@property (assign,nonatomic,__weak) id<BPSTinkerConnectionTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDevice:(id)arg1 ;
-(id<BPSTinkerConnectionTrackerDelegate>)delegate;
-(void)setDelegate:(id<BPSTinkerConnectionTrackerDelegate>)arg1 ;
-(void)dealloc;
-(void)reachability:(id)arg1 device:(id)arg2 connectionStatus:(unsigned long long)arg3 ;
-(void)setSelectedDevice:(NRDevice *)arg1 ;
-(NRDevice *)selectedDevice;
@end

