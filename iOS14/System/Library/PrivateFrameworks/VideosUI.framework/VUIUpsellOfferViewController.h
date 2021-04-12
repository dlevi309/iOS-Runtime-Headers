/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, VUIUpsellOfferView, UIScrollView, VUIUpsellOfferTransactionView;

@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController {

	IKViewElement* _viewElement;
	VUIUpsellOfferView* _upsellView;
	UIScrollView* _scrollView;
	VUIUpsellOfferTransactionView* _transactionView;

}

@property (nonatomic,retain) IKViewElement * viewElement;                                  //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferView * upsellView;                              //@synthesize upsellView=_upsellView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferTransactionView * transactionView;              //@synthesize transactionView=_transactionView - In the implementation block
-(VUIUpsellOfferTransactionView *)transactionView;
-(void)viewDidLoad;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(long long)_overrideLargeTitleDisplayMode;
-(VUIUpsellOfferView *)upsellView;
-(void)setTransactionView:(VUIUpsellOfferTransactionView *)arg1 ;
-(void)setUpsellView:(VUIUpsellOfferView *)arg1 ;
-(void)_iOS_updateViews;
@end

