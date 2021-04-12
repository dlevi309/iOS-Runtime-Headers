/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WirelessProximity-Structs.h>
#import <WirelessProximity/WPClient.h>

@protocol WPHomeKitDelegate;
@interface WPHomeKit : WPClient {

	id<WPHomeKitDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPHomeKitDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)stateDidChange:(long long)arg1 ;
-(id<WPHomeKitDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)stopScanningForType:(long long)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)setDelegate:(id<WPHomeKitDelegate>)arg1 ;
-(void)startScanningWithData:(id)arg1 forType:(long long)arg2 ;
-(id)clientAsString;
-(unsigned char)clientTypeFromHomeKitType:(long long)arg1 ;
-(long long)homeKitTypeFromClientType:(unsigned char)arg1 ;
-(SCD_Struct_WP0)dutyCycleToScanningRates:(long long)arg1 ;
-(void)invalidate;
-(void)checkAllowDuplicate;
@end

