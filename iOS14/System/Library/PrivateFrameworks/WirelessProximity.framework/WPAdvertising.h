/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stateDidChange:(long long)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(id<WPAdvertisingDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)registerService:(id)arg1 ;
-(void)setDelegate:(id<WPAdvertisingDelegate>)arg1 ;
-(id)clientAsString;
-(void)invalidate;
-(id)parseCompanyData:(id)arg1 ;
-(void)deregisterService:(id)arg1 ;
@end

