/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFBrowserRemoteViewControllerDelegate <NSObject>
@optional
-(void)remoteViewController:(id)arg1 didDecideShouldShowLinkPreviews:(BOOL)arg2;
-(void)remoteViewControllerWillOpenCurrentPageInBrowser:(id)arg1;
-(void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;
-(void)remoteViewController:(id)arg1 didDecideCookieSharingForURL:(id)arg2 shouldCancel:(BOOL)arg3;

@required
-(void)remoteViewControllerDidLoadWebView:(id)arg1;
-(void)remoteViewController:(id)arg1 setSwipeGestureEnabled:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 didFinishInitialLoad:(BOOL)arg2;
-(void)remoteViewController:(id)arg1 fetchActivityViewControllerInfoForURL:(id)arg2 title:(id)arg3;
-(void)remoteViewController:(id)arg1 executeCustomActivityProxyID:(id)arg2;
-(void)remoteViewController:(id)arg1 initialLoadDidRedirectToURL:(id)arg2;
-(void)remoteViewControllerWillDismiss:(id)arg1;
-(void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
-(void)remoteViewController:(id)arg1 hostApplicationOpenURL:(id)arg2;

@end

