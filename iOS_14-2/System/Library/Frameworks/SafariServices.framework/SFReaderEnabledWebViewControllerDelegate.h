/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
@optional
-(void)webViewControllerReaderDidBecomeReady:(id)arg1;
-(void)webViewController:(id)arg1 didExtractTextSamplesForTranslation:(id)arg2;

@required
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueTo:(long long)arg2;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
-(void)createReaderWebViewForWebViewController:(id)arg1;
-(void)webViewController:(id)arg1 didFindAppBannerWithContent:(id)arg2;

@end

