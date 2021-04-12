/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@protocol CRKCardPresentationDelegate <NSObject>
@property (nonatomic,readonly) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
@optional
-(long long)cardPresentation:(id)arg1 compareCardViewControllerProviderOne:(id)arg2 providerTwo:(id)arg3;
-(long long)cardPresentation:(id)arg1 compareCardSectionViewProviderOne:(id)arg2 providerTwo:(id)arg3;
-(long long)semanticContentAttributeForCardPresentation:(id)arg1;
-(void)cardPresentation:(id)arg1 willTransitionFromCardViewController:(id)arg2 toCardViewController:(id)arg3 withAnimationCoordinator:(id)arg4;
-(double)boundingWidthForPresentation:(id)arg1;
-(id<CRKCardViewControllerDelegate>)cardViewControllerDelegate;

@end

