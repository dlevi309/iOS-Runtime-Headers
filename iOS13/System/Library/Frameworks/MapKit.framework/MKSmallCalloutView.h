/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _MKCalloutAccessoryView;
@class _MKUILabel, UIView, _MKSmallCalloutPassthroughButton, NSLayoutConstraint, NSArray, UILayoutGuide, NSString;

@interface MKSmallCalloutView : UIView {

	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;
	UIView*<_MKCalloutAccessoryView> _leftView;
	UIView*<_MKCalloutAccessoryView> _rightView;
	UIView*<_MKCalloutAccessoryView> _externalLeftView;
	UIView*<_MKCalloutAccessoryView> _externalRightView;
	UIView*<_MKCalloutAccessoryView> _externalDetailView;
	UIView*<_MKCalloutAccessoryView> _detailView;
	CGSize _preferredContentSize;
	BOOL _shouldPositionTitleForMapsTransitionMovingSideways;
	_MKSmallCalloutPassthroughButton* _maskedContainerView;
	UIView* _unmaskedContainerView;
	BOOL _needsPreferredContentSizeUpdate;
	NSLayoutConstraint* _minWidthConstraint;
	NSLayoutConstraint* _maxWidthConstraint;
	NSLayoutConstraint* _unmaskedContainerLeadingConstraint;
	NSLayoutConstraint* _unmaskedContainerTrailingConstraint;
	NSArray* _titleLabelConstraints;
	NSLayoutConstraint* _titleBaselineFromTopMinimumConstraint;
	NSLayoutConstraint* _titleBaselineFromTopConstraint;
	NSLayoutConstraint* _titleMinimumBaselineToBottomConstraint;
	UILayoutGuide* _centerContentLeadingGuide;
	UILayoutGuide* _centerContentTrailingGuide;
	NSLayoutConstraint* _leftViewMinCalloutWidthConstraint;
	NSLayoutConstraint* _leftViewHorizontalPositionConstraint;
	NSLayoutConstraint* _leftViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _leftViewCenterContentMarginConstraint;
	UILayoutGuide* _leftViewTopSpacer;
	UILayoutGuide* _leftViewLeftSpacer;
	NSLayoutConstraint* _rightViewHorizontalPositionConstraint;
	NSLayoutConstraint* _rightViewTopSpacerBottomConstraint;
	NSLayoutConstraint* _rightViewCenterContentMarginConstraint;
	UILayoutGuide* _rightViewTopSpacer;
	UILayoutGuide* _rightViewRightSpacer;
	NSLayoutConstraint* _detailViewMinTopConstraint;
	NSLayoutConstraint* _detailViewBottomConstraint;
	NSLayoutConstraint* _detailViewTrailingConstraint;
	BOOL _parallaxEnabled;
	UIView* _titlesContainerView;

}

@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@property (nonatomic,readonly) CGSize preferredContentSize;               //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) double minimumWidth; 
@property (assign,nonatomic) double maximumWidth; 
@property (nonatomic,readonly) UIView * titlesContainerView;              //@synthesize titlesContainerView=_titlesContainerView - In the implementation block
@property (assign,nonatomic) BOOL parallaxEnabled;                        //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
-(void)dealloc;
-(void)reset;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)preferredContentSize;
-(void)_updatePreferredContentSize;
-(double)maximumWidth;
-(double)minimumWidth;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(void)setLeftView:(UIView *)arg1 ;
-(UIView *)rightView;
-(UIView *)leftView;
-(void)setRightView:(UIView *)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(NSString *)arg1 ;
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2 ;
-(UIView *)detailView;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2 ;
-(NSString *)calloutSubtitle;
-(UIView *)titlesContainerView;
-(BOOL)parallaxEnabled;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(void)_setNeedsUpdatePreferredContentSize;
-(void)setDetailView:(UIView *)arg1 ;
-(void)_updatePreferredContentSizeIfNeeded;
-(void)beginMapsTransitionMovingSideways;
-(id)_maskedContainerView;
-(void)setCalloutSubtitle:(NSString *)arg1 ;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
@end

