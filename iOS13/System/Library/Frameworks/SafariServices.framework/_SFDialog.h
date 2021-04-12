/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSArray;

@interface _SFDialog : NSObject {

	BOOL _completed;
	BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;

}

@property (nonatomic,copy,readonly) NSArray * additionalCancellationExemptions; 
@property (nonatomic,readonly) BOOL canceledOnApplicationBackground; 
@property (nonatomic,readonly) BOOL canceledOnProvisionalNavigation; 
@property (nonatomic,readonly) BOOL canceledOnCommittedNavigation; 
@property (nonatomic,readonly) BOOL completionHandlerBlocksWebProcess; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) BOOL shouldIgnoreGlobalModalUIDisplayPolicy;                  //@synthesize shouldIgnoreGlobalModalUIDisplayPolicy=_shouldIgnoreGlobalModalUIDisplayPolicy - In the implementation block
+(id)telephonyNavigationDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)dialogWithWebUIAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(BOOL)arg3 ;
+(id)pageLoadErrorWithMessage:(id)arg1 ;
+(id)permanentlyAcceptCertificateDialogWithAcceptanceHandler:(/*^block*/id)arg1 ;
+(id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)printBlockedDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)requestStorageAccessDialogForDomain:(id)arg1 underCurrentDomain:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)authenticatorDialogForPanel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_dialogWithTitle:(id)arg1 message:(id)arg2 acceptAction:(id)arg3 secondaryAction:(id)arg4 cancelAction:(id)arg5 applicationModal:(BOOL)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)mailNavigationDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)noFeedAppDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)redirectDialogWithMessage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)blockedPopupWindowDialogWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)increaseDatabaseQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)increaseApplicationCacheQuotaDialogForOrigin:(id)arg1 newQuota:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)allowDownloadDialogWithDownload:(id)arg1 initiatingURL:(id)arg2 allowViewAction:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(long long)presentationStyle;
-(void)completeWithResponse:(id)arg1 ;
-(BOOL)completionHandlerBlocksWebProcess;
-(void)didCompleteWithResponse:(id)arg1 ;
-(BOOL)canceledOnProvisionalNavigation;
-(BOOL)canceledOnCommittedNavigation;
-(NSArray *)additionalCancellationExemptions;
-(BOOL)canceledOnApplicationBackground;
-(id)newDialogViewRepresentation;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
@end

