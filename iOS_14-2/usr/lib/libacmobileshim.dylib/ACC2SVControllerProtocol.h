/*
* Generated on Thursday, January 14, 2021 at 2:29:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)cancelWithCompletion:(/*^block*/id)arg1;
-(id<ACC2SVControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id<ACC2SVTransportControllerProtocol>)transportController;
-(void)setTransportController:(id)arg1;
-(void)setSecondFactorAuthUIController:(id)arg1;
-(id<ACC2SVAuthenticationUIControllerProtocol>)secondFactorAuthUIController;
-(void)perform2StepVerificationWithRequest:(id)arg1 completion:(/*^block*/id)arg2;

@end

