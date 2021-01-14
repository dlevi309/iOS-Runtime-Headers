/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel;

@interface PUSearchResultsResultTableViewCell : UITableViewCell {

	unsigned long long _imageCropStyle;
	UIImageView* _resultImageView;
	UILabel* _resultTitleLabel;
	UILabel* _resultSubtitleLabel;
	UILabel* _resultAuxSubtitleLabel;

}

@property (nonatomic,retain) UIImageView * resultImageView;                  //@synthesize resultImageView=_resultImageView - In the implementation block
@property (nonatomic,retain) UILabel * resultTitleLabel;                     //@synthesize resultTitleLabel=_resultTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * resultSubtitleLabel;                  //@synthesize resultSubtitleLabel=_resultSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * resultAuxSubtitleLabel;               //@synthesize resultAuxSubtitleLabel=_resultAuxSubtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropStyle;              //@synthesize imageCropStyle=_imageCropStyle - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)_updateCornerRadius;
-(id)_setupResultTitleLabel;
-(id)_setupResultAuxSubtitleLabel;
-(void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3 ;
-(void)prepareForReuse;
-(UILabel *)resultTitleLabel;
-(void)setResultTitleLabel:(UILabel *)arg1 ;
-(UILabel *)resultAuxSubtitleLabel;
-(void)setResultAuxSubtitleLabel:(UILabel *)arg1 ;
-(void)_setupSubviews;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(id)_setupResultSubtitleLabel;
-(id)_setupResultImageView;
-(unsigned long long)imageCropStyle;
-(void)setImageCropStyle:(unsigned long long)arg1 ;
-(UIImageView *)resultImageView;
-(void)setResultImageView:(UIImageView *)arg1 ;
-(UILabel *)resultSubtitleLabel;
-(void)setResultSubtitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

