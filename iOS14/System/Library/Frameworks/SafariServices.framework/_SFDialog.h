/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class _SFDialogController, NSArray;

@interface _SFDialog : NSObject {

	BOOL _completed;
	BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
	_SFDialogController* _dialogController;

}

@property (nonatomic,copy,readonly) NSArray * additionalCancellationExemptions; 
@property (nonatomic,readonly) BOOL canceledOnApplicationBackground; 
@property (assign,nonatomic,__weak) _SFDialogController * dialogController;                  //@synthesize dialogController=_dialogController - In the implementation block
@property (nonatomic,readonly) BOOL canceledOnProvisionalNavigation; 
@property (nonatomic,readonly) BOOL canceledOnCommittedNavigation; 
@property (nonatomic,readonly) BOOL completionHandlerBlocksWebProcess; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL shouldIgnoreGlobalModalUIDisplayPolicy;                  //@synthesize shouldIgnoreGlobalModalUIDisplayPolicy=_shouldIgnoreGlobalModalUIDisplayPolicy - In the implementation block
+(id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)printBlockedDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)dialogWithWebUIAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)pageLoadErrorWithMessage:(id)arg1 ;
+(id)telephonyNavigationDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)requestStorageAccessDialogForDomain:(id)arg1 underCurrentDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(BOOL)arg3 ;
+(id)_dialogWithTitle:(id)arg1 message:(id)arg2 acceptAction:(id)arg3 secondaryAction:(id)arg4 cancelAction:(id)arg5 applicationModal:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)_appLinkRedirectDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)redirectDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)noFeedAppDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)redirectDialogWithNavigationResult:(id)arg1 promptPolicy:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)blockedPopupWindowDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)increaseDatabaseQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)increaseApplicationCacheQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)allowDownloadDialogWithDownload:(id)arg1 initiatingURL:(id)arg2 allowViewAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)websiteLocationDialogForURL:(id)arg1 preciseLocation:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(/*^block*/id)arg1 ;
+(id)authenticatorDialogForPanel:(id)arg1 dialogController:(id)arg2 ;
-(long long)presentationStyle;
-(BOOL)completionHandlerBlocksWebProcess;
-(void)setDialogController:(_SFDialogController *)arg1 ;
-(BOOL)canceledOnProvisionalNavigation;
-(BOOL)canceledOnCommittedNavigation;
-(NSArray *)additionalCancellationExemptions;
-(BOOL)canceledOnApplicationBackground;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
-(void)completeWithResponse:(id)arg1 ;
-(_SFDialogController *)dialogController;
-(id)newDialogViewRepresentation;
-(void)didCompleteWithResponse:(id)arg1 ;
@end
