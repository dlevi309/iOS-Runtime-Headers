/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class IKViewElement, VUIButton;

@interface VUICollectionFooterView : UICollectionReusableView {

	IKViewElement* _viewElement;
	IKViewElement* _buttonViewElement;
	VUIButton* _buttonView;
	UIEdgeInsets _padding;

}

@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKViewElement * buttonViewElement;              //@synthesize buttonViewElement=_buttonViewElement - In the implementation block
@property (nonatomic,retain) VUIButton * buttonView;                         //@synthesize buttonView=_buttonView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                           //@synthesize padding=_padding - In the implementation block
+(id)configureCollectionFooterViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)padding;
-(void)setButtonView:(VUIButton *)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(VUIButton *)buttonView;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setButtonViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)buttonViewElement;
@end

