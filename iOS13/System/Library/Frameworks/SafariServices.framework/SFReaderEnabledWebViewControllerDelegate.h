/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFReaderEnabledWebViewControllerDelegate <SFWebViewControllerDelegate>
@optional
-(void)webViewControllerReaderDidBecomeReady:(id)arg1;

@required
-(void)webViewControllerDidDetermineReaderAvailability:(id)arg1 dueTo:(long long)arg2;
-(void)webViewController:(id)arg1 didClickLinkInReaderWithRequest:(id)arg2;
-(void)createReaderWebViewForWebViewController:(id)arg1;

@end

