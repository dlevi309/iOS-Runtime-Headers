/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HAPAirPlayAccessoryBrowserDelegate, HAPWACAccessoryBrowserDelegate;
@class NSString, NSDate, NSMutableSet, CUWiFiScanner, HMFTimer;

@interface HAPWACAccessoryBrowser : HAPAccessoryServerBrowser <HMFTimerDelegate, HMFLogging> {

	NSString* _browsingIdentifier;
	NSDate* _browsingStartTime;
	id<HAPAirPlayAccessoryBrowserDelegate> _airplayDelegate;
	NSString* _scanning2Pt4SSID;
	/*^block*/id _found2Pt4Completion;
	id<HAPWACAccessoryBrowserDelegate> _delegate;
	NSMutableSet* _foundUnconfiguredUnpairedAccessories;
	NSMutableSet* _foundUnconfiguredPairedAccessories;
	NSMutableSet* _found2Pt4Networks;
	CUWiFiScanner* _cuWiFiScanner;
	unsigned long long _state;
	HMFTimer* _backoffTimer;

}

@property (nonatomic,retain) NSString * browsingIdentifier;                                              //@synthesize browsingIdentifier=_browsingIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * browsingStartTime;                                                 //@synthesize browsingStartTime=_browsingStartTime - In the implementation block
@property (assign,nonatomic,__weak) id<HAPAirPlayAccessoryBrowserDelegate> airplayDelegate;              //@synthesize airplayDelegate=_airplayDelegate - In the implementation block
@property (nonatomic,retain) NSString * scanning2Pt4SSID;                                                //@synthesize scanning2Pt4SSID=_scanning2Pt4SSID - In the implementation block
@property (nonatomic,copy) id found2Pt4Completion;                                                       //@synthesize found2Pt4Completion=_found2Pt4Completion - In the implementation block
@property (nonatomic,__weak,readonly) id<HAPWACAccessoryBrowserDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredUnpairedAccessories;                        //@synthesize foundUnconfiguredUnpairedAccessories=_foundUnconfiguredUnpairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * foundUnconfiguredPairedAccessories;                          //@synthesize foundUnconfiguredPairedAccessories=_foundUnconfiguredPairedAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * found2Pt4Networks;                                           //@synthesize found2Pt4Networks=_found2Pt4Networks - In the implementation block
@property (nonatomic,retain) CUWiFiScanner * cuWiFiScanner;                                              //@synthesize cuWiFiScanner=_cuWiFiScanner - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) HMFTimer * backoffTimer;                                                  //@synthesize backoffTimer=_backoffTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)timerDidFire:(id)arg1 ;
-(void)setFound2Pt4Completion:(id)arg1 ;
-(void)setScanning2Pt4SSID:(NSString *)arg1 ;
-(void)_handleChangeUnconfiguredUnpairedWACAccessory:(id)arg1 ;
-(id<HAPWACAccessoryBrowserDelegate>)delegate;
-(NSString *)scanning2Pt4SSID;
-(void)_initWiFiScannerWithScanner:(id)arg1 ;
-(void)_handleChangeUnconfiguredPairedWACAccessory:(id)arg1 ;
-(id)_removeUnconfiguredWACDevice:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scan2Pt4APWithSSID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startBrowsingForWACAccessories;
-(void)handleFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)setBrowsingIdentifier:(NSString *)arg1 ;
-(void)_reportFound2Pt4Network:(id)arg1 ;
-(void)_stopBrowsingForWACAccessories;
-(void)initWiFiScannerWithScanner:(id)arg1 ;
-(void)handleFoundAPDevice:(id)arg1 ;
-(void)_handleUnconfiguredPairedWACDevice:(id)arg1 ;
-(HMFTimer *)backoffTimer;
-(NSMutableSet *)foundUnconfiguredPairedAccessories;
-(void)_addFoundUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(void)_handleBrowsingBackOffTimerExpiry;
-(id)visible2Pt4Networks;
-(NSDate *)browsingStartTime;
-(void)_handleNewUnconfiguredUnpairedWACDevice:(id)arg1 ;
-(CUWiFiScanner *)cuWiFiScanner;
-(void)setBrowsingStartTime:(NSDate *)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(NSMutableSet *)found2Pt4Networks;
-(void)setFoundUnconfiguredPairedAccessories:(NSMutableSet *)arg1 ;
-(unsigned long long)state;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)setFound2Pt4Networks:(NSMutableSet *)arg1 ;
-(id)found2Pt4Completion;
-(void)stopDiscoveringAccessoryServers;
-(id<HAPAirPlayAccessoryBrowserDelegate>)airplayDelegate;
-(void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)arg1 ;
-(void)handleFoundUnconfiguredPairedWACDevice:(id)arg1 ;
-(NSMutableSet *)foundUnconfiguredUnpairedAccessories;
-(NSString *)browsingIdentifier;
-(void)handleChangeUnconfiguredWACDevice:(id)arg1 ;
-(void)_restartBrowsingWithAllNetworks;
-(void)handleRemovedUnconfiguredWACDevice:(id)arg1 ;
-(void)setFoundUnconfiguredUnpairedAccessories:(NSMutableSet *)arg1 ;
-(void)setAirplayDelegate:(id<HAPAirPlayAccessoryBrowserDelegate>)arg1 ;
-(void)startDiscoveringAccessoryServers;
-(void)setCuWiFiScanner:(CUWiFiScanner *)arg1 ;
@end

