/*
* Generated on Thursday, January 14, 2021 at 2:21:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol SGSuggestionPresenterDelegate <NSObject>
@optional
-(void)suggestionPresenter:(id)arg1 willPresentViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 didPresentViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 willDismissViewController:(id)arg2;
-(void)suggestionPresenter:(id)arg1 didDismissViewController:(id)arg2;
-(/*^block*/id)suggestionCategoryComparatorForManager:(id)arg1;

@required
-(void)suggestionPresenterWantsToShowBanner:(id)arg1;
-(void)suggestionPresenterWantsToHideBanner:(id)arg1;
-(id)viewControllerForPresentingFromBannerByPresenter:(id)arg1;

@end

