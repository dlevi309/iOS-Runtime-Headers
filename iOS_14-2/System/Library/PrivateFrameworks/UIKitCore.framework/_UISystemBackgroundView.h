/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UIBackgroundConfigurationInternal;
@class UIView, UIVisualEffectView, _UISystemBackgroundStrokeView;

@interface _UISystemBackgroundView : UIView {

	UIView* _backgroundView;
	UIVisualEffectView* _visualEffectView;
	_UISystemBackgroundStrokeView* _strokeView;
	UIView* _shadowView;
	double _currentlyAppliedCornerRadius;
	struct {
		unsigned currentlyAppliedCornersAreContinuous : 1;
		unsigned didSetCustomViewMasking : 1;
	}  _systemBackgroundViewFlags;
	id<_UIBackgroundConfigurationInternal> _configuration;

}

@property (nonatomic,copy) id<_UIBackgroundConfigurationInternal> configuration;              //@synthesize configuration=_configuration - In the implementation block
-(UIEdgeInsets)effectiveInsetsInContainerView:(id)arg1 ;
-(id)currentVisiblePathInContainerView:(id)arg1 ;
-(void)tintColorDidChange;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)description;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(id<_UIBackgroundConfigurationInternal>)configuration;
-(id)outlinePathInContainerView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentBackgroundColor;
-(id)_encodableSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGRect)frameInContainerView:(id)arg1 ;
-(void)setConfiguration:(id<_UIBackgroundConfigurationInternal>)arg1 ;
@end

