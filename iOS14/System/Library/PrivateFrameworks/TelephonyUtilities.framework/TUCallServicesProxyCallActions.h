/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@protocol TUCallServicesProxyCallActions <NSObject>
@required
-(oneway void)ungroupCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1;
-(oneway void)sendHardPauseDigitsForCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)sendMMIOrUSSDCodeWithRequest:(id)arg1;
-(oneway void)pushHostedCallsToDestination:(id)arg1;
-(oneway void)setTTYType:(int)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)setRemoteVideoPresentationStateForCallWithUniqueProxyIdentifier:(id)arg1 presentationState:(int)arg2;
-(oneway void)shouldAllowRingingCallStatusIndicator:(BOOL)arg1;
-(oneway void)enteredForegroundForCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)activateInCallUIWithActivityContinuationIdentifier:(id)arg1;
-(oneway void)shouldSuppressInCallStatusBar:(BOOL)arg1;
-(oneway void)updateCallWithProxy:(id)arg1;
-(oneway void)groupCallWithUniqueProxyIdentifier:(id)arg1 withOtherCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)enteredBackgroundForAllCalls;
-(oneway void)swapCalls;
-(oneway void)setIsSendingVideo:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)pullRelayingCallsFromClient;
-(oneway void)pullHostedCallsFromPairedHostDevice;
-(oneway void)disconnectCurrentCallAndActivateHeld;
-(oneway void)answerCallWithRequest:(id)arg1;
-(oneway void)unholdCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)disconnectCallWithUniqueProxyIdentifier:(id)arg1;
-(oneway void)setUplinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)setDownlinkMuted:(BOOL)arg1 forCallWithUniqueProxyIdentifier:(id)arg2;
-(oneway void)disconnectAllCalls;
-(oneway void)willEnterBackgroundForAllCalls;
-(oneway void)setRemoteVideoPresentationSizeForCallWithUniqueProxyIdentifier:(id)arg1 size:(CGSize)arg2;
-(oneway void)playDTMFToneForCallWithUniqueProxyIdentifier:(id)arg1 key:(unsigned char)arg2;
-(oneway void)holdCallWithUniqueProxyIdentifier:(id)arg1;

@end

