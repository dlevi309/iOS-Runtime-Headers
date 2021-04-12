/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@protocol HUIDCRemoteControllerDelegate <NSObject>
@property (assign,nonatomic,__weak) id<HUIDCManagerSecurityDelegate> securityDelegate; 
@required
-(void)controller:(id)arg1 didReceiveData:(id)arg2;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2;
-(void)controllerDidFinishConnecting:(id)arg1;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
-(id<HUIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id)arg1;

@end

