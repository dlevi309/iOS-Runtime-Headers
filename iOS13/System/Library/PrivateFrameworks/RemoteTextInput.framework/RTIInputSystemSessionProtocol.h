/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@protocol RTIInputSystemSessionProtocol <NSObject>
@optional
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@required
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1;
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;

@end

