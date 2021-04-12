/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class UIStatusBar_Modern, UIStatusBarStyleRequest;

@interface CCUIStatusBar : UIView {

	UIStatusBar_Modern* _compactTrailingStatusBar;
	UIStatusBar_Modern* _expandedStatusBar;
	double _trailingMarginDelta;
	double _verticalBatteryAlignmentDelta;
	id<CCUIStatusBarDelegate> _delegate;
	unsigned long long _leadingState;
	unsigned long long _trailingState;
	double _maxCompactScaleFactor;
	double _verticalSecondaryServiceDelta;
	double _expandedStatusBarTranslation;
	UIEdgeInsets _compactEdgeInsets;
	UIEdgeInsets _expandedEdgeInsets;
	CGAffineTransform _compactScaleTransform;

}

@property (nonatomic,copy,readonly) UIStatusBarStyleRequest * compactTrailingStyleRequest; 
@property (nonatomic,readonly) double maxCompactScaleFactor;                                            //@synthesize maxCompactScaleFactor=_maxCompactScaleFactor - In the implementation block
@property (nonatomic,readonly) double verticalSecondaryServiceDelta;                                    //@synthesize verticalSecondaryServiceDelta=_verticalSecondaryServiceDelta - In the implementation block
@property (nonatomic,readonly) double expandedStatusBarBaseline; 
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long leadingState;                                           //@synthesize leadingState=_leadingState - In the implementation block
@property (assign,nonatomic) unsigned long long trailingState;                                          //@synthesize trailingState=_trailingState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets compactEdgeInsets;                                            //@synthesize compactEdgeInsets=_compactEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedEdgeInsets;                                           //@synthesize expandedEdgeInsets=_expandedEdgeInsets - In the implementation block
@property (assign,nonatomic) double leadingAlpha; 
@property (assign,nonatomic) double compactTrailingAlpha; 
@property (assign,nonatomic) double expandedTrailingAlpha; 
@property (assign,nonatomic) double expandedStatusBarTranslation;                                       //@synthesize expandedStatusBarTranslation=_expandedStatusBarTranslation - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGAffineTransform compactScaleTransform;                                   //@synthesize compactScaleTransform=_compactScaleTransform - In the implementation block
-(id<CCUIStatusBarDelegate>)delegate;
-(void)setDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)expandedEdgeInsets;
-(void)_updateShadow;
-(void)controlCenterApplyPrimaryContentShadow;
-(void)_updateMetricsIfNeeded;
-(unsigned long long)leadingState;
-(unsigned long long)trailingState;
-(void)prepareForPresentation;
-(void)setCompactEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setExpandedEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(double)maxCompactScaleFactor;
-(void)setLeadingState:(unsigned long long)arg1 ;
-(void)setTrailingState:(unsigned long long)arg1 ;
-(void)setCompactTrailingAlpha:(double)arg1 ;
-(void)setLeadingAlpha:(double)arg1 ;
-(void)setExpandedTrailingAlpha:(double)arg1 ;
-(double)verticalSecondaryServiceDelta;
-(double)expandedStatusBarBaseline;
-(void)setExpandedStatusBarTranslation:(double)arg1 ;
-(CGAffineTransform)compactScaleTransform;
-(void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
-(double)expandedTrailingAlpha;
-(UIStatusBarStyleRequest *)compactTrailingStyleRequest;
-(CGRect)compactAvoidanceFrame;
-(UIEdgeInsets)compactEdgeInsets;
-(double)leadingAlpha;
-(double)compactTrailingAlpha;
-(double)expandedStatusBarTranslation;
@end

