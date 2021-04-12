/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {

	SKC3DNode* _skc3DNode;

}

@property (assign) CGSize viewportSize; 
@property (nonatomic,retain) SCNScene * scnScene; 
@property (assign,nonatomic) double sceneTime; 
@property (getter=isPlaying) BOOL playing; 
@property (assign,nonatomic) BOOL loops; 
@property (nonatomic,retain) SCNNode * pointOfView; 
@property (assign,nonatomic) BOOL autoenablesDefaultLighting; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithViewportSize:(CGSize)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)commonInit;
-(BOOL)isPlaying;
-(void)setPlaying:(BOOL)arg1 ;
-(BOOL)loops;
-(void)setLoops:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(SCNNode *)pointOfView;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(double)sceneTime;
-(void)setSceneTime:(double)arg1 ;
-(BOOL)autoenablesDefaultLighting;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(3)projectPoint:;
-(3)unprojectPoint:;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(CGSize)viewportSize;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)setViewportSize:(CGSize)arg1 ;
-(void)_renderForTime:(double)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(void)_scnSceneDidUpdate:(id)arg1 ;
@end

