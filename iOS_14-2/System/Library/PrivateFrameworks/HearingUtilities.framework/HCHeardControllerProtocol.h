/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol HCHeardControllerProtocol <NSObject>
@required
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2;

@end

