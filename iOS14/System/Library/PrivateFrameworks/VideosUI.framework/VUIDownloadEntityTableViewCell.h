/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>
#import <libobjc.A.dylib/VUIDownloadEntityDelegate.h>

@protocol VUIDownloadEntityTableViewCellDelegate;
@class VUIDownloadButton, VUISeparatorView, VUILabel, _TVImageView, VUIImageView, VUILibraryEpisodeFrameView, VUIDownloadEntity, NSString;

@interface VUIDownloadEntityTableViewCell : UITableViewCell <VUIRentalExpirationLabelDelegate, VUIDownloadEntityDelegate> {

	id<VUIDownloadEntityTableViewCellDelegate> _delegate;
	VUIDownloadButton* _downloadButton;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;
	VUILabel* _titleLabel;
	_TVImageView* _posterImageView;
	VUILabel* _metaDataHeaderFirstLabel;
	VUILabel* _metaDataHeaderSecondLabel;
	VUILabel* _dotSeparatorLabel;
	VUIImageView* _rightImageView;
	VUILibraryEpisodeFrameView* _episodeImageView;
	VUIDownloadEntity* _downloadEntity;
	unsigned long long _previousDownloadState;

}

@property (nonatomic,retain) VUILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * posterImageView;                                          //@synthesize posterImageView=_posterImageView - In the implementation block
@property (nonatomic,retain) VUILabel * metaDataHeaderFirstLabel;                                     //@synthesize metaDataHeaderFirstLabel=_metaDataHeaderFirstLabel - In the implementation block
@property (nonatomic,retain) VUILabel * metaDataHeaderSecondLabel;                                    //@synthesize metaDataHeaderSecondLabel=_metaDataHeaderSecondLabel - In the implementation block
@property (nonatomic,retain) VUILabel * dotSeparatorLabel;                                            //@synthesize dotSeparatorLabel=_dotSeparatorLabel - In the implementation block
@property (nonatomic,retain) VUIImageView * rightImageView;                                           //@synthesize rightImageView=_rightImageView - In the implementation block
@property (nonatomic,retain) VUILibraryEpisodeFrameView * episodeImageView;                           //@synthesize episodeImageView=_episodeImageView - In the implementation block
@property (nonatomic,retain) VUIDownloadEntity * downloadEntity;                                      //@synthesize downloadEntity=_downloadEntity - In the implementation block
@property (assign,nonatomic) unsigned long long previousDownloadState;                                //@synthesize previousDownloadState=_previousDownloadState - In the implementation block
@property (assign,nonatomic,__weak) id<VUIDownloadEntityTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VUIDownloadButton * downloadButton;                                      //@synthesize downloadButton=_downloadButton - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                                     //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;                                  //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureVUIDownloadEntityTableViewCell:(id)arg1 withDownloadEntity:(id)arg2 forMetrics:(BOOL)arg3 ;
+(id)_generateMetaDataHeaderFirstLabelForDownloadEntity:(id)arg1 ;
+(id)_entityPlaceholderImageForDownloadEntity:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(VUILabel *)titleLabel;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<VUIDownloadEntityTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setDelegate:(id<VUIDownloadEntityTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(VUIDownloadButton *)downloadButton;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)_addDownloadButtonIfRequired:(id)arg1 ;
-(void)setDownloadButton:(VUIDownloadButton *)arg1 ;
-(VUILabel *)dotSeparatorLabel;
-(void)setDotSeparatorLabel:(VUILabel *)arg1 ;
-(void)setDownloadEntity:(VUIDownloadEntity *)arg1 ;
-(double)_imageHeightForCurrentSizeClass;
-(_TVImageView *)posterImageView;
-(id)_episodePlaceholderImage;
-(void)setPosterImageView:(_TVImageView *)arg1 ;
-(void)_addMetaDataLabelsIfRequired:(id)arg1 ;
-(void)setRightImageView:(VUIImageView *)arg1 ;
-(VUILibraryEpisodeFrameView *)episodeImageView;
-(void)setEpisodeImageView:(VUILibraryEpisodeFrameView *)arg1 ;
-(void)setMetaDataHeaderFirstLabel:(VUILabel *)arg1 ;
-(void)setMetaDataHeaderSecondLabel:(VUILabel *)arg1 ;
-(void)_removeDownloadButtonIfRequired;
-(VUIDownloadEntity *)downloadEntity;
-(VUIImageView *)rightImageView;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)_configureViewElementsForAX;
-(CGSize)_layoutForCategoryAccessibility:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_layoutForCompact:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(VUILabel *)metaDataHeaderFirstLabel;
-(VUILabel *)metaDataHeaderSecondLabel;
-(double)_verticalPaddingForCurrentSizeClass;
-(unsigned long long)previousDownloadState;
-(void)setPreviousDownloadState:(unsigned long long)arg1 ;
-(void)downloadEntity:(id)arg1 numberOfItemsDidChange:(unsigned long long)arg2 ;
-(void)downloadEntity:(id)arg1 numberOfItemsDownloadingDidChange:(id)arg2 ;
@end

