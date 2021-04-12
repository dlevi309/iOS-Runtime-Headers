/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUICardView, VUICardViewLayoutFactory;

@interface VUICardCollectionViewCell : VUIFocusableCollectionViewCell {

	IKViewElement* _viewElement;
	VUICardView* _cardView;
	VUICardViewLayoutFactory* _layoutFactory;

}

@property (nonatomic,retain) IKViewElement * viewElement;                           //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUICardView * cardView;                                //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,retain) VUICardViewLayoutFactory * layoutFactory;              //@synthesize layoutFactory=_layoutFactory - In the implementation block
@property (nonatomic,readonly) double mainImageCornerRadius; 
+(long long)_cardLayoutTypeForElement:(id)arg1 ;
+(id)cardCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUICardView *)cardView;
-(void)setCardView:(VUICardView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUICardViewLayoutFactory *)layoutFactory;
-(void)setLayoutFactory:(VUICardViewLayoutFactory *)arg1 ;
-(void)setCardView:(id)arg1 force:(BOOL)arg2 ;
-(double)mainImageCornerRadius;
@end

