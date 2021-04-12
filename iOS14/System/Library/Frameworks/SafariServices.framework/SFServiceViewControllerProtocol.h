/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFServiceViewControllerProtocol <NSObject>
@required
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1;
-(void)startResolveRedirectionForURL:(id)arg1;
-(void)setPreferredBarTintColor:(id)arg1;
-(void)setPreferredBarTintColor:(id)arg1 controlTintColor:(id)arg2;
-(void)setHostAppModalPresentationStyle:(long long)arg1;
-(void)repostNotificationInViewService:(id)arg1;
-(void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1;
-(void)didRequestShowLinkPreviews:(BOOL)arg1;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)openCurrentURLInSafariFromPreviewAction;
-(void)updateScrollViewIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2;
-(void)beginDigitalHealthTracking;
-(void)stopDigitalHealthTracking;
-(void)setDismissButtonStyle:(long long)arg1;
-(void)setPreferredControlTintColor:(id)arg1;
-(void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
-(void)setDisplayMode:(long long)arg1;
-(void)loadURL:(id)arg1;
-(void)setConfiguration:(id)arg1;

@end

