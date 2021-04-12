/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@protocol SFServiceViewControllerProtocol <NSObject>
@required
-(void)setConfiguration:(id)arg1;
-(void)setDisplayMode:(long long)arg1;
-(void)prepareForDisplayWithCompletionHandler:(/*^block*/id)arg1;
-(void)loadURL:(id)arg1;
-(void)startResolveRedirectionForURL:(id)arg1;
-(void)setDismissButtonStyle:(long long)arg1;
-(void)setPreferredControlTintColor:(id)arg1;
-(void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
-(void)setPreferredBarTintColor:(id)arg1;
-(void)setHostAppModalPresentationStyle:(long long)arg1;
-(void)repostNotificationInViewService:(id)arg1;
-(void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
-(void)setIsRunningTransitionAnimation:(BOOL)arg1;
-(void)didDetectRemoteViewControllerViewIsHidden;
-(void)didDetectUserInteractionFromHostApp;
-(void)openCurrentURLInSafari;
-(void)updateScrollViewIndicatorVerticalInsets:(UIEdgeInsets)arg1 horizontalInsets:(UIEdgeInsets)arg2;
-(void)didRequestShowLinkPreviews:(BOOL)arg1;
-(void)beginDigitalHealthTracking;
-(void)stopDigitalHealthTracking;

@end

