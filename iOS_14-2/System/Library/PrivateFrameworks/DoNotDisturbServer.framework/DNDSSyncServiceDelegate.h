/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/


@protocol DNDSSyncServiceDelegate <NSObject>
@optional
-(BOOL)syncService:(id)arg1 shouldAcceptIncomingMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@required
-(void)syncService:(id)arg1 didReceiveMessage:(id)arg2 withVersionNumber:(unsigned long long)arg3 fromDeviceIdentifier:(id)arg4;

@end

