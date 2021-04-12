/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)setHighlightedAnimationImages:(id)arg1 ;
-(void)updateConstraints;
-(void)_imageDidChange;
-(UIImage *)placeholderImage;
-(void)startAnimating;
-(void)setHighlightedImage:(id)arg1 ;
-(void)stopAnimating;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(BOOL)isDisplayingPlaceholder;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDimsWhenHighlighted:(BOOL)arg1 ;
-(void)setForcesAnimatedUnhighlighting:(BOOL)arg1 ;
-(void)setAutomaticallyApplyAspectConstraints:(BOOL)arg1 ;
-(BOOL)automaticallyApplyAspectConstraints;
-(void)_setAspectConstraintMultiplier:(double)arg1 ;
-(void)_updateHighlightViewAnimated:(BOOL)arg1 ;
-(void)_setPlaceholderHidden:(BOOL)arg1 ;
-(BOOL)shouldDisplayPlaceholder;
-(UIImage *)_externalImage;
-(void)setDisplayingPlaceholder:(BOOL)arg1 ;
-(BOOL)_shouldShowHighlightView;
-(BOOL)forcesAnimatedUnhighlighting;
-(double)_aspectConstraintMultiplier;
-(BOOL)dimsWhenHighlighted;
@end

