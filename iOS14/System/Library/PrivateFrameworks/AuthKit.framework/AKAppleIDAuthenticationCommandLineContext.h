/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <AuthKit/AKAppleIDAuthenticationContext.h>
#import <libobjc.A.dylib/AKAppleIDServerAuthenticationUIProvider.h>

@class NSNumber, NSString;

@interface AKAppleIDAuthenticationCommandLineContext : AKAppleIDAuthenticationContext <AKAppleIDServerAuthenticationUIProvider> {

	NSNumber* _secondFactorCode;
	long long _verificationType;

}

@property (assign,nonatomic) long long verificationType;              //@synthesize verificationType=_verificationType - In the implementation block
@property (nonatomic,copy) NSNumber * secondFactorCode;               //@synthesize secondFactorCode=_secondFactorCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(id)_promptForVerificationCodeWithSecureEntry:(BOOL)arg1 ;
-(id)_jsonPostbackDictionaryForCode:(id)arg1 numberId:(id)arg2 ;
-(id)initWithVerificationType:(long long)arg1 ;
-(id)init;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSNumber *)secondFactorCode;
-(id)_xmlUIRequestForURL:(id)arg1 withPostbackDictionary:(id)arg2 ;
-(id)_mutableJSONRequestForURL:(id)arg1 ;
-(void)_presentServerUISecondFactorWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(long long)verificationType;
-(void)setSecondFactorCode:(NSNumber *)arg1 ;
-(unsigned long long)_capabilityForUIDisplay;
-(id)_parseHeaderTitleForPasscodeView:(id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_xmlUIRequestForURL:(id)arg1 withServerInfo:(id)arg2 ;
-(id)_promptUserForSelectionWithTrustedNumbers:(id)arg1 ;
-(void)setVerificationType:(long long)arg1 ;
-(void)_handleServerUISecondFactorWithObjectModel:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_mutableJSONRequestForPath:(id)arg1 ;
-(void)_verifySecondFactorCodeWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_beginDataTaskWithRequest:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_collectAndPostSecondFactorCodeForTrustedNumber:(id)arg1 configuration:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleServerUISMSSecondFactorWithDictionary:(id)arg1 statusCode:(long long)arg2 configuration:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_jsonDictionaryForData:(id)arg1 error:(id)arg2 ;
@end

