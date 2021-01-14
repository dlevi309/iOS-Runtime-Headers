/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPPairingDelegate;
@class NSMutableSet;

@interface WPPairing : WPClient {

	BOOL _allowScreenOffScanning;
	id<WPPairingDelegate> _delegate;
	NSMutableSet* _ignoredDevices;

}

@property (assign,nonatomic,__weak) id<WPPairingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSMutableSet * ignoredDevices;                                //@synthesize ignoredDevices=_ignoredDevices - In the implementation block
@property (assign) BOOL allowScreenOffScanning;                                  //@synthesize allowScreenOffScanning=_allowScreenOffScanning - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 scanMode:(long long)arg3 ;
-(BOOL)allowScreenOffScanning;
-(id<WPPairingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(NSMutableSet *)ignoredDevices;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPPairingDelegate>)arg1 ;
-(void)startProximityPairingServiceScanning;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 ;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)invalidate;
-(void)ignoreDeviceUntilNextUnlock:(id)arg1 ignoreDevice:(BOOL)arg2 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 ;
-(void)stopProximityPairingServiceScanning;
-(void)setAllowScreenOffScanning:(BOOL)arg1 ;
@end

