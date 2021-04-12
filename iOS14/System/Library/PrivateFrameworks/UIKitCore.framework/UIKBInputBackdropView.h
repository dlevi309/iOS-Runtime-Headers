/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

@interface UIKBInputBackdropView : UIView {

	UIKBBackdropView* _inputBackdropFullView;
	UIKBBackdropView* _inputBackdropLeftView;
	UIKBBackdropView* _inputBackdropRightView;
	unsigned long long _innerCorners;
	BOOL _isTransitioning;
	double _transitionGap;
	double _transitionLeftOffset;
	long long _style;
	BOOL _hasStartRect;
	BOOL _hasEndRect;
	CGRect _savedStartRect;
	CGRect _savedEndRect;
	_UIVisualEffectBackdropView* _captureView;

}

@property (nonatomic,retain) UIKBBackdropView * inputBackdropFullView;               //@synthesize inputBackdropFullView=_inputBackdropFullView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropLeftView;               //@synthesize inputBackdropLeftView=_inputBackdropLeftView - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * inputBackdropRightView;              //@synthesize inputBackdropRightView=_inputBackdropRightView - In the implementation block
@property (nonatomic,retain) _UIVisualEffectBackdropView * captureView;              //@synthesize captureView=_captureView - In the implementation block
@property (readonly) long long style;                                                //@synthesize style=_style - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)_setRenderConfig:(id)arg1 ;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5 ;
-(int)textEffectsVisibilityLevel;
-(void)layoutInputBackdropToFullWithRect:(CGRect)arg1 ;
-(void)_setInitialProgressWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)transitionToStyle:(long long)arg1 isSplit:(BOOL)arg2 ;
-(BOOL)_isTransitioning;
-(UIKBBackdropView *)inputBackdropRightView;
-(void)setInputBackdropRightView:(UIKBBackdropView *)arg1 ;
-(void)_setProgress:(double)arg1 withFrame:(CGRect)arg2 ;
-(void)restoreFromSnapshotting;
-(UIKBBackdropView *)inputBackdropFullView;
-(void)_setFrame:(CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 ;
-(void)layoutInputBackdropToSplitWithLeftViewRect:(CGRect)arg1 andRightViewRect:(CGRect)arg2 innerCorners:(unsigned long long)arg3 ;
-(void)_endSplitTransitionIfNeeded:(BOOL)arg1 ;
-(void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2 ;
-(UIKBBackdropView *)inputBackdropLeftView;
-(void)setInputBackdropFullView:(UIKBBackdropView *)arg1 ;
-(void)setCaptureView:(_UIVisualEffectBackdropView *)arg1 ;
-(void)setInputBackdropLeftView:(UIKBBackdropView *)arg1 ;
-(_UIVisualEffectBackdropView *)captureView;
-(long long)style;
-(void)prepareForSnapshotting;
-(void)dealloc;
@end

