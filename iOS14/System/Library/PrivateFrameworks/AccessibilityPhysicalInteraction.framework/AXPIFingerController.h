/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPhysicalInteraction.framework/AccessibilityPhysicalInteraction
*/

#import <AccessibilityPhysicalInteraction/AccessibilityPhysicalInteraction-Structs.h>
#import <libobjc.A.dylib/AXPIFingerModelDelegate.h>
#import <libobjc.A.dylib/AXAssertionCoordinatorDelegate.h>

@protocol AXPIFingerAppearanceDelegate;
@class AXPIFingerContainerView, NSMutableArray, AXPIFingerEventSender, NSMutableDictionary, AXAssertionCoordinator, UIWindow, UIView, NSArray, NSString;

@interface AXPIFingerController : NSObject <AXPIFingerModelDelegate, AXAssertionCoordinatorDelegate> {

	AXPIFingerContainerView* _fingerContainerView;
	NSMutableArray* _fingerModels;
	AXPIFingerEventSender* _eventSender;
	unsigned long long _updateCount;
	NSMutableDictionary* _downInfosByIdentifier;
	NSMutableDictionary* _upInfosByIdentifier;
	BOOL _didMoveFingersDuringUpdate;
	/*^block*/id _gestureCompletion;
	AXAssertionCoordinator* _suppressVisualsAssertionCoodinator;
	BOOL _isPerformingGesture;
	id<AXPIFingerAppearanceDelegate> _appearanceDelegate;
	UIWindow* _fixedReferenceWindow;

}

@property (nonatomic,readonly) UIView * fingerContainerView;                                          //@synthesize fingerContainerView=_fingerContainerView - In the implementation block
@property (nonatomic,readonly) BOOL isPinchEnabled; 
@property (nonatomic,readonly) NSArray * fingerModels;                                                //@synthesize fingerModels=_fingerModels - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFingers; 
@property (assign,nonatomic) BOOL shouldAddRealEventFlag; 
@property (assign,nonatomic) unsigned long long senderID; 
@property (nonatomic,readonly) BOOL isPerformingGesture;                                              //@synthesize isPerformingGesture=_isPerformingGesture - In the implementation block
@property (assign,nonatomic,__weak) id<AXPIFingerAppearanceDelegate> appearanceDelegate;              //@synthesize appearanceDelegate=_appearanceDelegate - In the implementation block
@property (nonatomic,retain) UIWindow * fixedReferenceWindow;                                         //@synthesize fixedReferenceWindow=_fixedReferenceWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)beginUpdates;
-(void)endUpdates;
-(unsigned long long)senderID;
-(id)init;
-(void)cancelGesture;
-(void)setAppearanceDelegate:(id<AXPIFingerAppearanceDelegate>)arg1 ;
-(void)setSenderID:(unsigned long long)arg1 ;
-(id<AXPIFingerAppearanceDelegate>)appearanceDelegate;
-(BOOL)_isInUpdateBlock;
-(void)assertionCoordinator:(id)arg1 assertionsDidBecomeActive:(BOOL)arg2 ;
-(void)dealloc;
-(void)performGesture:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldAddRealEventFlag;
-(void)setShouldAddRealEventFlag:(BOOL)arg1 ;
-(void)performGesture:(id)arg1 ;
-(void)didUpdatePressStateForFingerModel:(id)arg1 ;
-(void)didUpdateSelectedStateForFingerModel:(id)arg1 ;
-(void)didUpdateLocationForFingerModel:(id)arg1 ;
-(void)didUpdateForceForFingerModel:(id)arg1 ;
-(void)didUpdateShapeForFingerModel:(id)arg1 ;
-(void)liftFingersUpAnimated:(BOOL)arg1 ;
-(void)_interruptGestureIfNeeded;
-(void)enumerateFingersUsingBlock:(/*^block*/id)arg1 ;
-(void)clearAllFingersAnimated:(BOOL)arg1 endPointForAnimation:(CGPoint)arg2 ;
-(void)_showFingerModels:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 shouldShowPinchChain:(BOOL)arg4 shouldReuseFingers:(BOOL)arg5 ;
-(CGPoint)midpointForFingers;
-(UIWindow *)fixedReferenceWindow;
-(CGPoint)_sceneReferencePointFromFingerLocation:(CGPoint)arg1 ;
-(id)_eventTouchInfoForFingerLocation:(CGPoint)arg1 force:(double)arg2 ;
-(id)_eventTouchInfoForFinger:(id)arg1 ;
-(void)pressFingersDownAnimated:(BOOL)arg1 sendTouchEvents:(BOOL)arg2 ;
-(void)liftFingersUpAnimated:(BOOL)arg1 sendTouchEvents:(BOOL)arg2 ;
-(void)cancelCircularProgressAnimation;
-(void)performCircularProgressAnimationOnFingersWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(id)_handleStartingFingersForGesture:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 midpoint:(CGPoint*)arg4 showFingers:(BOOL)arg5 ;
-(CGPoint)_fingerLocationFromSceneReferencePoint:(CGPoint)arg1 ;
-(void)showStartingFingersForGesture:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 ;
-(id)_showStartingFingersForGesture:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 ;
-(void)_performGesture:(id)arg1 shouldShowFingers:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_replayEventAtIndex:(unsigned long long)arg1 inGesture:(id)arg2 allFingerIdentifiers:(id)arg3 ;
-(void)_endGestureWithSuccess:(BOOL)arg1 ;
-(void)pressFingersDownAnimated:(BOOL)arg1 ;
-(id)_pointStringsFromFingers;
-(CGRect)rectForFingersAtPoints:(id)arg1 ;
-(void)animateToTapWithDuration:(double)arg1 ;
-(id)_touchInfosByIdentifierForPressedFingers;
-(void)_sendMoveEventIfNeededForFingerModel:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)_fingerIdentifierForIndex:(unsigned long long)arg1 ;
-(BOOL)isPinchEnabled;
-(unsigned long long)numberOfFingers;
-(void)showFingerModels:(id)arg1 animated:(BOOL)arg2 startPointForAnimation:(CGPoint)arg3 ;
-(void)showPinchFingersAnimated:(BOOL)arg1 midpoint:(CGPoint)arg2 ;
-(void)resetPinchFingers;
-(CGPoint)midpointOfStartingFingersForGesture:(id)arg1 ;
-(void)showStartingFingersForGesture:(id)arg1 ;
-(void)performWithoutPreparingGesture:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)fingerModelAtPoint:(CGPoint)arg1 ;
-(id)acquireAssertionToSuppressVisualsWithReason:(id)arg1 ;
-(id)legacyPressFingersDown;
-(id)legacyLiftFingersUp;
-(BOOL)moveFingersToPoints:(id)arg1 ;
-(void)performDownAtPoint:(CGPoint)arg1 ;
-(void)performMoveToPoint:(CGPoint)arg1 ;
-(void)performUpAtPoint:(CGPoint)arg1 ;
-(UIView *)fingerContainerView;
-(NSArray *)fingerModels;
-(BOOL)isPerformingGesture;
-(void)setFixedReferenceWindow:(UIWindow *)arg1 ;
@end
