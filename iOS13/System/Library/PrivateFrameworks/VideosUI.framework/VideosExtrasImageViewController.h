/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UIViewController.h>
#import <VideosUI/VideosExtrasZoomingImageTransitionParticipant.h>

@class NSString, UIActivityIndicatorView, VideosExtrasZoomableImageView, NSArray, VideosExtrasZoomingImageInteractiveTransitionSourceContext, UIView, UILabel, MPUContentSizeLayoutConstraint, UIImage, NSAttributedString;

@interface VideosExtrasImageViewController : UIViewController <VideosExtrasZoomingImageTransitionParticipant> {

	BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
	BOOL _overlayHidden;
	unsigned long long _imageIndex;
	NSString* _zoomingImageTransitionIdentifier;
	UIActivityIndicatorView* _activityIndicatorView;
	VideosExtrasZoomableImageView* _zoomableImageView;
	NSArray* _gestureRecognizers;
	VideosExtrasZoomingImageInteractiveTransitionSourceContext* _interactiveTransitionSourceContext;
	UIView* _textContainmentView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _descriptionLabel;
	MPUContentSizeLayoutConstraint* _topLabelConstraint;
	MPUContentSizeLayoutConstraint* _subtitleLeadingConstraint;
	MPUContentSizeLayoutConstraint* _descriptionLeadingConstraint;
	MPUContentSizeLayoutConstraint* _bottomLabelConstraint;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                                              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) VideosExtrasZoomableImageView * zoomableImageView;                                                            //@synthesize zoomableImageView=_zoomableImageView - In the implementation block
@property (nonatomic,copy) NSArray * gestureRecognizers;                                                                                   //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,retain) VideosExtrasZoomingImageInteractiveTransitionSourceContext * interactiveTransitionSourceContext;              //@synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext - In the implementation block
@property (nonatomic,retain) UIView * textContainmentView;                                                                                 //@synthesize textContainmentView=_textContainmentView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                                                                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                                                                   //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * topLabelConstraint;                                                          //@synthesize topLabelConstraint=_topLabelConstraint - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * subtitleLeadingConstraint;                                                   //@synthesize subtitleLeadingConstraint=_subtitleLeadingConstraint - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * descriptionLeadingConstraint;                                                //@synthesize descriptionLeadingConstraint=_descriptionLeadingConstraint - In the implementation block
@property (nonatomic,retain) MPUContentSizeLayoutConstraint * bottomLabelConstraint;                                                       //@synthesize bottomLabelConstraint=_bottomLabelConstraint - In the implementation block
@property (assign,nonatomic) BOOL overlayHidden;                                                                                           //@synthesize overlayHidden=_overlayHidden - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) NSAttributedString * titleString; 
@property (nonatomic,retain) NSAttributedString * subtitleString; 
@property (nonatomic,retain) NSAttributedString * descriptionString; 
@property (assign,nonatomic) unsigned long long imageIndex;                                                                                //@synthesize imageIndex=_imageIndex - In the implementation block
@property (assign,nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition;                                                 //@synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition - In the implementation block
@property (nonatomic,copy) NSString * zoomingImageTransitionIdentifier;                                                                    //@synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSAttributedString *)descriptionString;
-(UILabel *)titleLabel;
-(NSArray *)gestureRecognizers;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(BOOL)prefersStatusBarHidden;
-(void)updateViewConstraints;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setGestureRecognizers:(NSArray *)arg1 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(void)_handlePinch:(id)arg1 ;
-(void)setSubtitleString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)subtitleString;
-(BOOL)overlayHidden;
-(void)setOverlayHidden:(BOOL)arg1 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(void)setImageIndex:(unsigned long long)arg1 ;
-(unsigned long long)imageIndex;
-(MPUContentSizeLayoutConstraint *)topLabelConstraint;
-(void)setTopLabelConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(MPUContentSizeLayoutConstraint *)bottomLabelConstraint;
-(void)setBottomLabelConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(BOOL)allowsPinchingImageForInteractiveZoomingImageTransition;
-(void)setZoomableImageView:(VideosExtrasZoomableImageView *)arg1 ;
-(void)setTextContainmentView:(UIView *)arg1 ;
-(UIView *)textContainmentView;
-(MPUContentSizeLayoutConstraint *)subtitleLeadingConstraint;
-(void)setSubtitleLeadingConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(MPUContentSizeLayoutConstraint *)descriptionLeadingConstraint;
-(void)setDescriptionLeadingConstraint:(MPUContentSizeLayoutConstraint *)arg1 ;
-(VideosExtrasZoomableImageView *)zoomableImageView;
-(void)prepareZoomingImageTransitionWithContext:(id)arg1 ;
-(void)performZoomingImageTransitionWithContext:(id)arg1 ;
-(void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2 ;
-(VideosExtrasZoomingImageInteractiveTransitionSourceContext *)interactiveTransitionSourceContext;
-(NSString *)zoomingImageTransitionIdentifier;
-(void)setInteractiveTransitionSourceContext:(VideosExtrasZoomingImageInteractiveTransitionSourceContext *)arg1 ;
-(void)setAllowsPinchingImageForInteractiveZoomingImageTransition:(BOOL)arg1 ;
-(void)setZoomingImageTransitionIdentifier:(NSString *)arg1 ;
@end

