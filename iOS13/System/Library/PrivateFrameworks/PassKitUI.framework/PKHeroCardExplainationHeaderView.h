/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIImage *)cardImage;
-(void)setCardImage:(UIImage *)arg1 ;
-(void)updateCardValuesForCompactLayout:(BOOL)arg1 ;
-(void)setUseCompactLayout:(BOOL)arg1 ;
-(UIImageView *)cardImageView;
-(BOOL)useCompactLayout;
@end

