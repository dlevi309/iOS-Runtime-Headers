/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, CALayer;

@interface MPUPinningView : UIView {

	UIView* _containerView;
	CALayer* _effectivePinningSourceLayer;
	UIView* _contentView;
	UIView* _pinningSourceView;
	CALayer* _pinningSourceLayer;

}

@property (nonatomic,retain) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * pinningSourceView;                //@synthesize pinningSourceView=_pinningSourceView - In the implementation block
@property (nonatomic,retain) CALayer * pinningSourceLayer;              //@synthesize pinningSourceLayer=_pinningSourceLayer - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)_prepareForDefaultImageSnapshotNotification:(id)arg1 ;
-(void)_unregisterKVOObserversForLayer:(id)arg1 ;
-(void)_configureMatchMoveAnimation;
-(BOOL)_updateEffectivePinningSourceView;
-(void)setPinningSourceLayer:(CALayer *)arg1 ;
-(void)_registerKVOObserversForLayer:(id)arg1 ;
-(void)setPinningSourceView:(UIView *)arg1 ;
-(UIView *)pinningSourceView;
-(CALayer *)pinningSourceLayer;
@end

