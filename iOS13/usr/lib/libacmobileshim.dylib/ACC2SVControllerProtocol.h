/*
* Generated on Monday, March 1, 2021 at 2:35:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACC2SVControllerProtocol <NSObject>
@property (assign,nonatomic) id<ACC2SVControllerDelegate> delegate; 
@property (nonatomic,retain) id<ACC2SVAuthenticationUIControllerProtocol> secondFactorAuthUIController; 
@property (nonatomic,retain) id<ACC2SVTransportControllerProtocol> transportController; 
@optional
-(void)removeHSATokenForPrincipal:(id)arg1;
-(void)synchronizeHSATokens:(id)arg1;
-(void)setup2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@required
-(id<ACC2SVControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(void)setSecondFactorAuthUIController:(id)arg1;
-(void)setTransportController:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerProtocol>)secondFactorAuthUIController;
-(id<ACC2SVTransportControllerProtocol>)transportController;
-(void)perform2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end

