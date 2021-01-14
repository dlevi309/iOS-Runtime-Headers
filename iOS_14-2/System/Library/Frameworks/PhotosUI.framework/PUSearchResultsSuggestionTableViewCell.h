/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface PUSearchResultsSuggestionTableViewCell : UITableViewCell {

	UILabel* _resultTitleLabel;
	UILabel* _resultAuxSubtitleLabel;

}

@property (nonatomic,retain) UILabel * resultTitleLabel;                    //@synthesize resultTitleLabel=_resultTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * resultAuxSubtitleLabel;              //@synthesize resultAuxSubtitleLabel=_resultAuxSubtitleLabel - In the implementation block
+(id)_symbolConfigurationForFont:(id)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id)_setupResultTitleLabel;
-(id)_setupResultAuxSubtitleLabel;
-(CGSize)imageViewSize;
-(void)setAttributedTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3 ;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 auxSubtitle:(id)arg3 ;
-(void)prepareForReuse;
-(void)setAttributedTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3 ;
-(void)setTitle:(id)arg1 resultCount:(unsigned long long)arg2 categoryImage:(id)arg3 ;
-(UILabel *)resultTitleLabel;
-(void)setResultTitleLabel:(UILabel *)arg1 ;
-(UILabel *)resultAuxSubtitleLabel;
-(void)setResultAuxSubtitleLabel:(UILabel *)arg1 ;
-(BOOL)shouldUseAccessibilityLayout;
-(void)_setupSubviews;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(BOOL)hasAccessory;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

