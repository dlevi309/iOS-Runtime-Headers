/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKitCore/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView {

	NSLayoutConstraint* _aspectConstraint;
	UIImage* _externalImage;
	UIView* _highlightView;
	BOOL _isDeallocating;
	BOOL _automaticallyApplyAspectConstraints;
	BOOL _dimsWhenHighlighted;
	BOOL _forcesAnimatedUnhighlighting;
	BOOL _displayingPlaceholder;
	UIImage* _placeholderImage;

}

@property (assign,getter=isDisplayingPlaceholder,nonatomic) BOOL displayingPlaceholder;                                                                //@synthesize displayingPlaceholder=_displayingPlaceholder - In the implementation block
@property (nonatomic,readonly) UIImage * _externalImage;                                                                                               //@synthesize externalImage=_externalImage - In the implementation block
@property (assign,setter=_setAspectConstraintMultiplier:,getter=_aspectConstraintMultiplier,nonatomic) double aspectConstraintMultiplier; 
@property (assign,nonatomic) BOOL automaticallyApplyAspectConstraints;                                                                                 //@synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints - In the implementation block
@property (assign,nonatomic) BOOL dimsWhenHighlighted;                                                                                                 //@synthesize dimsWhenHighlighted=_dimsWhenHighlighted - In the implementation block
@property (assign,nonatomic) BOOL forcesAnimatedUnhighlighting;                                                                                        //@synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting - In the implementation block
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                               //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,readonly) BOOL shouldDisplayPlaceholder; 
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateConstraints;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startAnimating;
-(void)setHighlightedImage:(id)arg1 ;
-(void)stopAnimating;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(UIImage *)placeholderImage;
-(void)_imageDidChange;
-(BOOL)isDisplayingPlaceholder;
-(BOOL)automaticallyApplyAspectConstraints;
-(void)_setAspectConstraintMultiplier:(double)arg1 ;
-(void)_updateHighlightViewAnimated:(BOOL)arg1 ;
-(void)_setPlaceholderHidden:(BOOL)arg1 ;
-(BOOL)shouldDisplayPlaceholder;
-(UIImage *)_externalImage;
-(void)setDisplayingPlaceholder:(BOOL)arg1 ;
-(BOOL)_shouldShowHighlightView;
-(BOOL)forcesAnimatedUnhighlighting;
-(void)setAutomaticallyApplyAspectConstraints:(BOOL)arg1 ;
-(void)setDimsWhenHighlighted:(BOOL)arg1 ;
-(double)_aspectConstraintMultiplier;
-(BOOL)dimsWhenHighlighted;
-(void)setForcesAnimatedUnhighlighting:(BOOL)arg1 ;
@end

