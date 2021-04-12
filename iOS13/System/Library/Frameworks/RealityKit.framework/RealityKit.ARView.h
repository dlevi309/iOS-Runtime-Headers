/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/

#import <RealityKit/RealityKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ARSessionProviding.h>

@class ARSession, CALayer, NSArray;

@interface RealityKit.ARView : UIView <UIGestureRecognizerDelegate, ARSessionProviding> {

	 _scene;
	 __delegatePrivate;
	 initialized;
	 engineStartedByThisView;
	 environment;
	 __environmentEntity;
	 __enableAutomaticFrameRate;
	 __preferredFrameRate;
	 singleTapGesture;
	 engineWasRunningWhenLastInTheForeground;
	 backingLayer;
	 useCAMetalLayer;
	 pauseEngineOnLeaveForeground;
	 __renderGraphEmitter;
	 __forceLocalizedProbes;
	 __parallaxBackgroundProbe;
	 layerHandle;
	 updateSubscription;
	 renderSubscription;
	 realityAssetCollisionSubscription;
	 arSystem;
	 renderView;
	 interfaceOrientation;
	 lastInterfaceOrientation;
	 viewCounterRotating;
	 updateAfterCounterRotation;
	 sessionComponents;
	 __disableCounterRotation;
	 __disableComposition;
	 __nonARKitDevices;
	 enablePresentsWithTransaction;
	 presentsWithTransactionFrames;
	 __statisticsOptions;
	 __disableStatisticsRendering;

}

@property (readonly,nonatomic) CALayer * renderLayer; 
@property (assign,nonatomic) double contentScaleFactor; 
@property (retain,nonatomic) ARSession * session; 
@property (readonly,nonatomic) NSArray * entityAccessibilityWrappers; 
+(Class)layerClass;
-(double)contentScaleFactor;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(void)setContentScaleFactor:(double)arg1 ;
-(CALayer *)renderLayer;
-(void)willResignActiveWithNotification:(id)arg1 ;
-(void)restartEngineWithNotification:(id)arg1 ;
-(void)handleSingleTapWithRecognizer:(id)arg1 ;
-(void)didMoveToWindow;
-(void)windowWillRotateWithNotification:(id)arg1 ;
-(void)windowWillAnimateRotationWithNotification:(id)arg1 ;
-(void)windowDidRotateWithNotification:(id)arg1 ;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)handleRotation:(id)arg1 ;
-(void)handleScale:(id)arg1 ;
-(void)handleTranslation:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)entityAccessibilityWrappers;
-(float)distanceInMetersFromEntityAccessibilityWrapper:(id)arg1 ;
@end

