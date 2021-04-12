/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIScrollView, UIView, UILabel, _UIBackdropView, VTVideoView, UIImageView, NSLayoutConstraint, VTUIButton, NSURL, NSString;

@interface VTUIEnrollmentStateView : UIView <UIScrollViewDelegate> {

	UIScrollView* _scrollView;
	UIView* _scrollContainerView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UILabel* _instructionLabel;
	_UIBackdropView* _backdropView;
	VTVideoView* _videoView;
	UIView* _videoContainerView;
	UIImageView* _smallestDeviceImageView;
	CGSize _originalImageSize;
	NSLayoutConstraint* _imageViewHeightCapConstraint;
	NSLayoutConstraint* _readableLeftAnchorConstraint;
	NSLayoutConstraint* _readableRightAnchorConstraint;
	NSLayoutConstraint* _videoHeightConstraint;
	NSLayoutConstraint* _bottomFooterConstraint;
	BOOL _usingFallbackImage;
	VTUIButton* _finishEnrollmentButton;
	NSURL* _videoURL;

}

@property (nonatomic,readonly) VTUIButton * finishEnrollmentButton;              //@synthesize finishEnrollmentButton=_finishEnrollmentButton - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                                     //@synthesize videoURL=_videoURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(id)arg1 ;
-(void)updateConstraints;
-(void)safeAreaInsetsDidChange;
-(long long)_backdropStyle;
-(id)footerView;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)_setupUI;
-(void)startPlayingVideo;
-(void)fadeInSubviews;
-(void)setInstructionText:(id)arg1 ;
-(void)preparePaneVideo;
-(VTUIButton *)finishEnrollmentButton;
-(void)cleanupPaneVideo;
-(void)setPaneVideoPlaceholderImage:(id)arg1 ;
-(BOOL)suppressFinishButton;
-(void)_positionFooter;
-(void)stopPlayingVideo;
@end

