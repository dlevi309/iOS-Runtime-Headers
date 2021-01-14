/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPMagicSwitchDelegate;
@interface WPMagicSwitch : WPClient {

	id<WPMagicSwitchDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPMagicSwitchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)stopAdvertising;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(id<WPMagicSwitchDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPMagicSwitchDelegate>)arg1 ;
-(void)stopScanning;
-(id)clientAsString;
-(void)startAdvertisingWithData:(id)arg1 ;
-(SCD_Struct_WP1)dutyCycleToScanningRates:(long long)arg1 ;
-(void)invalidate;
-(void)startScanningWithData:(id)arg1 ;
@end

