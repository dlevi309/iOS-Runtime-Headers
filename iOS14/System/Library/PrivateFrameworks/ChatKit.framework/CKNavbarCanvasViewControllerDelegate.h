/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKNavbarCanvasViewControllerDelegate <NSObject>
@optional
-(long long)unreadCountForCurrentFilterModeForNavbarCanvasViewController:(id)arg1;

@required
-(BOOL)shouldShowAvatarViewInNavBarCanvas;
-(void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2;
-(void)navbarCanvasViewController:(id)arg1 facetimeAudioButtonTapped:(id)arg2;
-(void)navbarCanvasViewController:(id)arg1 facetimeVideoButtonTapped:(id)arg2;
-(void)navbarCanvasViewController:(id)arg1 infoButtonTapped:(id)arg2;
-(void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1;
-(NSDirectionalEdgeInsets*)systemMinimumLayoutMarginsForViewController:(id)arg1;

@end

