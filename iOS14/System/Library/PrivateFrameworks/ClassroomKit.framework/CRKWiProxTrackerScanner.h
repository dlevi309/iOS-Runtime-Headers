/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/WPZoneTrackerDelegate.h>
#import <libobjc.A.dylib/WPDeviceScannerDelegate.h>

@protocol CRKWiProxTrackerScannerDelegate;
@class WPZoneTracker, WPDeviceScanner, NSString;

@interface CRKWiProxTrackerScanner : NSObject <WPZoneTrackerDelegate, WPDeviceScannerDelegate> {

	WPZoneTracker* _zoneTracker;
	WPDeviceScanner* _deviceScanner;
	id<CRKWiProxTrackerScannerDelegate> _delegate;

}

@property (nonatomic,retain) WPZoneTracker * zoneTracker;                                      //@synthesize zoneTracker=_zoneTracker - In the implementation block
@property (nonatomic,retain) WPDeviceScanner * deviceScanner;                                  //@synthesize deviceScanner=_deviceScanner - In the implementation block
@property (assign,nonatomic,__weak) id<CRKWiProxTrackerScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long zoneTrackerState; 
@property (nonatomic,readonly) long long deviceScannerState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterAllZoneChanges;
-(id<CRKWiProxTrackerScannerDelegate>)delegate;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(void)setDelegate:(id<CRKWiProxTrackerScannerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)invalidate;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)unregisterAllDeviceChanges;
-(void)dealloc;
-(void)deviceScannerDidUpdateState:(id)arg1 ;
-(void)scanner:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3 ;
-(void)scanner:(id)arg1 foundRequestedDevices:(id)arg2 ;
-(void)scanner:(id)arg1 didFailToRegisterDevices:(id)arg2 withError:(id)arg3 ;
-(void)zoneTracker:(id)arg1 enteredZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 exitedZone:(id)arg2 ;
-(void)zoneTracker:(id)arg1 didFailToRegisterZones:(id)arg2 withError:(id)arg3 ;
-(void)zoneTrackerDidUpdateState:(id)arg1 ;
-(WPDeviceScanner *)deviceScanner;
-(void)setDeviceScanner:(WPDeviceScanner *)arg1 ;
-(WPZoneTracker *)zoneTracker;
-(void)setZoneTracker:(WPZoneTracker *)arg1 ;
-(long long)zoneTrackerState;
-(long long)deviceScannerState;
@end

