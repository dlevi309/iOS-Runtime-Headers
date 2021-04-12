/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)backdropLayer:(id)arg1 didChangeLuma:(double)arg2 ;
-(id)_backdropLayer;
-(id)initWithTransitionBoundaries:(CGSize)arg1 delegate:(id)arg2 frame:(CGRect)arg3 ;
-(void)_didChangeLuma:(id)arg1 ;
-(unsigned long long)backgroundLuminanceLevel;
-(void)unpauseAfterSeedingWithLumaLevel:(unsigned long long)arg1 ;
-(CGSize)transitionBoundaries;
-(void)setTransitionBoundaries:(CGSize)arg1 ;
@end

