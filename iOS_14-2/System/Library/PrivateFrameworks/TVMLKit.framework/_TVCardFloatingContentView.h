/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/_UIFloatingContentView.h>
#import <libobjc.A.dylib/_UIFloatingContentViewDelegate.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@class UIView, UIImage, NSString;

@interface _TVCardFloatingContentView : _UIFloatingContentView <_UIFloatingContentViewDelegate, TVAuxiliaryViewSelecting> {

	UIView* _unfocusedShadowView;
	UIView* _focusedShadowView;
	double _unfocusedAlpha;
	BOOL _isSelected;
	double _unfocusedShadowAlpha;
	double _focusedShadowAlpha;
	UIImage* _unfocusedShadowImage;
	UIImage* _focusedShadowImage;
	/*^block*/id _pressCompletionBlock;
	CGSize _focusedShadowCardSize;
	CGSize _unfocusedShadowCardSize;

}

@property (nonatomic,copy) id pressCompletionBlock;                       //@synthesize pressCompletionBlock=_pressCompletionBlock - In the implementation block
@property (assign,nonatomic) double unfocusedShadowAlpha;                 //@synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha - In the implementation block
@property (assign,nonatomic) double focusedShadowAlpha;                   //@synthesize focusedShadowAlpha=_focusedShadowAlpha - In the implementation block
@property (nonatomic,retain) UIImage * unfocusedShadowImage;              //@synthesize unfocusedShadowImage=_unfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * focusedShadowImage;                //@synthesize focusedShadowImage=_focusedShadowImage - In the implementation block
@property (assign,nonatomic) CGSize focusedShadowCardSize;                //@synthesize focusedShadowCardSize=_focusedShadowCardSize - In the implementation block
@property (assign,nonatomic) CGSize unfocusedShadowCardSize;              //@synthesize unfocusedShadowCardSize=_unfocusedShadowCardSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)prepareForReuse;
-(void)floatingContentView:(id)arg1 didFinishTransitioningToState:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(double)unfocusedShadowAlpha;
-(void)setUnfocusedShadowAlpha:(double)arg1 ;
-(double)focusedShadowAlpha;
-(void)setFocusedShadowAlpha:(double)arg1 ;
-(UIImage *)unfocusedShadowImage;
-(void)setUnfocusedShadowImage:(UIImage *)arg1 ;
-(UIImage *)focusedShadowImage;
-(void)setFocusedShadowImage:(UIImage *)arg1 ;
-(void)setPressCompletionBlock:(id)arg1 ;
-(id)pressCompletionBlock;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)setFocusedShadowCardSize:(CGSize)arg1 ;
-(void)setUnfocusedShadowCardSize:(CGSize)arg1 ;
-(void)_updateForAccessibilityChange;
-(void)setBgColor:(id)arg1 highlightBgColor:(id)arg2 cornerRadius:(double)arg3 ;
-(CGSize)focusedShadowCardSize;
-(CGSize)unfocusedShadowCardSize;
@end

