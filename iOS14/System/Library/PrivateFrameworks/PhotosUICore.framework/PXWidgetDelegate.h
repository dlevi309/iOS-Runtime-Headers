/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXWidgetDelegate <NSObject>
@required
-(id)widgetViewHostingGestureRecognizers:(id)arg1;
-(id)widgetScrollViewControllerHostingWidget:(id)arg1;
-(id)widgetViewControllerHostingWidget:(id)arg1;
-(id)widgetExtendedTraitCollection:(id)arg1;
-(void)widgetRequestFocus:(id)arg1;
-(void)widget:(id)arg1 animateChanges:(/*^block*/id)arg2 withAnimationOptions:(id)arg3;
-(void)widgetLocalizedTitleDidChange:(id)arg1;
-(void)widgetLocalizedSubtitleDidChange:(id)arg1;
-(void)widgetLocalizedCaptionDidChange:(id)arg1;
-(void)widgetLocalizedDisclosureTitleDidChange:(id)arg1;
-(void)widgetPreferredContentHeightForWidthDidChange:(id)arg1;
-(void)widgetHasLoadedContentDataDidChange:(id)arg1;
-(void)widgetInvalidateContentViewAnchoringType:(id)arg1;
-(void)widgetInvalidateContentLayoutStyle:(id)arg1;
-(BOOL)widget:(id)arg1 transitionToViewController:(id)arg2 withTransitionType:(long long)arg3;
-(long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg1;
-(BOOL)widget:(id)arg1 requestViewControllerDismissalAnimated:(BOOL)arg2;

@end

