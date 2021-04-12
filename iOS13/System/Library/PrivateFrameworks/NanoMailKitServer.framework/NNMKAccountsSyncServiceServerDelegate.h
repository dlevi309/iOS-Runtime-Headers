/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
@required
-(void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)accountsSyncServiceServer:(id)arg1 didChangeAccountSourceType:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didReceivedAccountAuthenticationStatus:(id)arg2 requestTime:(double)arg3;

@end

