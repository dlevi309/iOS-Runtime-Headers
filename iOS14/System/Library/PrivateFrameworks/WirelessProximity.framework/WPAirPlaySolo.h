/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAirPlaySoloDelegate;
@interface WPAirPlaySolo : WPClient {

	id<WPAirPlaySoloDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPAirPlaySoloDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)lostPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)stoppedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)foundPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)peerTrackingAvailable;
-(void)peerTrackingFull;
-(void)stopConnectionlessScanningWithData:(id)arg1 ;
-(id)init;
-(id<WPAirPlaySoloDelegate>)delegate;
-(void)startConnectionlessAdvertisingWithData:(id)arg1 ;
-(void)stopConnectionlessAdvertising:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)failedToStartTrackingPeer:(id)arg1 error:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPAirPlaySoloDelegate>)arg1 ;
-(id)clientAsString;
-(void)startedTrackingPeer:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)stopTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)invalidate;
-(void)stopConnectionlessAdvertising;
-(void)startTrackingPeer:(id)arg1 withData:(id)arg2 ;
-(void)startConnectionlessScanningWithData:(id)arg1 ;
@end

