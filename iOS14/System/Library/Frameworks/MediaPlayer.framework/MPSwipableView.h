/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MPSwipableViewDelegate;
@class MPTapGestureRecognizer, MPSwipeGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer, NSString;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {

	long long _enabledGestureTypes;
	long long _simultaneousGestureTypes;
	id<MPSwipableViewDelegate> _swipeDelegate;
	MPTapGestureRecognizer* _tapGestureRecognizer;
	MPSwipeGestureRecognizer* _swipeGestureRecognizer;
	MPActivityGestureRecognizer* _activityGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;

}

@property (assign,nonatomic) long long enabledGestureTypes;                                //@synthesize enabledGestureTypes=_enabledGestureTypes - In the implementation block
@property (assign,nonatomic) long long simultaneousGestureTypes;                           //@synthesize simultaneousGestureTypes=_simultaneousGestureTypes - In the implementation block
@property (assign,nonatomic,__weak) id<MPSwipableViewDelegate> swipeDelegate;              //@synthesize swipeDelegate=_swipeDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willMoveToSuperview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_swipeGestureRecognized:(id)arg1 ;
-(void)_activityGestureRecognized:(id)arg1 ;
-(id<MPSwipableViewDelegate>)swipeDelegate;
-(void)_pinchGestureRecognized:(id)arg1 ;
-(void)setEnabledGestureTypes:(long long)arg1 ;
-(void)_updateGestureRecognizersForEnabledTypes;
-(void)setSwipeDelegate:(id<MPSwipableViewDelegate>)arg1 ;
-(long long)enabledGestureTypes;
-(long long)simultaneousGestureTypes;
-(void)setSimultaneousGestureTypes:(long long)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
@end

