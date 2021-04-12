/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIUpsellOfferViewLayout, VUILabel, _TVImageView, IKImageElement;

@interface VUIUpsellOfferView : UIView {

	IKViewElement* _viewElement;
	VUIUpsellOfferViewLayout* _layout;
	VUILabel* _titleLabel;
	VUILabel* _descriptionLabel;
	_TVImageView* _imageView;
	IKImageElement* _imageElement;

}

@property (nonatomic,retain) IKImageElement * imageElement;                  //@synthesize imageElement=_imageElement - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                    //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIUpsellOfferViewLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * descriptionLabel;                    //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * imageView;                       //@synthesize imageView=_imageView - In the implementation block
+(id)upsellViewFromElement:(id)arg1 existingView:(id)arg2 ;
-(VUIUpsellOfferViewLayout *)layout;
-(void)setLayout:(VUIUpsellOfferViewLayout *)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVImageView *)imageView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setDescriptionLabel:(VUILabel *)arg1 ;
-(VUILabel *)descriptionLabel;
-(void)setImageView:(_TVImageView *)arg1 ;
-(IKViewElement *)viewElement;
-(IKImageElement *)imageElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)setImageElement:(IKImageElement *)arg1 ;
-(CGSize)_iOS_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
@end

