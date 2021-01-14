/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
*/


@protocol RTIInputSystemSessionProtocol <NSObject>
@optional
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentTraitsDidChange:(id)arg2;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 didChangePause:(BOOL)arg2 withReason:(id)arg3;

@required
-(oneway void)beginRemoteTextInputSessionWithID:(id)arg1 documentTraits:(id)arg2 initialDocumentState:(id)arg3;
-(oneway void)endRemoteTextInputSessionWithID:(id)arg1;
-(oneway void)remoteTextInputSessionWithID:(id)arg1 documentDidChange:(id)arg2;

@end

