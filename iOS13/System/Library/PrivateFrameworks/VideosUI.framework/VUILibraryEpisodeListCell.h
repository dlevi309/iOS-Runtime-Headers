/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@protocol VUIMediaEntityAssetController;
@class NSString, VUILibraryEpisodeFrameView, VUISeparatorView, UIStackView, VUILabel, VUIDownloadButton, NSObject;

@interface VUILibraryEpisodeListCell : VUIListCollectionViewCell {

	NSString* _title;
	NSString* _releaseDate;
	NSString* _duration;
	VUILibraryEpisodeFrameView* _imageFrameView;
	VUISeparatorView* _separatorView;
	UIStackView* _episodeInfoStackView;
	VUILabel* _titleLabel;
	VUILabel* _releaseDateLabel;
	VUILabel* _durationLabel;
	VUIDownloadButton* _downloadButton;
	VUILabel* _dotSeparatorLabel;
	NSObject*<VUIMediaEntityAssetController> _assetController;

}

@property (nonatomic,retain) VUILibraryEpisodeFrameView * imageFrameView;                           //@synthesize imageFrameView=_imageFrameView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * separatorView;                                      //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIStackView * episodeInfoStackView;                                    //@synthesize episodeInfoStackView=_episodeInfoStackView - In the implementation block
@property (nonatomic,retain) VUILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * releaseDateLabel;                                           //@synthesize releaseDateLabel=_releaseDateLabel - In the implementation block
@property (nonatomic,retain) VUILabel * durationLabel;                                              //@synthesize durationLabel=_durationLabel - In the implementation block
@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                    //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                          //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) NSObject*<VUIMediaEntityAssetController> assetController;              //@synthesize assetController=_assetController - In the implementation block
@property (nonatomic,copy) NSString * title;                                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * releaseDate;                                                  //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) NSString * duration;                                                     //@synthesize duration=_duration - In the implementation block
+(void)configureVUILibraryEpisodeListCell:(id)arg1 withMedia:(id)arg2 andAssetController:(id)arg3 ;
+(id)_metadataLabelWithString:(id)arg1 existingLabel:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)duration;
-(void)setDuration:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(VUIDownloadButton *)downloadButton;
-(void)setDurationLabel:(VUILabel *)arg1 ;
-(VUILabel *)durationLabel;
-(NSObject*<VUIMediaEntityAssetController>)assetController;
-(void)setAssetController:(NSObject*<VUIMediaEntityAssetController>)arg1 ;
-(VUILibraryEpisodeFrameView *)imageFrameView;
-(void)setImageFrameView:(VUILibraryEpisodeFrameView *)arg1 ;
-(void)_addDownloadButtonIfRequired:(id)arg1 ;
-(void)_configureDotSeparator;
-(BOOL)_contentSizeCategoryIsAccessibility;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(double)_metadataHeightToBaselineNonAXContentSizeCategory;
-(double)_metadataScaledTopMarginForNonAXContentSizeCategory;
-(UIStackView *)episodeInfoStackView;
-(void)setEpisodeInfoStackView:(UIStackView *)arg1 ;
-(VUILabel *)releaseDateLabel;
-(void)setReleaseDateLabel:(VUILabel *)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
@end

