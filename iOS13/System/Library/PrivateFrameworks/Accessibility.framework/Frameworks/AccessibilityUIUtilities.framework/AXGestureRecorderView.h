/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
*/

#import <AccessibilityUIUtilities/AccessibilityUIUtilities-Structs.h>
#import <AccessibilityUIUtilities/AXGestureRecorderGradientView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol AXGestureRecorderViewDelegate;
@class NSMutableArray, NSMutableDictionary, AXGestureRecorderStyleProvider, UIView, UIColor, UIAccessibilityCustomAction, NSString;

@interface AXGestureRecorderView : AXGestureRecorderGradientView <CAAnimationDelegate> {

	double _freezeDryStartTime;
	double _freezeDryDrawPercentage;
	double _freezeDryStartIndex;
	NSMutableArray* _freezedDynamicPaths;
	NSMutableDictionary* _activeLayers;
	NSMutableDictionary* _instantReplayViews;
	NSMutableArray* _staticLayers;
	NSMutableArray* _transitionLayers;
	BOOL _replayMode;
	id<AXGestureRecorderViewDelegate> _dataSource;
	AXGestureRecorderStyleProvider* _styleProvider;
	UIView* _dynamicFingerPathsContainerView;
	UIColor* _dynamicFingerPathBackgroundGradientPatternColor;
	UIAccessibilityCustomAction* _hideControlsAction;
	UIAccessibilityCustomAction* _showControlsAction;
	NSMutableDictionary* _previouslyActiveLayersByInstantReplayFingerIndex;
	CGRect _constrainedBoundsForDrawing;

}

@property (nonatomic,retain) UIView * dynamicFingerPathsContainerView;                                            //@synthesize dynamicFingerPathsContainerView=_dynamicFingerPathsContainerView - In the implementation block
@property (nonatomic,retain) UIColor * dynamicFingerPathBackgroundGradientPatternColor;                           //@synthesize dynamicFingerPathBackgroundGradientPatternColor=_dynamicFingerPathBackgroundGradientPatternColor - In the implementation block
@property (assign,nonatomic) CGRect constrainedBoundsForDrawing;                                                  //@synthesize constrainedBoundsForDrawing=_constrainedBoundsForDrawing - In the implementation block
@property (nonatomic,retain) UIAccessibilityCustomAction * hideControlsAction;                                    //@synthesize hideControlsAction=_hideControlsAction - In the implementation block
@property (nonatomic,retain) UIAccessibilityCustomAction * showControlsAction;                                    //@synthesize showControlsAction=_showControlsAction - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * previouslyActiveLayersByInstantReplayFingerIndex;              //@synthesize previouslyActiveLayersByInstantReplayFingerIndex=_previouslyActiveLayersByInstantReplayFingerIndex - In the implementation block
@property (nonatomic,retain) AXGestureRecorderStyleProvider * styleProvider;                                      //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<AXGestureRecorderViewDelegate> dataSource;                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) BOOL replayMode;                                                                     //@synthesize replayMode=_replayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id<AXGestureRecorderViewDelegate>)dataSource;
-(void)setDataSource:(id<AXGestureRecorderViewDelegate>)arg1 ;
-(void)_commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(id)accessibilityCustomActions;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didMoveToWindow;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStyleProvider:(AXGestureRecorderStyleProvider *)arg1 ;
-(AXGestureRecorderStyleProvider *)styleProvider;
-(void)freezeAllDynamicFingerPaths;
-(void)deleteAllFingerPaths;
-(void)hideStaticView;
-(void)insertDynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(UIAccessibilityCustomAction *)hideControlsAction;
-(void)_hideControls;
-(void)setHideControlsAction:(UIAccessibilityCustomAction *)arg1 ;
-(UIAccessibilityCustomAction *)showControlsAction;
-(void)_showControls;
-(void)setShowControlsAction:(UIAccessibilityCustomAction *)arg1 ;
-(id)_dynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(BOOL)replayMode;
-(void)fingerPathDidChange:(unsigned long long)arg1 ;
-(NSMutableDictionary *)previouslyActiveLayersByInstantReplayFingerIndex;
-(void)_performTransitionToStaticFingers:(id)arg1 transitionLayers:(id)arg2 hasExistingStaticFingers:(BOOL)arg3 ;
-(void)freezeAllDynamicFingerPathsWithInstantReplayOffset:(unsigned long long)arg1 ;
-(void)setPreviouslyActiveLayersByInstantReplayFingerIndex:(NSMutableDictionary *)arg1 ;
-(void)clearInstantReplayFingerPaths;
-(UIColor *)dynamicFingerPathBackgroundGradientPatternColor;
-(void)reloadDynamicFingerPathAtIndex:(unsigned long long)arg1 ;
-(void)updateInstantReplayAtIndex:(unsigned long long)arg1 withPartialPath:(id)arg2 ;
-(void)finishInstantReplayAtIndex:(unsigned long long)arg1 ;
-(UIView *)dynamicFingerPathsContainerView;
-(void)setDynamicFingerPathsContainerView:(UIView *)arg1 ;
-(void)setDynamicFingerPathBackgroundGradientPatternColor:(UIColor *)arg1 ;
-(CGRect)constrainedBoundsForDrawing;
-(void)setConstrainedBoundsForDrawing:(CGRect)arg1 ;
-(void)setReplayMode:(BOOL)arg1 ;
@end

