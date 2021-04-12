/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PKRulerDelegate, PKRulerHostingDelegate;
@class UIView, PKRulerGestureRecognizer, PKRulerView, PKRulerLayer, UIImpactFeedbackGenerator, NSString;

@interface PKRulerController : NSObject <UIGestureRecognizerDelegate> {

	UIView* _rulerHostingView;
	BOOL _wantsSharedRuler;
	BOOL _isInteractingWithRuler;
	BOOL _rulerIsRotating;
	BOOL _rulerWasShownViaGesture;
	BOOL _canRulerSnapToAngle;
	BOOL _lastTouchWasMaskedByRuler;
	BOOL _rulerSnappedToAngle;
	PKRulerGestureRecognizer* _rulerGestureRecognizer;
	id<PKRulerDelegate> _delegate;
	id<PKRulerHostingDelegate> _rulerHostingDelegate;
	PKRulerView* _rulerView;
	PKRulerLayer* _rulerLayer;
	UIImpactFeedbackGenerator* _snapImpactBehavior;
	SCD_Struct_PK31 _rulerState;
	SCD_Struct_PK31 _previousRulerState;
	CGAffineTransform _rulerStartTransform;
	CGAffineTransform _defaultRulerTransform;

}

@property (nonatomic,retain) PKRulerLayer * rulerLayer;                                           //@synthesize rulerLayer=_rulerLayer - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK31 rulerState;                                          //@synthesize rulerState=_rulerState - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK31 previousRulerState;                                  //@synthesize previousRulerState=_previousRulerState - In the implementation block
@property (assign,nonatomic) BOOL rulerWasShownViaGesture;                                        //@synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture - In the implementation block
@property (assign,nonatomic) BOOL isInteractingWithRuler;                                         //@synthesize isInteractingWithRuler=_isInteractingWithRuler - In the implementation block
@property (assign,nonatomic) BOOL canRulerSnapToAngle;                                            //@synthesize canRulerSnapToAngle=_canRulerSnapToAngle - In the implementation block
@property (assign,nonatomic) BOOL lastTouchWasMaskedByRuler;                                      //@synthesize lastTouchWasMaskedByRuler=_lastTouchWasMaskedByRuler - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * snapImpactBehavior;                      //@synthesize snapImpactBehavior=_snapImpactBehavior - In the implementation block
@property (assign,nonatomic) BOOL rulerSnappedToAngle;                                            //@synthesize rulerSnappedToAngle=_rulerSnappedToAngle - In the implementation block
@property (nonatomic,retain) PKRulerGestureRecognizer * rulerGestureRecognizer;                   //@synthesize rulerGestureRecognizer=_rulerGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PKRulerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<PKRulerHostingDelegate> rulerHostingDelegate;              //@synthesize rulerHostingDelegate=_rulerHostingDelegate - In the implementation block
@property (nonatomic,readonly) BOOL rulerSelected; 
@property (assign,nonatomic) BOOL rulerIsRotating;                                                //@synthesize rulerIsRotating=_rulerIsRotating - In the implementation block
@property (nonatomic,retain) PKRulerView * rulerView;                                             //@synthesize rulerView=_rulerView - In the implementation block
@property (assign,nonatomic) CGAffineTransform rulerStartTransform;                               //@synthesize rulerStartTransform=_rulerStartTransform - In the implementation block
@property (assign,nonatomic) CGAffineTransform defaultRulerTransform;                             //@synthesize defaultRulerTransform=_defaultRulerTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRulerView;
-(void)dealloc;
-(id<PKRulerDelegate>)delegate;
-(void)setDelegate:(id<PKRulerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(void)hideUI;
-(void)setRulerHostingDelegate:(id<PKRulerHostingDelegate>)arg1 ;
-(id<PKRulerHostingDelegate>)rulerHostingDelegate;
-(PKRulerView *)rulerView;
-(void)showRuler;
-(void)hideRuler;
-(void)setupGestures;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(BOOL)rulerSelected;
-(void)drawingBegan:(id)arg1 ;
-(void)drawingMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)drawingEnded:(id)arg1 ;
-(void)drawingCancelled:(/*^block*/id)arg1 ;
-(PKRulerLayer *)rulerLayer;
-(BOOL)rulerIsRotating;
-(CGAffineTransform)pixelSnapRulerTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)defaultRulerTransform;
-(void)setRulerStartTransform:(CGAffineTransform)arg1 ;
-(void)setRulerIsRotating:(BOOL)arg1 ;
-(void)setRulerLayer:(PKRulerLayer *)arg1 ;
-(CGAffineTransform)rulerStartTransform;
-(CGAffineTransform)canvasTransform;
-(void)hideRulerAnimated:(BOOL)arg1 ;
-(CGRect)_rulerFrame;
-(void)_adjustViewForHostingRulerView;
-(BOOL)_enableRulerOnCanvasIfSharedRulerIsVisible;
-(id)_viewForHostingRuler;
-(void)_configureRuler;
-(void)adjustFrames;
-(PKRulerGestureRecognizer *)rulerGestureRecognizer;
-(void)setRulerWasShownViaGesture:(BOOL)arg1 ;
-(void)setRulerState:(SCD_Struct_PK31)arg1 ;
-(void)startRulerDrawing;
-(void)setLastTouchWasMaskedByRuler:(BOOL)arg1 ;
-(void)endRulerDrawing;
-(CGAffineTransform)_transformFromRulerViewToTiledView;
-(void)resetRulerTouches;
-(void)rulerMoveGesture:(id)arg1 ;
-(void)setRulerGestureRecognizer:(PKRulerGestureRecognizer *)arg1 ;
-(void)eatPencilGesture:(id)arg1 ;
-(CGAffineTransform)angleSnapRulerTransform:(CGAffineTransform)arg1 aroundOrigin:(CGPoint)arg2 ;
-(void)updateAngle:(id)arg1 ;
-(void)setIsInteractingWithRuler:(BOOL)arg1 ;
-(SCD_Struct_PK31)rulerState;
-(void)setPreviousRulerState:(SCD_Struct_PK31)arg1 ;
-(void)setRulerSnappedToAngle:(BOOL)arg1 ;
-(UIImpactFeedbackGenerator *)snapImpactBehavior;
-(void)setSnapImpactBehavior:(UIImpactFeedbackGenerator *)arg1 ;
-(void)updateRuler:(id)arg1 ;
-(BOOL)rulerWasShownViaGesture;
-(CGAffineTransform)ensureRulerFullyOnscreen:(CGAffineTransform)arg1 ;
-(double)getRulerCenterTValueOnScreenForTransform:(CGAffineTransform)arg1 ;
-(void)setCanRulerSnapToAngle:(BOOL)arg1 ;
-(SCD_Struct_PK31)previousRulerState;
-(BOOL)canRulerSnapToAngle;
-(BOOL)rulerSnappedToAngle;
-(void)resetRuler;
-(void)resetRulerTransform;
-(void)cancelNonDrawingGestures;
-(BOOL)isInteractingWithRuler;
-(void)setRulerView:(PKRulerView *)arg1 ;
-(void)setDefaultRulerTransform:(CGAffineTransform)arg1 ;
-(BOOL)lastTouchWasMaskedByRuler;
@end

