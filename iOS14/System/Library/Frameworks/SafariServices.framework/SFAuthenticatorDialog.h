/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFDialog.h>
#import <libobjc.A.dylib/_SFAuthenticatorDialog.h>

@class _WKWebAuthenticationPanel, _SFDialogView, _WKWebAuthenticationAssertionResponse, NSString, NSArray;

@interface SFAuthenticatorDialog : _SFDialog <_SFAuthenticatorDialog> {

	_SFDialogView* _dialogView;
	long long _state;
	_WKWebAuthenticationPanel* _panel;
	/*^block*/id _pinRequestHandler;
	long long _responseSource;
	/*^block*/id _selectAssertionResponseHandler;
	_WKWebAuthenticationAssertionResponse* _assertionResponse;
	long long _biometryType;
	/*^block*/id _localAuthenticatorPolicyHandler;
	BOOL _isForUpdateOnly;
	NSString* _title;
	NSString* _message;
	NSArray* _actions;

}

@property (nonatomic,copy) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * actions;                                  //@synthesize actions=_actions - In the implementation block
@property (nonatomic,readonly) _WKWebAuthenticationPanel * panel;              //@synthesize panel=_panel - In the implementation block
@property (assign,nonatomic) BOOL isForUpdateOnly;                             //@synthesize isForUpdateOnly=_isForUpdateOnly - In the implementation block
-(void)setActions:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(long long)presentationStyle;
-(NSString *)message;
-(void)_shake;
-(NSArray *)actions;
-(_WKWebAuthenticationPanel *)panel;
-(void)transitionToState:(long long)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isForUpdateOnly;
-(void)_didSelectRow:(id)arg1 ;
-(id)useSecurityKeyAction;
-(void)triggerUseSecurityKey;
-(void)updateWebAuthenticationPanel:(long long)arg1 ;
-(void)requestPINWithRemainingRetries:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)selectAssertionResponse:(id)arg1 source:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIsForUpdateOnly:(BOOL)arg1 ;
-(id)initWithPanel:(id)arg1 ;
-(id)newDialogViewRepresentation;
-(NSString *)title;
-(void)dealloc;
-(void)didCompleteWithResponse:(id)arg1 ;
@end

