/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VideosExtrasViewElementViewController.h>

@class VideosExtrasConstrainedArtworkContainerView, UIView, UILabel, NSLayoutConstraint, MPUContentSizeLayoutConstraint, IKLockupElement, NSString;

@interface VideosExtrasLockupElementViewController : VideosExtrasViewElementViewController {

	VideosExtrasConstrainedArtworkContainerView* _artworkContainerView;
	UIView* _textContainmentView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	NSLayoutConstraint* _artworkContainerTopConstraint;
	NSLayoutConstraint* _artworkContainerXConstraint;
	NSLayoutConstraint* _artworkContainerWidthConstraint;
	NSLayoutConstraint* _artworkContainerHeightConstraint;
	CGSize _artworkSize;
	NSLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textHeightConstraint;
	NSLayoutConstraint* _textCenterYConstraint;
	NSLayoutConstraint* _textLeadingConstraint;
	NSLayoutConstraint* _textTrailingConstraint;
	NSLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _titleVerticalConstraint;
	MPUContentSizeLayoutConstraint* _subtitleBaselineConstraint;
	MPUContentSizeLayoutConstraint* _descriptionBaselineConstraint;

}

@property (readonly) IKLockupElement * viewElement; 
@property (readonly) NSString * descriptionTextStyle; 
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_handlePress:(id)arg1 ;
-(void)_prepareLayout;
-(id)initWithViewElement:(id)arg1 ;
-(NSString *)descriptionTextStyle;
-(void)_configureTitleLabelForTextElement:(id)arg1 ;
-(void)_configureSubtitleLabelForTextElement:(id)arg1 ;
-(void)_configureDescriptionLabelForTextElement:(id)arg1 ;
-(void)_configureArtworkViewForImageElement:(id)arg1 overlays:(id)arg2 ;
@end

