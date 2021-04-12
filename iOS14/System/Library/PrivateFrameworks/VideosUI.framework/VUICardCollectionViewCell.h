/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUICardView, VUICardViewLayoutFactory, IKViewElement, IKImageElement;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell {

	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;
	IKViewElement* _viewElement;
	IKImageElement* _mainImageViewElement;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) IKImageElement * mainImageViewElement;                 //@synthesize mainImageViewElement=_mainImageViewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,readonly) double mainImageCornerRadius; 
+(long long)_cardLayoutTypeForElement:(id)arg1 ;
+(id)_imageLayoutForImageElement:(id)arg1 cardLayout:(id)arg2 cardWidth:(double)arg3 ;
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(VUICardView *)cardView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCardView:(VUICardView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(IKImageElement *)mainImageViewElement;
-(void)setMainImageViewElement:(IKImageElement *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
-(double)mainImageCornerRadius;
@end

