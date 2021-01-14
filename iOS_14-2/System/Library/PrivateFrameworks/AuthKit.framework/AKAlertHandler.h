/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol AKAlertHandlerUIProvider;
@interface AKAlertHandler : NSObject {

	id<AKAlertHandlerUIProvider> _uiProvider;

}

@property (assign,nonatomic,__weak) id<AKAlertHandlerUIProvider> uiProvider;              //@synthesize uiProvider=_uiProvider - In the implementation block
+(id)sharedInstance;
-(id<AKAlertHandlerUIProvider>)uiProvider;
-(void)setUiProvider:(id<AKAlertHandlerUIProvider>)arg1 ;
-(void)_openPasscodeSetup;
-(void)showAlertForError:(id)arg1 withAuthKitAccount:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_showAlertForInvalidContextWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForMissingAppleAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)showAlertForError:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showAlertForAccountNotSupportedWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForUnverifiedEmailWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForInsufficientSecurityLevelWithBundleID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_openSpyglass;
-(void)_showAlertForCannotFindServerWithCompletion:(/*^block*/id)arg1 ;
-(void)_showAlertForUnderageAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_showAlertForPasscodeSetupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)showAlert:(id)arg1 primaryAction:(/*^block*/id)arg2 altAction:(/*^block*/id)arg3 ;
-(id)notificationDictionaryWithTitle:(id)arg1 message:(id)arg2 defaultButton:(id)arg3 alternateButton:(id)arg4 ;
-(void)_openUpgradeAccountSecurityLevelWithBundleID:(id)arg1 ;
-(BOOL)showAlert:(id)arg1 primaryAction:(/*^block*/id)arg2 altAction:(/*^block*/id)arg3 cancelAction:(/*^block*/id)arg4 ;
-(id)_URLWithString:(id)arg1 byAppendingParameters:(id)arg2 ;
@end

