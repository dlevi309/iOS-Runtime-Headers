/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPMagicSwitchDelegate;
@interface WPMagicSwitch : WPClient {

	id<WPMagicSwitchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPMagicSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)invalidate;
-(id<WPMagicSwitchDelegate>)delegate;
-(void)setDelegate:(id<WPMagicSwitchDelegate>)arg1 ;
-(void)stopAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopScanning;
-(void)stateDidChange:(long long)arg1 ;
-(SCD_Struct_WP1)dutyCycleToScanningRates:(long long)arg1 ;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startScanningWithData:(id)arg1 ;
-(void)startAdvertisingWithData:(id)arg1 ;
@end

