/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@protocol AXIDCRemoteControllerDelegate <NSObject>
@property (assign,nonatomic,__weak) id<AXIDCManagerSecurityDelegate> securityDelegate; 
@required
-(void)controller:(id)arg1 didReceiveData:(id)arg2;
-(void)controller:(id)arg1 didFinishSendingData:(id)arg2;
-(void)controllerDidFinishConnecting:(id)arg1;
-(void)controller:(id)arg1 didCloseConnectionWithError:(id)arg2;
-(id<AXIDCManagerSecurityDelegate>)securityDelegate;
-(void)setSecurityDelegate:(id)arg1;

@end

