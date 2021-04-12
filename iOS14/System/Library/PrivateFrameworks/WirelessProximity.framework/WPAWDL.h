/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPAWDLDelegate;
@interface WPAWDL : WPClient {

	BOOL _useSmallerAirDrop;
	id<WPAWDLDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPAWDLDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) BOOL useSmallerAirDrop;                                    //@synthesize useSmallerAirDrop=_useSmallerAirDrop - In the implementation block
+(id)generateDataFromEmails:(id)arg1 ;
+(id)hashEmail:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)advertisingFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(void)advertisingStoppedOfType:(unsigned char)arg1 withError:(id)arg2 ;
-(void)advertisingPendingOfType:(unsigned char)arg1 ;
-(void)startConnectionlessAWDLServiceScanning;
-(void)advertisingStartedOfType:(unsigned char)arg1 ;
-(id<WPAWDLDelegate>)delegate;
-(void)setUseSmallerAirDrop:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)scanningStoppedOfType:(unsigned char)arg1 ;
-(void)startConnectionlessAWDLServiceAdvertisingWithData:(id)arg1 ;
-(void)scanningStartedOfType:(unsigned char)arg1 ;
-(void)deviceDiscovered:(id)arg1 ;
-(void)scanningFailedToStart:(id)arg1 ofType:(unsigned char)arg2 ;
-(BOOL)useSmallerAirDrop;
-(void)setDelegate:(id<WPAWDLDelegate>)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 ;
-(void)updateAdvertisingRequest:(id)arg1 withUpdate:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 machName:(id)arg3 ;
-(void)invalidate;
-(void)stopConnectionlessAWDLServiceAdvertising;
-(void)stopConnectionlessAWDLServiceScanning;
@end

