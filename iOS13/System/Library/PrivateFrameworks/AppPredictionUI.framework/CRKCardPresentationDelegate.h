/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
*/


@protocol CRKCardPresentationDelegate <NSObject>
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@optional
-(long long)cardPresentation:(id)arg1 compareCardViewControllerProviderOne:(id)arg2 providerTwo:(id)arg3;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;
-(double)boundingWidthForPresentation:(id)arg1;
-(long long)semanticContentAttributeForCardPresentation:(id)arg1;
-(long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
-(void)cardPresentation:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;

@end

