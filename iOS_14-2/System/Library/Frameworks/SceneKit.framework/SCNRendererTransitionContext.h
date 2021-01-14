/*
* Generated on Thursday, January 14, 2021 at 2:27:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/


#import <SceneKit/SceneKit-Structs.h>
@class SKTransition, SCNScene, SCNNode, SCNOffscreenRenderer;

@interface SCNRendererTransitionContext : NSObject {

	double _transitionStartTime;
	SKTransition* _transition;
	SCNScene* _outgoingScene;
	SCNNode* _outgoingPointOfView;
	/*^block*/id completionHandler;
	C3DFXPassRef _transitionPass;
	SCNOffscreenRenderer* _renderers[2];

}

@property (nonatomic,retain) SCNScene * outgoingScene;                   //@synthesize outgoingScene=_outgoingScene - In the implementation block
@property (nonatomic,retain) SKTransition * transition;                  //@synthesize transition=_transition - In the implementation block
@property (assign,nonatomic) double transitionStartTime;                 //@synthesize transitionStartTime=_transitionStartTime - In the implementation block
@property (nonatomic,retain) SCNNode * outgoingPointOfView;              //@synthesize outgoingPointOfView=_outgoingPointOfView - In the implementation block
-(void)setTransition:(SKTransition *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKTransition *)transition;
-(void)dealloc;
-(double)transitionStartTime;
-(void)setTransitionStartTime:(double)arg1 ;
-(SCNNode *)outgoingPointOfView;
-(void)setOutgoingPointOfView:(SCNNode *)arg1 ;
-(SCNScene *)outgoingScene;
-(void)setOutgoingScene:(SCNScene *)arg1 ;
-(C3DFXPassRef)transitionPass;
-(id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(CGSize)arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5 ;
@end

