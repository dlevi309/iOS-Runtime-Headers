/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol _SFLinkPreviewHandler <BCSActionDelegate>
@optional
-(BOOL)isAutomationEnabledForLinkPreviewHelper:(id)arg1;
-(void)linkPreviewHelperWillOpenUniveralLinkLocally:(id)arg1;
-(BOOL)isPrivateBrowsingEnabledForPreviewHelper:(id)arg1;
-(void)linkPreviewHelper:(id)arg1 addURLToReadingList:(id)arg2;
-(void)linkPreviewHelperWillBeginDownload:(id)arg1;

@required
-(void)linkPreviewHelper:(id)arg1 commitPreviewViewControllerForAction:(long long)arg2;
-(void)linkPreviewHelper:(id)arg1 didProduceNavigationIntent:(id)arg2 forAction:(long long)arg3;
-(id)linkPreviewHelper:(id)arg1 previewViewControllerForURL:(id)arg2;
-(id)linkPreviewHelper:(id)arg1 resultOfLoadingURL:(id)arg2;
-(void)linkPreviewHelper:(id)arg1 redirectToExternalNavigationResult:(id)arg2;
-(BOOL)linkPreviewHelper:(id)arg1 supportsAction:(long long)arg2 forURL:(id)arg3;

@end

