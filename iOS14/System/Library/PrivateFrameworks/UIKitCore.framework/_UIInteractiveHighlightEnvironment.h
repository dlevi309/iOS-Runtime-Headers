/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen, _UIInteractiveHighlightEffectWindow, UIView, UIVisualEffectView, UIViewPropertyAnimator, UIViewFloatAnimatableProperty, NSArray, NSUUID;

@interface _UIInteractiveHighlightEnvironment : NSObject {

	UIScreen* _containerScreen;
	_UIInteractiveHighlightEffectWindow* _containerWindow;
	UIView* _containerView;
	UIVisualEffectView* _backgroundEffectView;
	UIView* _contentView;
	UIView* _contentClipView;
	UIView* _contentOverlayView;
	UIViewPropertyAnimator* _backgroundEffectAnimator;
	UIViewFloatAnimatableProperty* _backgroundEffectProgress;
	NSArray* _viewRecords;
	_UIInteractiveHighlightEnvironment* _parentEnvironment;
	_UIInteractiveHighlightEnvironment* _childEnvironment;
	NSUUID* _backgroundAnimationIdentifier;
	UIView* _customBackgroundEffectView;
	/*^block*/id _backgroundEffectApplyBlock;

}

@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (nonatomic,readonly) UIView * containerView;                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UIView * contentView; 
@property (nonatomic,readonly) UIView * contentClipView; 
@property (nonatomic,retain) UIView * customBackgroundEffectView;              //@synthesize customBackgroundEffectView=_customBackgroundEffectView - In the implementation block
@property (nonatomic,copy) id backgroundEffectApplyBlock;                      //@synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock - In the implementation block
+(id)requestInteractiveHighlightEnvironmentForView:(id)arg1 ;
+(id)interactiveHighlightEnvironmentForContainerView:(id)arg1 ;
-(BOOL)isHidden;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithContainerScreen:(id)arg1 ;
-(UIView *)containerView;
-(UIView *)contentClipView;
-(void)reset;
-(void)removeAllViewRecords;
-(void)setUserInteractionOnContainerEnabled:(BOOL)arg1 ;
-(void)initContainerWindowIfNeeded;
-(void)initContentViewIfNeeded;
-(long long)indexOfViewRecordForView:(id)arg1 ;
-(id)newViewRecordForView:(id)arg1 options:(unsigned long long)arg2 ;
-(void)initBackgroundEffectViewIfNeeded;
-(id)newBackgroundEffectAnimator;
-(void)finalizeBackgroundEffect;
-(void)removeViewRecordsIfNeeded;
-(void)disableClippingForView:(id)arg1 ancestorView:(id)arg2 ;
-(void)finalizeViewRecord:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)finalizeContentViewIfNeeded;
-(void)finalizeContainerWindowIfNeeded;
-(id)backgroundVisualEffectForProgress:(double)arg1 ;
-(void)applyContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithParentEnvironment:(id)arg1 ;
-(id)interactiveHighlightEffectForView:(id)arg1 options:(unsigned long long)arg2 ;
-(void)applyBackgroundEffectWithMagnitude:(double)arg1 interactive:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeInteractiveHighlightEffect:(id)arg1 ;
-(UIView *)customBackgroundEffectView;
-(void)setCustomBackgroundEffectView:(UIView *)arg1 ;
-(id)backgroundEffectApplyBlock;
-(void)setBackgroundEffectApplyBlock:(id)arg1 ;
-(UIView *)contentView;
-(id)initWithContainerView:(id)arg1 ;
-(void)dealloc;
@end

