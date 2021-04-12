/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class VUISportsProductBannerLayout, VUILabel, NSArray, _TVImageView, VUISeparatorView;

@interface VUISportsProductBannerView : UIView {

	VUISportsProductBannerLayout* _layout;
	VUILabel* _titleLabel;
	NSArray* _rowLabels;
	NSArray* _scoreLabels;
	NSArray* _descriptionLabels;
	VUILabel* _footerLabel;
	NSArray* _buttonViews;
	VUILabel* _availabilityTextView;
	_TVImageView* _availabilityImageView;
	VUISeparatorView* _separatorView;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                   //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) VUISportsProductBannerLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSArray * rowLabels;                                //@synthesize rowLabels=_rowLabels - In the implementation block
@property (nonatomic,retain) NSArray * scoreLabels;                              //@synthesize scoreLabels=_scoreLabels - In the implementation block
@property (nonatomic,retain) NSArray * descriptionLabels;                        //@synthesize descriptionLabels=_descriptionLabels - In the implementation block
@property (nonatomic,retain) VUILabel * footerLabel;                             //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSArray * buttonViews;                              //@synthesize buttonViews=_buttonViews - In the implementation block
@property (nonatomic,retain) VUILabel * availabilityTextView;                    //@synthesize availabilityTextView=_availabilityTextView - In the implementation block
@property (nonatomic,retain) _TVImageView * availabilityImageView;               //@synthesize availabilityImageView=_availabilityImageView - In the implementation block
-(VUISportsProductBannerLayout *)layout;
-(void)setLayout:(VUISportsProductBannerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(NSArray *)buttonViews;
-(void)setButtonViews:(NSArray *)arg1 ;
-(void)setFooterLabel:(VUILabel *)arg1 ;
-(VUILabel *)footerLabel;
-(CGSize)_iOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(double)_totalMaxScoreWidthWithAvailableWidth:(double)arg1 ;
-(double)_maxScoreWidthForColumn:(unsigned long long)arg1 availableWidth:(double)arg2 ;
-(void)_layoutLabels:(id)arg1 scoreLabels:(id)arg2 withOrigin:(CGPoint)arg3 maxWidth:(double)arg4 ;
-(void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3 ;
-(void)_layoutScoresWithOrigin:(CGPoint)arg1 availableWidth:(double)arg2 padding:(double)arg3 ;
-(void)_layoutButtonsWithOrigin:(CGPoint)arg1 buttonHeight:(double)arg2 buttonWidth:(double)arg3 spacing:(double)arg4 ;
-(void)setRowLabels:(NSArray *)arg1 ;
-(void)setScoreLabels:(NSArray *)arg1 ;
-(void)setDescriptionLabels:(NSArray *)arg1 ;
-(void)setAvailabilityTextView:(VUILabel *)arg1 ;
-(void)setAvailabilityImageView:(_TVImageView *)arg1 ;
-(NSArray *)rowLabels;
-(NSArray *)scoreLabels;
-(NSArray *)descriptionLabels;
-(VUILabel *)availabilityTextView;
-(_TVImageView *)availabilityImageView;
@end

