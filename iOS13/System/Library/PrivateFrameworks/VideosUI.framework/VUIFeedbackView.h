/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUIFeedbackLayout, UIView, VUILabel, _TVImageView, TVRatingBadgeView;

@interface VUIFeedbackView : UIView {

	VUIFeedbackLayout* _layout;
	UIView* _headerView;
	VUILabel* _headerSubtitleLabel;
	_TVImageView* _headerBadgeView;
	VUILabel* _sourceLabel;
	_TVImageView* _sourceBadgeView;
	TVRatingBadgeView* _ratingView;
	UIView* _descriptionView;
	VUILabel* _prototypeSubtitleLabel;
	VUILabel* _prototypeHeaderLabel;
	CGSize _headerBadgeSize;
	CGSize _sourceBadgeSize;

}

@property (nonatomic,retain) VUILabel * prototypeSubtitleLabel;              //@synthesize prototypeSubtitleLabel=_prototypeSubtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * prototypeHeaderLabel;                //@synthesize prototypeHeaderLabel=_prototypeHeaderLabel - In the implementation block
@property (nonatomic,retain) VUIFeedbackLayout * layout;                     //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) UIView * headerView;                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) VUILabel * headerSubtitleLabel;                 //@synthesize headerSubtitleLabel=_headerSubtitleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * headerBadgeView;                 //@synthesize headerBadgeView=_headerBadgeView - In the implementation block
@property (nonatomic,retain) VUILabel * sourceLabel;                         //@synthesize sourceLabel=_sourceLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * sourceBadgeView;                 //@synthesize sourceBadgeView=_sourceBadgeView - In the implementation block
@property (nonatomic,retain) TVRatingBadgeView * ratingView;                 //@synthesize ratingView=_ratingView - In the implementation block
@property (nonatomic,retain) UIView * descriptionView;                       //@synthesize descriptionView=_descriptionView - In the implementation block
@property (assign,nonatomic) CGSize headerBadgeSize;                         //@synthesize headerBadgeSize=_headerBadgeSize - In the implementation block
@property (assign,nonatomic) CGSize sourceBadgeSize;                         //@synthesize sourceBadgeSize=_sourceBadgeSize - In the implementation block
+(id)headerBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerImageViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerTitleViewWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)headerSubtitleLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)sourceBadgeViewWithImageElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)sourceLabelWithString:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(id)descriptionViewWithElement:(id)arg1 layout:(id)arg2 existingView:(id)arg3 ;
+(CGSize)_scaledBadgeSizeWithImageLayout:(id)arg1 traitCollection:(id)arg2 ;
-(VUIFeedbackLayout *)layout;
-(void)setLayout:(VUIFeedbackLayout *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(VUILabel *)sourceLabel;
-(void)setDescriptionView:(UIView *)arg1 ;
-(UIView *)descriptionView;
-(TVRatingBadgeView *)ratingView;
-(void)setRatingView:(TVRatingBadgeView *)arg1 ;
-(void)prepareForCellReuse;
-(_TVImageView *)headerBadgeView;
-(VUILabel *)headerSubtitleLabel;
-(_TVImageView *)sourceBadgeView;
-(void)setHeaderBadgeView:(_TVImageView *)arg1 ;
-(void)setHeaderBadgeSize:(CGSize)arg1 ;
-(void)setHeaderSubtitleLabel:(VUILabel *)arg1 ;
-(void)setSourceLabel:(VUILabel *)arg1 ;
-(void)setSourceBadgeView:(_TVImageView *)arg1 ;
-(void)setSourceBadgeSize:(CGSize)arg1 ;
-(CGSize)headerBadgeSize;
-(CGSize)sourceBadgeSize;
-(VUILabel *)prototypeSubtitleLabel;
-(void)setPrototypeSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)prototypeHeaderLabel;
-(void)setPrototypeHeaderLabel:(VUILabel *)arg1 ;
@end

