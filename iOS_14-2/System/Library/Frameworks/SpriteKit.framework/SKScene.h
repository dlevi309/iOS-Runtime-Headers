/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKEffectNode.h>

@protocol SKSceneDelegate;
@class NSMapTable, NSMutableArray, SKPhysicsBody, SKNode, AVAudioEngine, SKPhysicsWorld, SKCameraNode, AVAudioEnvironmentNode, PKPhysicsWorld, UIColor, SKView;

@interface SKScene : SKEffectNode {

	double _lastUpdate;
	double _pausedTime;
	CGRect _visibleRect;
	NSMapTable* _touchMap;
	NSMutableArray* _allChildenWithConstraints;
	CGRect _bounds;
	BOOL _isSetup;
	BOOL _usesExplicitUpdate;
	BOOL _usesExplicitRender;
	SKPhysicsBody* _scenePinBody;
	id _view;
	SKCSceneNode* _skcSceneNode;
	SKNode* _listener;
	AVAudioEngine* _audioEngine;
	BOOL __needsUpdate;
	BOOL __needsRender;
	SKPhysicsWorld* _physicsWorld;
	SKCameraNode* _camera;
	id<SKSceneDelegate> _delegate;
	AVAudioEnvironmentNode* _avAudioEnvironmentNode;
	PKPhysicsWorld* __pkPhysicsWorld;

}

@property (assign) BOOL _usesExplicitUpdate; 
@property (assign) BOOL _usesExplicitRender; 
@property (assign) BOOL _needsUpdate;                                                      //@synthesize _needsUpdate=__needsUpdate - In the implementation block
@property (assign) BOOL _needsRender;                                                      //@synthesize _needsRender=__needsRender - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                           //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) CGSize visibleRectSize; 
@property (assign,nonatomic) CGPoint visibleRectCenter; 
@property (nonatomic,retain) AVAudioEnvironmentNode * avAudioEnvironmentNode;              //@synthesize avAudioEnvironmentNode=_avAudioEnvironmentNode - In the implementation block
@property (nonatomic,retain) PKPhysicsWorld * _pkPhysicsWorld;                             //@synthesize _pkPhysicsWorld=__pkPhysicsWorld - In the implementation block
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) long long scaleMode; 
@property (assign,nonatomic,__weak) SKCameraNode * camera;                                 //@synthesize camera=_camera - In the implementation block
@property (assign,nonatomic,__weak) SKNode * listener; 
@property (nonatomic,retain,readonly) AVAudioEngine * audioEngine; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (assign,nonatomic,__weak) id<SKSceneDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,readonly) SKPhysicsWorld * physicsWorld;                              //@synthesize physicsWorld=_physicsWorld - In the implementation block
@property (nonatomic,__weak,readonly) SKView * view; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)sceneWithContentsOfFile:(id)arg1 ;
+(id)sceneWithSize:(CGSize)arg1 ;
+(id)sceneWithContentsOfFile:(id)arg1 size:(CGSize)arg2 ;
-(SKCameraNode *)camera;
-(CGPoint)position;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)_update:(double)arg1 ;
-(void)update:(double)arg1 ;
-(double)zRotation;
-(CGRect)visibleRect;
-(id)init;
-(id<SKSceneDelegate>)delegate;
-(id)initWithSize:(CGSize)arg1 ;
-(void)didMoveToView:(id)arg1 ;
-(CGSize)size;
-(void)setZPosition:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(BOOL)_isDirty;
-(void)setPaused:(BOOL)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(CGPoint)anchorPoint;
-(void)set_needsUpdate:(BOOL)arg1 ;
-(UIColor *)backgroundColor;
-(void)setZRotation:(double)arg1 ;
-(void)setDelegate:(id<SKSceneDelegate>)arg1 ;
-(AVAudioEngine *)audioEngine;
-(double)xScale;
-(double)yScale;
-(id)description;
-(SKNode *)listener;
-(SKView *)view;
-(void)_setDirty;
-(long long)scaleMode;
-(void)setCamera:(SKCameraNode *)arg1 ;
-(id)parentFocusEnvironment;
-(void)setScale:(double)arg1 ;
-(void)setListener:(SKNode *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)_setNeedsRender;
-(BOOL)_needsUpdate;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setScaleMode:(long long)arg1 ;
-(void)_setNeedsUpdate;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(double)zPosition;
-(BOOL)_needsRender;
-(void)setXScale:(double)arg1 ;
-(void)setYScale:(double)arg1 ;
-(SKPhysicsWorld *)physicsWorld;
-(void)_setBackgroundContentsWithBuffer:(CVBufferRef)arg1 ;
-(void)_notifyNextDirtyState;
-(void)willMoveFromView:(id)arg1 ;
-(void)_didMoveToView:(id)arg1 ;
-(id)_getFocusNodes;
-(AVAudioEnvironmentNode *)avAudioEnvironmentNode;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)didChangeSize:(CGSize)arg1 ;
-(BOOL)_usesExplicitUpdate;
-(void)_willMoveFromView:(id)arg1 ;
-(void)set_pkPhysicsWorld:(PKPhysicsWorld *)arg1 ;
-(void)set_usesExplicitRender:(BOOL)arg1 ;
-(void)set_usesExplicitUpdate:(BOOL)arg1 ;
-(void)sceneDidLoad;
-(void)checkAudioEngine;
-(void)setAvAudioEnvironmentNode:(AVAudioEnvironmentNode *)arg1 ;
-(void)handleAVAudioEngineInterruption:(id)arg1 ;
-(void)didEvaluateActions;
-(void)didSimulatePhysics;
-(void)didApplyConstraints;
-(void)didFinishUpdate;
-(BOOL)_hasConstraints;
-(void)_registerConstraintsForNode:(id)arg1 ;
-(void)_removeConstraintsForNode:(id)arg1 ;
-(CGPoint)convertPointFromParent:(CGPoint)arg1 ;
-(CGPoint)convertPointToParent:(CGPoint)arg1 ;
-(void)set_anchorPoint:(CGPoint)arg1 ;
-(CGPoint)convertPointFromView:(CGPoint)arg1 ;
-(CGPoint)convertPointToView:(CGPoint)arg1 ;
-(void)setVisibleRectSize:(CGSize)arg1 ;
-(CGSize)visibleRectSize;
-(void)setVisibleRectCenter:(CGPoint)arg1 ;
-(CGPoint)visibleRectCenter;
-(void)set_needsRender:(BOOL)arg1 ;
-(PKPhysicsWorld *)_pkPhysicsWorld;
-(BOOL)_usesExplicitRender;
-(void)willRenderContent;
-(void)didContinueContact:(id)arg1 ;
@end

