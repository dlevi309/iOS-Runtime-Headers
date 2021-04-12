/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CCUIStatusBarDelegate;
@class UIStatusBar_Modern, UIStatusBarStyleRequest;

@interface CCUIStatusBar : UIView {

	UIStatusBar_Modern* _compactTrailingStatusBar;
	UIStatusBar_Modern* _expandedStatusBar;
	BOOL _needsUpdatedMetrics;
	double _trailingMarginDelta;
	double _verticalBatteryAlignmentDelta;
	BOOL _alignCompactAndExpandedStatusBars;
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
@property (assign,nonatomic,__weak) id<CCUIStatusBarDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long leadingState;                                           //@synthesize leadingState=_leadingState - In the implementation block
@property (assign,nonatomic) unsigned long long trailingState;                                          //@synthesize trailingState=_trailingState - In the implementation block
@property (assign,nonatomic) UIEdgeInsets compactEdgeInsets;                                            //@synthesize compactEdgeInsets=_compactEdgeInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets expandedEdgeInsets;                                           //@synthesize expandedEdgeInsets=_expandedEdgeInsets - In the implementation block
@property (assign,nonatomic) double leadingAlpha; 
@property (assign,nonatomic) double compactTrailingAlpha; 
@property (assign,nonatomic) double expandedTrailingAlpha; 
@property (assign,nonatomic) double expandedStatusBarTranslation;                                       //@synthesize expandedStatusBarTranslation=_expandedStatusBarTranslation - In the implementation block
@property (assign,nonatomic) BOOL alignCompactAndExpandedStatusBars;                                    //@synthesize alignCompactAndExpandedStatusBars=_alignCompactAndExpandedStatusBars - In the implementation block
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGAffineTransform compactScaleTransform;                                   //@synthesize compactScaleTransform=_compactScaleTransform - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)setLeadingState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTrailingState:(unsigned long long)arg1 ;
-(id<CCUIStatusBarDelegate>)delegate;
-(double)expandedTrailingAlpha;
-(void)setAlignCompactAndExpandedStatusBars:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(unsigned long long)leadingState;
-(CGRect)compactAvoidanceFrame;
-(double)maxCompactScaleFactor;
-(void)setDelegate:(id<CCUIStatusBarDelegate>)arg1 ;
-(void)_updateShadow;
-(void)setCompactScaleTransform:(CGAffineTransform)arg1 ;
-(void)layoutSubviews;
-(double)leadingAlpha;
-(double)expandedStatusBarTranslation;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)expandedEdgeInsets;
-(void)prepareForPresentation;
-(void)_updateCompactTrailingStatusBarStyleRequestAndAvoidanceFrame;
-(void)setExpandedTrailingAlpha:(double)arg1 ;
-(BOOL)alignCompactAndExpandedStatusBars;
-(void)setCompactEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)controlCenterApplyPrimaryContentShadow;
-(long long)orientation;
-(void)setExpandedEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIStatusBarStyleRequest *)compactTrailingStyleRequest;
-(CGAffineTransform)compactScaleTransform;
-(void)setExpandedStatusBarTranslation:(double)arg1 ;
-(void)setCompactTrailingAlpha:(double)arg1 ;
-(unsigned long long)trailingState;
-(double)compactTrailingAlpha;
-(UIEdgeInsets)compactEdgeInsets;
-(void)setLeadingAlpha:(double)arg1 ;
-(double)verticalSecondaryServiceDelta;
-(void)_updateMetricsIfNeeded;
-(void)setOrientation:(long long)arg1 ;
@end

