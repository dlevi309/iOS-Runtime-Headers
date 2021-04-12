/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

@class CDPContext, NSSet;


@protocol AASignInFlowControllerDelegate <NSObject>
@property (nonatomic,retain) CDPContext * cdpContext; 
@property (assign,nonatomic) BOOL skipCDPEnablement; 
@property (assign,nonatomic) BOOL backgroundDataclassEnablement; 
@property (assign,nonatomic) BOOL skipDataclassEnablement; 
@property (nonatomic,copy) NSSet * requiredTerms; 
@property (assign,nonatomic) BOOL shouldStashLoginResponse; 
@property (assign,nonatomic) unsigned long long findMyActivationAction; 
@optional
-(CDPContext *)cdpContext;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1;
-(NSSet *)requiredTerms;
-(BOOL)skipCDPEnablement;
-(void)signInFlowController:(id)arg1 saveAccount:(id)arg2 withAllDataclassesEnabledIfPossibleWithCompletion:(/*^block*/id)arg3;
-(void)signInFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4;
-(void)signInFlowController:(id)arg1 presentGenericTermsUIForAccount:(id)arg2 completion:(/*^block*/id)arg3;
-(void)signInFlowController:(id)arg1 enableFindMyWithAction:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(BOOL)skipDataclassEnablement;
-(BOOL)backgroundDataclassEnablement;
-(unsigned long long)findMyActivationAction;
-(void)setCdpContext:(id)arg1;
-(void)setSkipCDPEnablement:(BOOL)arg1;
-(void)setBackgroundDataclassEnablement:(BOOL)arg1;
-(void)setSkipDataclassEnablement:(BOOL)arg1;
-(void)setRequiredTerms:(id)arg1;
-(void)setFindMyActivationAction:(unsigned long long)arg1;

@end

