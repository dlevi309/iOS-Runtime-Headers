/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stateDidChange:(long long)arg1 ;
-(void)postDevice:(id)arg1 ;
-(void)setActiveScans:(NSMutableDictionary *)arg1 ;
-(void)parseAirPrint:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
-(void)setAnyScanResultsRequested:(BOOL)arg1 ;
-(id<WPDeviceScannerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)registerForAnyScanResults:(BOOL)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(NSMutableDictionary *)activeScans;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(NSMutableArray *)liveDevices;
-(void)addPuckType:(id)arg1 toDictionary:(id)arg2 ;
-(BOOL)anyScanResultsRequested;
-(void)setDelegate:(id<WPDeviceScannerDelegate>)arg1 ;
-(id)description;
-(void)anyDiscoveredDevice:(id)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 ;
-(void)postDevices:(id)arg1 ;
-(void)registerForDevicesMatching:(id)arg1 options:(id)arg2 ;
-(void)setLiveDevices:(NSMutableArray *)arg1 ;
-(void)invalidate;
-(void)timerFinished:(id)arg1 ;
-(void)unregisterAllDeviceChanges;
-(void)unregisterForDevices:(id)arg1 ;
-(BOOL)parseType:(unsigned char)arg1 atOffset:(char*)arg2 withSize:(int)arg3 intoDictionary:(id)arg4 ;
-(void)parseCompanyData:(char*)arg1 forSize:(int)arg2 intoDictionary:(id)arg3 ;
@end

