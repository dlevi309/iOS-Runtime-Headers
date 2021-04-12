/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setContentView:(UIView *)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(UIView *)contentView;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
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

