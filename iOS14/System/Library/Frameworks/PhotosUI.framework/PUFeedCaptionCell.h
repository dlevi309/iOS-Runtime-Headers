/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, UILabel, PXUIButton, UIImage;

@interface PUFeedCaptionCell : PUFeedCell {

	BOOL _hideCaption;
	PXFeedSectionInfo* _sectionInfo;
	unsigned long long _captionItemIndex;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	PXUIButton* _likeButton;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UIImage * likedImage; 
@property (nonatomic,readonly) UIImage * notLikedImage; 
@property (nonatomic,retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) PXUIButton * likeButton;                          //@synthesize likeButton=_likeButton - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) PXFeedSectionInfo * sectionInfo;                  //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (assign,nonatomic) unsigned long long captionItemIndex;              //@synthesize captionItemIndex=_captionItemIndex - In the implementation block
@property (assign,nonatomic) BOOL hideCaption;                                 //@synthesize hideCaption=_hideCaption - In the implementation block
@property (assign,nonatomic) BOOL isLiked; 
-(UILabel *)titleLabel;
-(void)_updateTitle;
-(BOOL)isLiked;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(PXFeedSectionInfo *)sectionInfo;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSectionInfo:(PXFeedSectionInfo *)arg1 ;
-(void)_updateUI;
-(void)setCaptionItemIndex:(unsigned long long)arg1 ;
-(void)setHideCaption:(BOOL)arg1 ;
-(UIImage *)likedImage;
-(UIImage *)notLikedImage;
-(void)_setLikeButtonLiked:(BOOL)arg1 ;
-(BOOL)_shouldHideLikeButton;
-(void)_updateLikeButton;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)_handleLikeButtonTap:(id)arg1 ;
-(unsigned long long)captionItemIndex;
-(BOOL)hideCaption;
-(PXUIButton *)likeButton;
-(void)setLikeButton:(PXUIButton *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateSubtitle;
-(void)dealloc;
@end

