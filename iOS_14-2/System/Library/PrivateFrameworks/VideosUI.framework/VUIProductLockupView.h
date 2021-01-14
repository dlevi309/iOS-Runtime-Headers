/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@protocol VUILibraryProductLockupViewLayout, VUIProductLockupViewDelegate;
@class TVImageProxy, UIImage, VUIRoundButton, UIView, NSString, NSNumber, NSArray, VUISeparatorView, _TVImageView, VUILabel, TVFocusableTextView, VUIRentalExpirationLabel, VUIMediaTagsView;

@interface VUIProductLockupView : UIView <VUIRentalExpirationLabelDelegate> {

	BOOL _contentDescriptionExpanded;
	BOOL _didSetUpViews;
	id<VUILibraryProductLockupViewLayout> _layout;
	TVImageProxy* _coverArtImageProxy;
	UIImage* _coverArtPlaceholderImage;
	VUIRoundButton* _leftButton;
	UIView* _downloadView;
	NSString* _subtitle;
	NSString* _contentDescription;
	NSString* _genre;
	NSNumber* _duration;
	NSNumber* _releaseYear;
	NSString* _availabilityText;
	NSArray* _badgeResources;
	id<VUIProductLockupViewDelegate> _delegate;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;
	_TVImageView* _coverArtImageView;
	VUILabel* _subtitleLabel;
	TVFocusableTextView* _descriptionTextView;
	VUIRentalExpirationLabel* _expirationLabel;
	UIImage* _contentRatingImage;
	VUIMediaTagsView* _mediaInfoTagsView;
	VUIMediaTagsView* _mediaBadgeTagsView;

}

@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                           //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;                        //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) _TVImageView * coverArtImageView;                              //@synthesize coverArtImageView=_coverArtImageView - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) TVFocusableTextView * descriptionTextView;                     //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (assign,nonatomic) BOOL contentDescriptionExpanded;                               //@synthesize contentDescriptionExpanded=_contentDescriptionExpanded - In the implementation block
@property (assign,nonatomic) BOOL didSetUpViews;                                            //@synthesize didSetUpViews=_didSetUpViews - In the implementation block
@property (nonatomic,retain) VUIRentalExpirationLabel * expirationLabel;                    //@synthesize expirationLabel=_expirationLabel - In the implementation block
@property (nonatomic,retain) UIImage * contentRatingImage;                                  //@synthesize contentRatingImage=_contentRatingImage - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * mediaInfoTagsView;                          //@synthesize mediaInfoTagsView=_mediaInfoTagsView - In the implementation block
@property (nonatomic,retain) VUIMediaTagsView * mediaBadgeTagsView;                         //@synthesize mediaBadgeTagsView=_mediaBadgeTagsView - In the implementation block
@property (nonatomic,retain) id<VUILibraryProductLockupViewLayout> layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) TVImageProxy * coverArtImageProxy;                           //@synthesize coverArtImageProxy=_coverArtImageProxy - In the implementation block
@property (nonatomic,readonly) UIImage * coverArtPlaceholderImage;                          //@synthesize coverArtPlaceholderImage=_coverArtPlaceholderImage - In the implementation block
@property (nonatomic,retain) VUIRoundButton * leftButton;                                   //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIView * downloadView;                                         //@synthesize downloadView=_downloadView - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * contentDescription;                                   //@synthesize contentDescription=_contentDescription - In the implementation block
@property (nonatomic,copy) NSString * genre;                                                //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSNumber * duration;                                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * releaseYear;                                          //@synthesize releaseYear=_releaseYear - In the implementation block
@property (nonatomic,copy) NSString * availabilityText;                                     //@synthesize availabilityText=_availabilityText - In the implementation block
@property (nonatomic,copy) NSArray * badgeResources;                                        //@synthesize badgeResources=_badgeResources - In the implementation block
@property (assign,nonatomic,__weak) id<VUIProductLockupViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)productLockupViewWithMedia:(id)arg1 ;
-(VUIRoundButton *)leftButton;
-(NSString *)genre;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentDescription:(NSString *)arg1 ;
-(id<VUIProductLockupViewDelegate>)delegate;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(void)setDescriptionTextView:(TVFocusableTextView *)arg1 ;
-(TVFocusableTextView *)descriptionTextView;
-(NSNumber *)releaseYear;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setDelegate:(id<VUIProductLockupViewDelegate>)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setLeftButton:(VUIRoundButton *)arg1 ;
-(void)setLayout:(id<VUILibraryProductLockupViewLayout>)arg1 ;
-(NSNumber *)duration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)contentDescription;
-(id<VUILibraryProductLockupViewLayout>)layout;
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(CGSize)_layoutWithSize:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_layoutForCategoryAccessibility:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_layoutForCompact:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(void)setDownloadView:(UIView *)arg1 ;
-(BOOL)contentDescriptionExpanded;
-(void)setExpirationLabel:(VUIRentalExpirationLabel *)arg1 ;
-(VUIRentalExpirationLabel *)expirationLabel;
-(_TVImageView *)coverArtImageView;
-(void)setCoverArtImageView:(_TVImageView *)arg1 ;
-(void)updateWithMediaEntity:(id)arg1 ;
-(void)setMediaInfoTagsView:(VUIMediaTagsView *)arg1 ;
-(void)setMediaBadgeTagsView:(VUIMediaTagsView *)arg1 ;
-(id)_contentDescriptionAttributedString;
-(void)setContentDescriptionExpanded:(BOOL)arg1 ;
-(CGSize)_layoutForStacked:(CGSize)arg1 metricsOnly:(BOOL)arg2 ;
-(CGSize)_sizeOfDescriptionLabel:(double)arg1 ;
-(double)_descriptionTopMarginWithBaselineMargin:(double)arg1 otherFont:(id)arg2 ;
-(double)_descriptionBottomMarginWithBaselineMargin:(double)arg1 ;
-(void)setCoverArtImageProxy:(id)arg1 placeholderImage:(id)arg2 ;
-(TVImageProxy *)coverArtImageProxy;
-(UIImage *)coverArtPlaceholderImage;
-(UIView *)downloadView;
-(NSString *)availabilityText;
-(void)setAvailabilityText:(NSString *)arg1 ;
-(NSArray *)badgeResources;
-(void)setBadgeResources:(NSArray *)arg1 ;
-(BOOL)didSetUpViews;
-(void)setDidSetUpViews:(BOOL)arg1 ;
-(UIImage *)contentRatingImage;
-(void)setContentRatingImage:(UIImage *)arg1 ;
-(VUIMediaTagsView *)mediaInfoTagsView;
-(VUIMediaTagsView *)mediaBadgeTagsView;
@end

