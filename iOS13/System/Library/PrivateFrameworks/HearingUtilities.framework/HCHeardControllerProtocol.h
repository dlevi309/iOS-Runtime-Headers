/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol HCHeardControllerProtocol <NSObject>
@required
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2;
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1;

@end

