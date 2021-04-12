/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

