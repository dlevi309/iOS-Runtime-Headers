/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIApplicationRouter : NSObject
+(void)dismissPresentedViewController;
+(BOOL)handleAccountSettingsEvent:(id)arg1 url:(id)arg2 amsBagKey:(id)arg3 useAMSWebView:(BOOL)arg4 ;
+(id)topPresentedViewController;
+(id)currentNavigationController;
+(id)topMostVisibleViewController;
+(id)eventDataSourceForEvent:(id)arg1 routerDataSource:(id)arg2 ;
+(id)eventDataSourceForEvent:(id)arg1 viewElement:(id)arg2 ;
+(BOOL)_handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 eventDataSource:(id)arg5 documentOptions:(id)arg6 extraInfo:(id*)arg7 ;
+(void)_performForType:(long long)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 eventDataSource:(id)arg5 documentOptions:(id)arg6 ;
+(BOOL)_handleDocumentDataSource:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 viewElement:(id)arg4 documentOptions:(id)arg5 completion:(/*^block*/id)arg6 ;
+(void)_handleAccountSettingsPresentationWithViewController:(id)arg1 shouldEmbedInNavController:(BOOL)arg2 ;
+(void)_amsBagURLForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(id)_viewControllerWithIdentifier:(id)arg1 ;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(id*)arg4 ;
+(void)dismissOrPopViewControllerWithId:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)dismissOrPopLastViewControllerWithCompletion:(/*^block*/id)arg1 ;
+(BOOL)handleEvent:(id)arg1 targetResponder:(id)arg2 appContext:(id)arg3 routerDataSource:(id)arg4 supplementaryData:(id)arg5 extraInfo:(id*)arg6 ;
@end

