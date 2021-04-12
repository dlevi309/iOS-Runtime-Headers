/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WLCardViewDelegate.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKPassGroupViewDelegate;
@class NSMutableDictionary, NSMutableArray, UIScrollView, UIPageControl, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIMotionEffectGroup, UIViewController, NSString, PKPassView, PKGroup, PKReusablePassViewQueue;

@interface PKPassGroupView : UIView <WLCardViewDelegate, PKGroupDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	unsigned short _animationCounter;
	unsigned short _pageControlAnimationCounter;
	unsigned short _frontFaceContentModePinningCounter;
	long long _presentationState;
	SCD_Struct_PK17 _layoutState;
	NSMutableDictionary* _passViewsByUniqueID;
	NSMutableArray* _delayedAnimations;
	UIScrollView* _horizontalScrollView;
	UIPageControl* _pageControl;
	double _dimmerValue;
	BOOL _canPan;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIMotionEffectGroup* _motionEffectGroup;
	BOOL _isAuthenticating;
	id<PKPassGroupViewDelegate> _delegate;
	UIViewController* _detailsVC;
	NSString* _passBeingPresented;
	BOOL _groupWasMarkedDeleted;
	BOOL _passBeingPresentedWasDeleted;
	BOOL _invalidated;
	BOOL _effectivePaused;
	BOOL _modallyPresented;
	BOOL _loaned;
	BOOL _paused;
	PKPassView* _frontmostPassView;
	PKGroup* _group;
	PKReusablePassViewQueue* _passViewQueue;
	UILongPressGestureRecognizer* _pressGestureRecognizer;

}

@property (nonatomic,retain) PKPassView * frontmostPassView;                                       //@synthesize frontmostPassView=_frontmostPassView - In the implementation block
@property (assign,getter=isModallyPresented,nonatomic) BOOL modallyPresented;                      //@synthesize modallyPresented=_modallyPresented - In the implementation block
@property (assign,getter=isLoaned,nonatomic) BOOL loaned;                                          //@synthesize loaned=_loaned - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                          //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) PKGroup * group;                                                    //@synthesize group=_group - In the implementation block
@property (assign,nonatomic) PKReusablePassViewQueue * passViewQueue;                              //@synthesize passViewQueue=_passViewQueue - In the implementation block
@property (assign,nonatomic) long long presentationState;                                          //@synthesize presentationState=_presentationState - In the implementation block
@property (nonatomic,readonly) unsigned long long displayIndex; 
@property (nonatomic,readonly) UIPageControl * pageControl;                                        //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,readonly) UIOffset offsetForFrontmostPassWhileStacked; 
@property (nonatomic,readonly) UILongPressGestureRecognizer * pressGestureRecognizer;              //@synthesize pressGestureRecognizer=_pressGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassGroupViewDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<PKPassGroupViewDelegate>)delegate;
-(void)setDelegate:(id<PKPassGroupViewDelegate>)arg1 ;
-(BOOL)isPaused;
-(PKGroup *)group;
-(CGSize)_contentSize;
-(void)setPaused:(BOOL)arg1 ;
-(void)removeFromSuperview;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(UIPageControl *)pageControl;
-(void)_handleLongPress:(id)arg1 ;
-(UILongPressGestureRecognizer *)pressGestureRecognizer;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)_handlePress:(id)arg1 ;
-(void)setDimmer:(double)arg1 animated:(BOOL)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)passViewTapped:(id)arg1 ;
-(void)faceFrameDidChangeForPassView:(id)arg1 ;
-(void)setModallyPresented:(BOOL)arg1 ;
-(BOOL)isModallyPresented;
-(PKPassView *)frontmostPassView;
-(BOOL)isLoaned;
-(void)_updatePausedState;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)_pageControlChanged:(id)arg1 ;
-(void)passView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(BOOL)passView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)passView:(id)arg1 willPresentPassDetailsViewController:(id)arg2 ;
-(void)passView:(id)arg1 didPresentPassDetailsViewController:(id)arg2 ;
-(void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 withContext:(id)arg2 ;
-(void)beginPinningFrontFaceContentMode;
-(void)endPinningFrontFaceContentMode;
-(void)markGroupDeleted;
-(void)applyContentModesAnimated:(BOOL)arg1 ;
-(id)initWithGroup:(id)arg1 delegate:(id)arg2 presentationState:(long long)arg3 ;
-(void)updatePageControlFrame;
-(void)setLoaned:(BOOL)arg1 ;
-(UIOffset)offsetForFrontmostPassWhileStacked;
-(void)updateToStackWithProgress:(double)arg1 originalPosition:(CGPoint)arg2 timingFunction:(/*^block*/id)arg3 ;
-(void)_updateDelegateResponderCache;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_updateCachedLayoutState;
-(void)setFrontmostPassViewFromPassIndex:(long long)arg1 ;
-(void)_updateLoadedViews:(BOOL)arg1 ;
-(void)_updatePageControlVisibilityWithDelay:(double)arg1 ;
-(void)_removePanAndLongPressGestureRecognizers;
-(void)layoutSubviewsAnimated:(BOOL)arg1 ;
-(void)_removeDelayedAnimations;
-(void)_beginTrackingAnimation;
-(void)_endTrackingAnimation;
-(void)layoutStackAnimated:(BOOL)arg1 ;
-(void)layoutPagesAnimated:(BOOL)arg1 ;
-(NSRange)_rangeOfVisibleIndices;
-(CGPoint)_stackingPositionForPassViewLayer:(id)arg1 atStackIndex:(unsigned long long)arg2 withSeparation:(BOOL)arg3 ;
-(void)_enumeratePassViewsInStackOrderWithHandler:(/*^block*/id)arg1 ;
-(id)passViewForIndex:(unsigned long long)arg1 ;
-(CGRect)_pagingFrameForCardView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)continuousShadowIndex;
-(void)_addDelayedAnimation:(id)arg1 toLayer:(id)arg2 withRemovalAction:(/*^block*/id)arg3 ;
-(void)setFrontmostPassViewFromPassIndex:(long long)arg1 withContext:(id)arg2 ;
-(void)setFrontmostPassView:(id)arg1 withContext:(id)arg2 ;
-(NSRange)_rangeOfPagingIndices;
-(void)_applyContentMode:(long long)arg1 toPassView:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updateCachedGroupState;
-(void)_updatePageControlWithDisplayIndex;
-(void)_enumerateIndicesInStackOrderWithHandler:(/*^block*/id)arg1 ;
-(long long)_defaultContentModeForIndex:(unsigned long long)arg1 ;
-(id)_loadCardViewForIndex:(unsigned long long)arg1 contentMode:(long long)arg2 ;
-(void)setFrontmostPassView:(PKPassView *)arg1 ;
-(void)_removeDelayedAnimationTrackerWithKey:(id)arg1 ;
-(unsigned long long)displayIndex;
-(void)_preparePageControlForReuse;
-(BOOL)_isOurGestureRecognizer:(id)arg1 ;
-(void)_updateFrontmostPassViewIfNecessary;
-(void)dismissBackOfPassIfNecessaryForUniqueID:(id)arg1 ;
-(PKReusablePassViewQueue *)passViewQueue;
-(void)setPassViewQueue:(PKReusablePassViewQueue *)arg1 ;
@end

