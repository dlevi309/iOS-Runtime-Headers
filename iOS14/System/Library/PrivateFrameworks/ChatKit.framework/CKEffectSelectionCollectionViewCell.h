/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class CAShapeLayer, UIView, UIImageView, UILabel, UIVisualEffectView, UIVibrancyEffect;

@interface CKEffectSelectionCollectionViewCell : UICollectionViewCell {

	CAShapeLayer* _selectionLayer;
	UIView* _shadowView;
	UIImageView* _imageView;
	UILabel* _label;
	UIVisualEffectView* _titleContainerView;
	UIVibrancyEffect* _titleVibrancyEffect;

}

@property (nonatomic,retain) CAShapeLayer * selectionLayer;                        //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,retain) UIView * shadowView;                                  //@synthesize shadowView=_shadowView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * titleContainerView;              //@synthesize titleContainerView=_titleContainerView - In the implementation block
@property (nonatomic,retain) UIVibrancyEffect * titleVibrancyEffect;               //@synthesize titleVibrancyEffect=_titleVibrancyEffect - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setTitleVibrancyEffect:(UIVibrancyEffect *)arg1 ;
-(void)setTitleContainerView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)titleContainerView;
-(UIVibrancyEffect *)titleVibrancyEffect;
-(void)setTitle:(id)arg1 ;
-(CAShapeLayer *)selectionLayer;
-(void)setSelectionLayer:(CAShapeLayer *)arg1 ;
-(UIView *)shadowView;
-(void)setSelected:(BOOL)arg1 ;
-(void)configureForEffectIsDark:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setShadowView:(UIView *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(UILabel *)label;
@end

