/*
* Generated on Thursday, January 14, 2021 at 2:20:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@protocol _UIRefreshControlHosting;
@class _UIRefreshControlContentView, UIColor, NSAttributedString;

@interface UIRefreshControl : UIControl {

	long long _style;
	_UIRefreshControlContentView* _contentView;
	double _refreshControlHeight;
	double _visibleHeight;
	double _snappingHeight;
	double _additionalTopInset;
	BOOL _insetsApplied;
	BOOL _adjustingInsets;
	UIEdgeInsets _appliedInsets;
	id<_UIRefreshControlHosting> _host;
	long long _refreshControlState;

}

@property (nonatomic,readonly) long long refreshControlState;                                                      //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) double _refreshControlHeight; 
@property (nonatomic,readonly) double _snappingHeight; 
@property (nonatomic,readonly) double _visibleHeight; 
@property (nonatomic,readonly) BOOL _hostAdjustsContentOffset; 
@property (nonatomic,readonly) BOOL _areInsetsBeingApplied; 
@property (getter=_appliedInsets,nonatomic,readonly) UIEdgeInsets appliedInsets; 
@property (assign,setter=_setHost:,getter=_host,nonatomic,__weak) id<_UIRefreshControlHosting> _host; 
@property (getter=isRefreshing,nonatomic,readonly) BOOL refreshing; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
+(BOOL)_allowsUnsupportedMacIdiomBehavior;
+(void)_setAllowsUnsupportedMacIdiomBehavior:(BOOL)arg1 ;
+(Class)_contentViewClassForStyle:(long long)arg1 ;
+(id)_defaultColor;
-(NSAttributedString *)attributedTitle;
-(id<_UIRefreshControlHosting>)_host;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_setTintColor:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(id)_scrollView;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)_tintColor;
-(id)initWithStyle:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)didMoveToSuperview;
-(id)_contentView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_didScroll;
-(void)_setHost:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_addInsets;
-(double)_snappingHeight;
-(id)_attributedTitle;
-(void)beginRefreshing;
-(void)_update;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateSnappingHeight;
-(void)setRefreshControlState:(long long)arg1 ;
-(void)_resizeToFitContents;
-(BOOL)_areInsetsBeingApplied;
-(BOOL)_hostAdjustsContentOffset;
-(void)_removeInsetHeight:(double)arg1 ;
-(void)_addInsetHeight:(double)arg1 ;
-(double)_visibleHeight;
-(double)revealedFraction;
-(long long)_recomputeNewState;
-(void)_setAttributedTitle:(id)arg1 ;
-(void)_updateHiddenStateIfNeeded;
-(void)_updateConcealingMask;
-(double)_stiffnessForVelocity:(double)arg1 ;
-(CGPoint)_originForContentOffset:(CGPoint)arg1 ;
-(void)_setVisibleHeight:(double)arg1 ;
-(double)_visibleHeightForContentOffset:(CGPoint)arg1 origin:(CGPoint)arg2 ;
-(BOOL)isRefreshing;
-(double)_impactIntensityForVelocity:(double)arg1 ;
-(void)_setRefreshControlState:(long long)arg1 notify:(BOOL)arg2 ;
-(double)_scrollViewHeight;
-(void)_endRefreshingAnimated:(BOOL)arg1 ;
-(BOOL)_canTransitionFromState:(long long)arg1 toState:(long long)arg2 ;
-(BOOL)_isApplyingInsets;
-(long long)refreshControlState;
-(void)sizeToFit;
-(double)_refreshControlHeight;
-(void)_removeInsets;
-(void)endRefreshing;
-(UIEdgeInsets)_appliedInsets;
-(UIColor *)tintColor;
-(long long)style;
-(void)dealloc;
@end

