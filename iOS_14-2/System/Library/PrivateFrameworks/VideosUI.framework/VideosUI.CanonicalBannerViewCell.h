/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/VUIRentalExpirationLabelDelegate.h>

@interface VideosUI.CanonicalBannerViewCell : UICollectionViewCell <VUIRentalExpirationLabelDelegate> {

	 bannerLayout;
	 titleImageView;
	 contentTitleView;
	 contentSubtitleView;
	 episodeInfoTextView;
	 promoTextView;
	 coverArtImageView;
	 buttonViews;
	 availabilityTextView;
	 availabilityImageView;
	 disclaimerTextView;
	 descriptionTextView;
	 rolesSummaryView;
	 tagsView;
	 infoTagsView;
	 uberBackgroundView;
	 backgroundImageViewModel;
	 previousViewSize;
	 gradientLayer;
	 gradientLayerView;
	 transitionBackgroundView;
	 bannerButtonHeight;
	 bannerButtonSpacing;
	 descComputationLabel;
	 tagsComputationLabel;
	 contentOffset;
	 separatorView;

}
-(void)rentalExpirationLabelNeedsRelayout:(id)arg1 ;
-(void)onSystemTraitCollectionDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

