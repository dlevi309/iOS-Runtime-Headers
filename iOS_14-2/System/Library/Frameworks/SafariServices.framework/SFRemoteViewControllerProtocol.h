/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFRemoteViewControllerProtocol <NSObject>
@required
-(void)didLoadWebView;
-(void)didFinishInitialLoad:(BOOL)arg1;
-(void)fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2;
-(void)executeCustomActivityProxyID:(id)arg1;
-(void)setRemoteSwipeGestureEnabled:(BOOL)arg1;
-(void)willOpenURLInHostApplication:(id)arg1;
-(void)initialLoadDidRedirectToURL:(id)arg1;
-(void)didDecideCookieSharingForURL:(id)arg1 shouldCancel:(BOOL)arg2;
-(void)didChangeFullScreen:(BOOL)arg1;
-(void)didResolveRedirectionWithURL:(id)arg1 appLink:(id)arg2;
-(void)didDecideShouldShowLinkPreviews:(BOOL)arg1;
-(void)willOpenCurrentPageInBrowser;
-(void)willDismissServiceViewController;

@end

