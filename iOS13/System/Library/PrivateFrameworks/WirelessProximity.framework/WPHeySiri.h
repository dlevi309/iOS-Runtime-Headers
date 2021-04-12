/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPHeySiriProtocol;
@interface WPHeySiri : WPClient {

	BOOL _isScanning;
	id<WPHeySiriProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHeySiriProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL isScanning;                                              //@synthesize isScanning=_isScanning - In the implementation block
-(void)invalidate;
-(id<WPHeySiriProtocol>)delegate;
-(void)setDelegate:(id<WPHeySiriProtocol>)arg1 ;
-(void)stopAdvertising;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stopScanningAndAdvertising;
-(void)startScanning;
-(void)stopScanning;
-(void)startScanningAndAdvertisingWithData:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(BOOL)isScanning;
-(id)clientAsString;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)startAdvertisingWithData:(id)arg1 ;
@end

