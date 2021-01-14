/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class IKViewElement, VUIFeedbackView;

@interface VUIFeedbackViewCell : VUIFocusableCollectionViewCell {

	IKViewElement* _viewElement;
	VUIFeedbackView* _cardView;

}

@property (nonatomic,retain) IKViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIFeedbackView * cardView;               //@synthesize cardView=_cardView - In the implementation block
+(id)configureViewWithElement:(id)arg1 existingCell:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(VUIFeedbackView *)cardView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCardView:(VUIFeedbackView *)arg1 ;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(void)_setupElements:(id)arg1 inCardView:(id)arg2 ;
@end

