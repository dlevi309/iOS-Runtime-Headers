/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol _UILumaTrackingBackdropViewDelegate;
@interface _UILumaTrackingBackdropView : UIView {

	id<_UILumaTrackingBackdropViewDelegate> _delegate;
	unsigned long long _backgroundLuminanceLevel;
	CGSize _transitionPoints;
	BOOL _paused;
	CGSize transitionBoundaries;

}

@property (nonatomic,__weak,readonly) id<_UILumaTrackingBackdropViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize transitionBoundaries; 
@property (nonatomic,readonly) unsigned long long backgroundLuminanceLevel; 
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                            //@synthesize paused=_paused - In the implementation block
+(Class)layerClass;
-(id<_UILumaTrackingBackdropViewDelegate>)delegate;
-(id)initWithTransitionBoundaries:(CGSize)arg1 delegate:(id)arg2 frame:(CGRect)arg3 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)_didChangeLuma:(id)arg1 ;
-(unsigned long long)backgroundLuminanceLevel;
-(CGSize)transitionBoundaries;
-(void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)arg1 ;
-(void)setTransitionBoundaries:(CGSize)arg1 ;
-(id)_backdropLayer;
-(void)backdropLayer:(id)arg1 didChangeLuma:(double)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isPaused;
@end

