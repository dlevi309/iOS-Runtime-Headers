/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol WBSTranslationContextDelegate <NSObject>
@optional
-(void)translationContextReloadPageInOriginalLanguage:(id)arg1;
-(BOOL)translationContextIsUsingPrivateBrowsing:(id)arg1;
-(void)translationContext:(id)arg1 urlForCurrentPageWithCompletionHandler:(/*^block*/id)arg2;
-(void)translationContext:(id)arg1 showFirstTimeConsentAlertWithCompletionHandler:(/*^block*/id)arg2;
-(void)translationContext:(id)arg1 shouldReportProgressInUnifiedField:(BOOL)arg2;
-(void)translationContext:(id)arg1 showTranslationErrorAlertWithTitle:(id)arg2 message:(id)arg3;

@end

