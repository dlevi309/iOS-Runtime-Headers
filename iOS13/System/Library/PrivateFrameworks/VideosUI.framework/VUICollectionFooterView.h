/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)padding;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIButton *)buttonView;
-(void)setButtonView:(VUIButton *)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setButtonViewElement:(IKViewElement *)arg1 ;
-(IKViewElement *)buttonViewElement;
@end

