/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/RealityKit.framework/RealityKit
*/

#import <RealityKit/RealityKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ARSessionProviding.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class ARSession, CALayer, NSArray;

@interface RealityKit.ARView : UIView <ARSessionProviding, UIGestureRecognizerDelegate> {

	 _scene;
	 __delegatePrivate;
	 initialized;
	 engineStartedByThisView;
	 currentIBL;
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

@property (retain,nonatomic) ARSession * session; 
@property (readonly,nonatomic) CALayer * renderLayer; 
@property (assign,nonatomic) double contentScaleFactor; 
@property (readonly,nonatomic) NSArray * entityAccessibilityWrappers; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)didMoveToSuperview;
-(ARSession *)session;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(double)contentScaleFactor;
-(void)setSession:(ARSession *)arg1 ;
-(void)didMoveToWindow;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)handleRotation:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)handleScale:(id)arg1 ;
-(void)handleTranslation:(id)arg1 ;
-(NSArray *)entityAccessibilityWrappers;
-(float)distanceInMetersFromEntityAccessibilityWrapper:(id)arg1 ;
-(BOOL)handleTapForEntityAccessibilityWrapper:(id)arg1 ;
-(CALayer *)renderLayer;
-(void)willResignActiveWithNotification:(id)arg1 ;
-(void)restartEngineWithNotification:(id)arg1 ;
-(void)windowWillRotateWithNotification:(id)arg1 ;
-(void)windowWillAnimateRotationWithNotification:(id)arg1 ;
-(void)windowDidRotateWithNotification:(id)arg1 ;
-(void)handleSingleTapWithRecognizer:(id)arg1 ;
@end

