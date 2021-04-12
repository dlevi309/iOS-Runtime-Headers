/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPDeviceScannerDelegate;
@class NSMutableArray, NSMutableDictionary;

@interface WPDeviceScanner : WPClient {

	BOOL _anyScanResultsRequested;
	id<WPDeviceScannerDelegate> _delegate;
	NSMutableArray* _liveDevices;
	NSMutableDictionary* _activeScans;

}

@property (assign,nonatomic,__weak) id<WPDeviceScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * liveDevices;                             //@synthesize liveDevices=_liveDevices - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeScans;                        //@synthesize activeScans=_activeScans - In the implementation block
@property (assign,nonatomic) BOOL anyScanResultsRequested;                             //@synthesize anyScanResultsRequested=_anyScanResultsRequested - In the implementation block
-(id)description;
-(void)invalidate;
-(id<WPDeviceScannerDelegate>)delegate;
-(void)setDelegate:(id<WPDeviceScannerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(NSMutableArray *)liveDevices;
-(NSMutableDictionary *)activeScans;
-(BOOL)anyScanResultsRequested;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(void)timerFinished:(id)arg1 ;
-(void)unregisterForDevices:(id)arg1 ;
-(BOOL)parseType:(unsigned char)arg1 atOffset:(char*)arg2 withSize:(int)arg3 intoDictionary:(id)arg4 ;
-(void)postDevice:(id)arg1 ;
-(void)parseCompanyData:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
-(void)parseAirPrint:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
-(void)addPuckType:(id)arg1 toDictionary:(id)arg2 ;
-(void)postDevices:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)unregisterAllDeviceChanges;
-(void)anyDiscoveredDevice:(id)arg1 ;
-(void)setLiveDevices:(NSMutableArray *)arg1 ;
-(void)setActiveScans:(NSMutableDictionary *)arg1 ;
-(void)setAnyScanResultsRequested:(BOOL)arg1 ;
@end

