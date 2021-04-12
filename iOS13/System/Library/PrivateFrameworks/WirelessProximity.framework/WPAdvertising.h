/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAdvertisingDelegate;
@interface WPAdvertising : WPClient {

	id<WPAdvertisingDelegate> _delegate;

}

@property (nonatomic,retain) id<WPAdvertisingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned char)puckStringToType:(id)arg1 ;
+(id)puckTypeToString:(unsigned char)arg1 ;
-(void)invalidate;
-(id<WPAdvertisingDelegate>)delegate;
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)registerService:(id)arg1 ;
-(id)clientAsString;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(id)parseCompanyData:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
@end

