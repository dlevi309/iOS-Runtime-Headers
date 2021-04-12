/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>
@optional
-(void)accessory:(id)arg1 didUpdateAccessoryIdentifier:(id)arg2;
-(void)accessory:(id)arg1 didUpdateAccessoryAccessToken:(id)arg2;

@required
-(void)accessory:(id)arg1 didUpdateRelayEnabled:(BOOL)arg2;
-(void)accessory:(id)arg1 didUpdateRelayState:(unsigned long long)arg2;
-(void)accessory:(id)arg1 didActivateRelayWithError:(id)arg2;
-(void)accessory:(id)arg1 didPairRelayWithError:(id)arg2;

@end

