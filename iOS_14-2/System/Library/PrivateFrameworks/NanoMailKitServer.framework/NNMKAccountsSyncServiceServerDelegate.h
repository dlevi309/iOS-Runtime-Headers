/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@protocol NNMKAccountsSyncServiceServerDelegate <NSObject>
@required
-(void)accountsSyncServiceServer:(id)arg1 didChangeAccountSourceType:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
-(void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
-(void)accountsSyncServiceServer:(id)arg1 didReceivedAccountAuthenticationStatus:(id)arg2 requestTime:(double)arg3;

@end

