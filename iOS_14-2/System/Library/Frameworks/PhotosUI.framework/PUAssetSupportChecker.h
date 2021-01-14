/*
* Generated on Thursday, January 14, 2021 at 2:22:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUAssetSupportChecker : NSObject
+(void)_alertTitleAndMessageForAsset:(id)arg1 type:(long long)arg2 title:(id*)arg3 message:(id*)arg4 ;
+(void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 knowledgeBaseURL:(id)arg3 alertControllerPresenter:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(void)checkIsSupportedAsset:(id)arg1 type:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
+(void)presentAlertWithTitle:(id)arg1 message:(id)arg2 uti:(id)arg3 codecName:(id)arg4 alertControllerPresenter:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(void)presentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)checkIsSupportedAndPresentAlertForAsset:(id)arg1 type:(long long)arg2 alertControllerPresenter:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

