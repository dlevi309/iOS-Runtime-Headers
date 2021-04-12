/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPObjectDiscoveryDelegate, OS_dispatch_queue;
@class NSObject;

@interface WPObjectDiscovery : WPClient {

	id<WPObjectDiscoveryDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<WPObjectDiscoveryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(void)stopTest;
-(id)scanRequestFromScanMode:(long long)arg1 UpdateTime:(double)arg2 ;
-(id)init;
-(void)startScanningWithMode:(long long)arg1 Timeout:(double)arg2 ;
-(id<WPObjectDiscoveryDelegate>)delegate;
-(void)updateNearOwnerTokens:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)updateBeaconingExtended:(id)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)updateScanningRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)startTest;
-(void)setDelegate:(id<WPObjectDiscoveryDelegate>)arg1 ;
-(void)stopScanning;
-(void)devicesDiscovered:(id)arg1 ;
-(id)clientAsString;
-(void)updateBeaconingKeys:(id)arg1 ;
-(void)updateBeaconingState:(id)arg1 ;
-(void)updateBeaconingStatus:(id)arg1 ;
-(void)receivedTestResponse:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)startScanning;
-(void)startScanningWithMode:(long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

