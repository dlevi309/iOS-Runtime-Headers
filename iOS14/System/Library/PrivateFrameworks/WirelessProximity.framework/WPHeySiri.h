/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)holdVouchers;
-(void)stateDidChange:(long long)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)stopAdvertising;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(BOOL)isScanning;
-(id<WPHeySiriProtocol>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)startScanningAndAdvertisingWithData:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)stopScanningAndAdvertising;
-(void)deviceDiscovered:(id)arg1 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setIsScanning:(BOOL)arg1 ;
-(void)setDelegate:(id<WPHeySiriProtocol>)arg1 ;
-(void)stopScanning;
-(id)clientAsString;
-(void)startAdvertisingWithData:(id)arg1 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)invalidate;
-(void)startScanning;
@end

