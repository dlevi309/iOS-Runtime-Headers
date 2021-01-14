/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class PXFeedSectionInfo, UIImage, UIImageView, UILabel;

@interface PXSharedAlbumHeaderView : UIView {

	BOOL _useInPopover;
	BOOL _isNew;
	BOOL _isObservingLastExitedForYou;
	unsigned long long _textColorStyle;
	unsigned long long _tappableArea;
	unsigned long long _layoutStyle;
	PXFeedSectionInfo* _sectionInfo;
	UIImage* _headerImage;
	unsigned long long _headerImageTag;
	UIImageView* _headerImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _chevronView;

}

@property (assign,nonatomic) unsigned long long headerImageTag;              //@synthesize headerImageTag=_headerImageTag - In the implementation block
@property (nonatomic,retain) UIImageView * headerImageView;                  //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                        //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronView;                      //@synthesize chevronView=_chevronView - In the implementation block
@property (assign,nonatomic) BOOL isNew;                                     //@synthesize isNew=_isNew - In the implementation block
@property (assign,nonatomic) BOOL isObservingLastExitedForYou;               //@synthesize isObservingLastExitedForYou=_isObservingLastExitedForYou - In the implementation block
@property (assign,nonatomic) BOOL useInPopover;                              //@synthesize useInPopover=_useInPopover - In the implementation block
@property (assign,nonatomic) unsigned long long textColorStyle;              //@synthesize textColorStyle=_textColorStyle - In the implementation block
@property (assign,nonatomic) unsigned long long tappableArea;                //@synthesize tappableArea=_tappableArea - In the implementation block
@property (assign,nonatomic) unsigned long long layoutStyle;                 //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (nonatomic,retain) PXFeedSectionInfo * sectionInfo;                //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,retain) UIImage * headerImage;                          //@synthesize headerImage=_headerImage - In the implementation block
+(void)preloadResources;
-(UILabel *)titleLabel;
-(BOOL)isNew;
-(void)_updateTitle;
-(void)_updateBackgroundColor;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setLayoutStyle:(unsigned long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)init;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(unsigned long long)layoutStyle;
-(void)setIsNew:(BOOL)arg1 ;
-(UIImageView *)chevronView;
-(void)setChevronView:(UIImageView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)layoutSubviews;
-(PXFeedSectionInfo *)sectionInfo;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSectionInfo:(PXFeedSectionInfo *)arg1 ;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)_updateHeaderImage;
-(void)_updateAvatar:(unsigned long long)arg1 ;
-(void)_updateIsNew;
-(BOOL)_showChevron;
-(unsigned long long)textColorStyle;
-(UIImage *)headerImage;
-(unsigned long long)headerImageTag;
-(void)setHeaderImageTag:(unsigned long long)arg1 ;
-(UIImageView *)headerImageView;
-(void)setHeaderImageView:(UIImageView *)arg1 ;
-(BOOL)isObservingLastExitedForYou;
-(void)setIsObservingLastExitedForYou:(BOOL)arg1 ;
-(void)_updateUI;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(void)setUseInPopover:(BOOL)arg1 ;
-(BOOL)useInPopover;
-(unsigned long long)tappableArea;
-(void)setTappableArea:(unsigned long long)arg1 ;
-(void)setTextColorStyle:(unsigned long long)arg1 ;
-(void)_updateSubtitle;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_showSubtitle;
-(void)_lastExitedForYouDateDidChange:(id)arg1 ;
@end

