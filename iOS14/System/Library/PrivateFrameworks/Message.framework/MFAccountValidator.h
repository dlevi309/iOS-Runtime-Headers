/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFAccountValidatorDelegate;
#import <Message/Message-Structs.h>
@class MFAccount, MFActivityMonitor, MFMonitoredInvocation, MFError, NSArray;

@interface MFAccountValidator : NSObject {

	MFAccount* _account;
	MFActivityMonitor* _accountValidationActivity;
	MFMonitoredInvocation* _validationInvocation;
	/*^block*/id _completionBlock;
	struct {
		unsigned useSSL : 1;
		unsigned incomingServerSupportsSSL : 1;
		unsigned smtpServerSupportsSSL : 1;
		unsigned canceled : 1;
		unsigned performsValidationInBackground : 1;
		unsigned unused : 27;
	}  _flags;
	MFError* _incomingServerValidationError;
	MFError* _smtpServerValidationError;
	NSArray* _incomingServerAuthSchemes;
	NSArray* _smtpServerAuthSchemes;
	id<MFAccountValidatorDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL performsValidationInBackground; 
@property (nonatomic,readonly) MFMonitoredInvocation * validationInvocation; 
@property (assign,nonatomic,__weak) id<MFAccountValidatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL accountIsValid; 
@property (nonatomic,readonly) BOOL accountSupportsSSL; 
@property (nonatomic,readonly) MFError * error; 
@property (nonatomic,readonly) MFAccount * account; 
-(MFAccount *)account;
-(id)init;
-(id<MFAccountValidatorDelegate>)delegate;
-(void)stop;
-(MFError *)error;
-(void)setDelegate:(id<MFAccountValidatorDelegate>)arg1 ;
-(id)initWithPerformsValidationInBackground:(BOOL)arg1 ;
-(void)validateAccount:(id)arg1 useSSL:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_validateAccount:(id)arg1 withFallbacks:(BOOL)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_backgroundValidateAccountFinished:(id)arg1 authSchemes:(id)arg2 ;
-(void)_validateAccount:(id)arg1 ;
-(void)_validateAccountWithoutFallbacks:(id)arg1 ;
-(BOOL)performsValidationInBackground;
-(BOOL)_outgoingServerValid;
-(BOOL)_incomingServerValid;
-(void)validateAccount:(id)arg1 useSSL:(BOOL)arg2 ;
-(void)validateAccountWithoutFallbacks:(id)arg1 ;
-(void)cancelValidation;
-(id)_ispAccountInfo;
-(BOOL)accountValidationCanceled;
-(MFMonitoredInvocation *)validationInvocation;
-(BOOL)accountIsValid;
-(BOOL)accountSupportsSSL;
-(void)dealloc;
@end

