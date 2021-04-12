/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UISplittableInputView.h>

@class UIKBRenderConfig, _UIInputViewContent, UIImage, NSMutableDictionary, NSArray, CALayer, UIView, NSString;

@interface UIInputView : UIView <UISplittableInputView> {

	long long _style;
	UIKBRenderConfig* _renderConfig;
	BOOL _suppressBackgroundStyling;
	BOOL _disableSplitSupport;
	_UIInputViewContent* _leftContentView;
	_UIInputViewContent* _rightContentView;
	double _contentRatio;
	CGSize _leftContentSize;
	CGSize _rightContentSize;
	double _gapWidth;
	double _leftOffset;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	double _transitionRatio;
	UIImage* _mergedImage;
	UIImage* _splitImage;
	NSMutableDictionary* _mergedSliceMap;
	NSMutableDictionary* _splitSliceMap;
	NSArray* _visibleLayers;
	CALayer* _transitionLayer;
	BOOL _allowsSelfSizing;
	BOOL _assertSizingWithPredictionBar;
	UIEdgeInsets _backgroundEdgeInsets;

}

@property (nonatomic,retain) UIImage * _mergedImage;                             //@synthesize mergedImage=_mergedImage - In the implementation block
@property (nonatomic,retain) UIImage * _splitImage;                              //@synthesize splitImage=_splitImage - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _mergedSliceMap;              //@synthesize mergedSliceMap=_mergedSliceMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _splitSliceMap;               //@synthesize splitSliceMap=_splitSliceMap - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundEdgeInsets;                  //@synthesize backgroundEdgeInsets=_backgroundEdgeInsets - In the implementation block
@property (assign,nonatomic) BOOL assertSizingWithPredictionBar;                 //@synthesize assertSizingWithPredictionBar=_assertSizingWithPredictionBar - In the implementation block
@property (nonatomic,readonly) UIView * leftContentView;                         //@synthesize leftContentView=_leftContentView - In the implementation block
@property (nonatomic,readonly) UIView * rightContentView;                        //@synthesize rightContentView=_rightContentView - In the implementation block
@property (assign,nonatomic) double contentRatio;                                //@synthesize contentRatio=_contentRatio - In the implementation block
@property (assign,nonatomic) CGSize leftContentViewSize;                         //@synthesize leftContentSize=_leftContentSize - In the implementation block
@property (assign,nonatomic) CGSize rightContentViewSize;                        //@synthesize rightContentSize=_rightContentSize - In the implementation block
@property (nonatomic,readonly) long long inputViewStyle;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                              //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setupAppearanceIfNecessary;
-(void)_setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_isSplit;
-(unsigned long long)_clipCornersOfView:(id)arg1 ;
-(void)layoutSplitSubviewsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(BOOL)_isTransitioning;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)rightContentViewSize;
-(void)setBounds:(CGRect)arg1 ;
-(void)updateSplitSubviewContraintsWithLeftContentSize:(CGSize)arg1 rightContentSize:(CGSize)arg2 ;
-(void)willBeginSplitTransition;
-(void)layoutMergedSubviews;
-(BOOL)_isToolbars;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentRatio:(double)arg1 ;
-(void)_setProgress:(double)arg1 boundedBy:(double)arg2 ;
-(UIView *)leftContentView;
-(UIView *)rightContentView;
-(void)updateMergedSubviewConstraints;
-(CGSize)leftContentViewSize;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(BOOL)_supportsSplit;
-(void)_setNeedsContentSizeUpdate;
-(double)_additionalClipHeight;
-(long long)inputViewStyle;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(void)_updateClipCorners;
-(NSMutableDictionary *)_splitSliceMap;
-(void)_updateWithSize:(CGSize)arg1 ;
-(id)_splitBorderedBackgroundWithCorners:(unsigned long long)arg1 ;
-(id)_toolbarBorderedBackground;
-(void)setAssertSizingWithPredictionBar:(BOOL)arg1 ;
-(BOOL)_suppressBackgroundStyling;
-(void)_setSuppressBackgroundStyling:(BOOL)arg1 ;
-(BOOL)_disableSplitSupport;
-(void)_setDisableSplitSupport:(BOOL)arg1 ;
-(void)set_splitImage:(UIImage *)arg1 ;
-(void)setInputViewStyle:(long long)arg1 ;
-(BOOL)assertSizingWithPredictionBar;
-(UIImage *)_mergedImage;
-(void)setLeftContentViewSize:(CGSize)arg1 ;
-(void)setRightContentViewSize:(CGSize)arg1 ;
-(void)didEndSplitTransition;
-(void)set_mergedImage:(UIImage *)arg1 ;
-(NSMutableDictionary *)_mergedSliceMap;
-(void)set_mergedSliceMap:(NSMutableDictionary *)arg1 ;
-(UIImage *)_splitImage;
-(void)set_splitSliceMap:(NSMutableDictionary *)arg1 ;
-(UIEdgeInsets)backgroundEdgeInsets;
-(void)setBackgroundEdgeInsets:(UIEdgeInsets)arg1 ;
-(double)contentRatio;
-(CGSize)_defaultSize;
-(id)tintColor;
-(void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2 ;
-(BOOL)allowsSelfSizing;
-(void)dealloc;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
@end

