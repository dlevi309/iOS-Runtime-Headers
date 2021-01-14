/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
*/


@protocol IDSCrossDeviceTransportEndpoint <NSObject>
@optional
-(void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(BOOL)arg2 error:(id)arg3;
-(void)messageWithIdentifierHasBeenDelivered:(id)arg1;

@required
-(void)messageReceivedFromIDS:(id)arg1;

@end

