/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
*/


@protocol _TVRUINetworkObserverDelegate;
@class WFWiFiStateMonitor, BluetoothManager;

@interface _TVRUINetworkObserver : NSObject {

	WFWiFiStateMonitor* _wifiStateMonitor;
	BluetoothManager* _bluetoothManager;
	BOOL _networkReachable;
	id<_TVRUINetworkObserverDelegate> _delegate;

}

@property (getter=isNetworkReachable,nonatomic,readonly) BOOL networkReachable; 
@property (assign,nonatomic,__weak) id<_TVRUINetworkObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_TVRUINetworkObserverDelegate>)delegate;
-(void)setDelegate:(id<_TVRUINetworkObserverDelegate>)arg1 ;
-(BOOL)isNetworkReachable;
-(void)_wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2 ;
-(void)_beginObservingBluetoothStateChanges;
-(void)_stopObservingBluetoothStateChanges;
-(BOOL)_isBluetoothAvailable;
-(void)_bluetoothStateDidChange:(id)arg1 ;
-(void)_bluetoothConnectionStatusDidChange:(id)arg1 ;
@end

