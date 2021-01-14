/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKWiProxTrackerScannerDelegate.h>

@protocol CRKClassSessionBeaconBrowserDelegate;
@class NSMutableSet, NSSet, CRKWiProxTrackerScanner, NSString;

@interface CRKClassSessionBeaconBrowser : NSObject <CRKWiProxTrackerScannerDelegate> {

	long long mZoneTrackerLastState;
	NSMutableSet* mScanningZones;
	long long mIncreasedScanRequestCount;
	BOOL _allowInvitationSessions;
	BOOL _isBrowsing;
	BOOL _isScanning;
	id<CRKClassSessionBeaconBrowserDelegate> _delegate;
	NSSet* _organizationUUIDs;
	CRKWiProxTrackerScanner* _trackerScanner;
	NSSet* _trackingUUIDs;

}

@property (nonatomic,retain) CRKWiProxTrackerScanner * trackerScanner;                              //@synthesize trackerScanner=_trackerScanner - In the implementation block
@property (nonatomic,copy) NSSet * trackingUUIDs;                                                   //@synthesize trackingUUIDs=_trackingUUIDs - In the implementation block
@property (assign,nonatomic) BOOL isBrowsing;                                                       //@synthesize isBrowsing=_isBrowsing - In the implementation block
@property (assign,nonatomic) BOOL isScanning;                                                       //@synthesize isScanning=_isScanning - In the implementation block
@property (assign,nonatomic,__weak) id<CRKClassSessionBeaconBrowserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSSet * organizationUUIDs;                                               //@synthesize organizationUUIDs=_organizationUUIDs - In the implementation block
@property (assign,nonatomic) BOOL allowInvitationSessions;                                          //@synthesize allowInvitationSessions=_allowInvitationSessions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)invitationUUID;
-(BOOL)isBrowsing;
-(id)init;
-(BOOL)isScanning;
-(id<CRKClassSessionBeaconBrowserDelegate>)delegate;
-(id)stateDictionary;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)setDelegate:(id<CRKClassSessionBeaconBrowserDelegate>)arg1 ;
-(void)updateScanner;
-(void)setIsBrowsing:(BOOL)arg1 ;
-(void)stopBrowsing;
-(void)startBrowsing;
-(void)dealloc;
-(void)delegateDidFailWithError:(id)arg1 ;
-(void)trackerScanner:(id)arg1 didUpdateZoneTrackerState:(id)arg2 ;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 enteredZone:(id)arg3 ;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 exitedZone:(id)arg3 ;
-(void)trackerScanner:(id)arg1 zoneTracker:(id)arg2 didFailToRegisterZones:(id)arg3 withError:(id)arg4 ;
-(void)trackerScanner:(id)arg1 didUpdateDeviceScannerState:(id)arg2 ;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundRequestedDevices:(id)arg3 ;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 foundDevice:(id)arg3 withData:(id)arg4 ;
-(void)trackerScanner:(id)arg1 scanner:(id)arg2 didFailToRegisterDevices:(id)arg3 withError:(id)arg4 ;
-(void)updateZones;
-(void)setTrackerScanner:(CRKWiProxTrackerScanner *)arg1 ;
-(void)startInitialScan;
-(void)stopScanningForDevicesInAllZones;
-(CRKWiProxTrackerScanner *)trackerScanner;
-(void)setTrackingUUIDs:(NSSet *)arg1 ;
-(void)increasedScanDurationElapsed;
-(NSSet *)organizationUUIDs;
-(BOOL)allowInvitationSessions;
-(id)zoneDataForAdvertisementUUID:(id)arg1 ;
-(id)organizationUUIDsMatchingZoneData:(id)arg1 ;
-(id)zoneDataForOrganizationUUID:(id)arg1 ;
-(NSSet *)trackingUUIDs;
-(void)stopScanningForDevicesInZone:(id)arg1 ;
-(void)startScanningForDevicesInZone:(id)arg1 ;
-(void)delegateDidFindInvitationSessionWithEndpoint:(id)arg1 ;
-(void)delegateDidFindClassSession:(id)arg1 flags:(unsigned short)arg2 ;
-(void)setOrganizationUUIDs:(NSSet *)arg1 ;
-(void)setAllowInvitationSessions:(BOOL)arg1 ;
-(void)increaseScanFrequencyForDuration:(double)arg1 ;
@end

