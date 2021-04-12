/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/


@protocol TRNearbyDeviceScannerDelegate, OS_dispatch_queue;
@class SFDeviceDiscovery, NSObject;

@interface TRNearbyDeviceScanner : NSObject {

	id<TRNearbyDeviceScannerDelegate> _delegate;
	unsigned long long _state;
	SFDeviceDiscovery* _deviceDiscovery;
	NSObject*<OS_dispatch_queue> _scannerQ;
	unsigned long long _requestedService;

}

@property (assign,nonatomic) unsigned long long state;                           //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * deviceDiscovery;                //@synthesize deviceDiscovery=_deviceDiscovery - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> scannerQ;              //@synthesize scannerQ=_scannerQ - In the implementation block
@property (assign) unsigned long long requestedService;                          //@synthesize requestedService=_requestedService - In the implementation block
@property (__weak) id<TRNearbyDeviceScannerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
+(void)initialize;
-(id)init;
-(id<TRNearbyDeviceScannerDelegate>)delegate;
-(void)setDelegate:(id<TRNearbyDeviceScannerDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)openSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(void)stopScanning;
-(SFDeviceDiscovery *)deviceDiscovery;
-(void)setDeviceDiscovery:(SFDeviceDiscovery *)arg1 ;
-(void)setRequestedService:(unsigned long long)arg1 ;
-(void)_handleActivationWithError:(id)arg1 ;
-(unsigned long long)requestedService;
-(void)_deviceFound:(id)arg1 ;
-(void)_deviceChanged:(id)arg1 ;
-(void)startScanningForDevicesWithService:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)scannerQ;
-(void)setScannerQ:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

