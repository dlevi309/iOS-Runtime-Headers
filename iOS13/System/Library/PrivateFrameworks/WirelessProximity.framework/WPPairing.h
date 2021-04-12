/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(id<WPPairingDelegate>)delegate;
-(void)setDelegate:(id<WPPairingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopProximityPairingServiceScanning;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 scanMode:(long long)arg3 ;
-(void)stateDidChange:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)startProximityPairingServiceScanningWithRSSI:(id)arg1 duplicates:(BOOL)arg2 ;
-(void)startProximityPairingServiceScanning;
-(void)ignoreDeviceUntilNextUnlock:(id)arg1 ignoreDevice:(BOOL)arg2 ;
-(NSMutableSet *)ignoredDevices;
-(void)setIgnoredDevices:(NSMutableSet *)arg1 ;
-(BOOL)allowScreenOffScanning;
-(void)setAllowScreenOffScanning:(BOOL)arg1 ;
@end

