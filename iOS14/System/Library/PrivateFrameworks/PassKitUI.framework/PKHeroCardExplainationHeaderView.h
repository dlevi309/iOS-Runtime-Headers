/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIImageView, UIImage;

@interface PKHeroCardExplainationHeaderView : UIView {

	UIView* _cardImageShadowView;
	BOOL _usesCompactLayout;
	double _cardHeight;
	double _cardTopPadding;
	double _cardBottomPadding;
	double _cardBackingHeight;
	BOOL _useCompactLayout;
	UIImageView* _cardImageView;

}

@property (nonatomic,retain) UIImage * cardImage; 
@property (nonatomic,readonly) UIImageView * cardImageView;              //@synthesize cardImageView=_cardImageView - In the implementation block
@property (assign,nonatomic) BOOL useCompactLayout;                      //@synthesize useCompactLayout=_useCompactLayout - In the implementation block
+(CGSize)recommendedCardImageSize;
-(id)initWithImage:(id)arg1 ;
-(void)setCardImage:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateCardValuesForCompactLayout:(BOOL)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(UIImageView *)cardImageView;
-(BOOL)useCompactLayout;
-(UIImage *)cardImage;
@end

