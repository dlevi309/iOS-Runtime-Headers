/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isPlaying;
-(void)setPointOfView:(SCNNode *)arg1 ;
-(id)init;
-(3)projectPoint:;
-(void)setLoops:(BOOL)arg1 ;
-(BOOL)loops;
-(void)setPlaying:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAutoenablesDefaultLighting:(BOOL)arg1 ;
-(CGSize)viewportSize;
-(3)unprojectPoint:;
-(void)setSceneTime:(double)arg1 ;
-(void)commonInit;
-(SCNNode *)pointOfView;
-(id)hitTest:(CGPoint)arg1 options:(id)arg2 ;
-(double)sceneTime;
-(BOOL)autoenablesDefaultLighting;
-(void)setViewportSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)initWithViewportSize:(CGSize)arg1 ;
-(void)_renderForTime:(double)arg1 ;
-(void)setScnScene:(SCNScene *)arg1 ;
-(SCNScene *)scnScene;
-(void)_scnSceneDidUpdate:(id)arg1 ;
@end

