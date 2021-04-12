/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
*/

@class SCNNode, SCNView;


@protocol SCNEventHandler <SCNCameraControlConfiguration>
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL enableFreeCamera; 
@property (nonatomic,readonly) SCNNode * freeCamera; 
@property (assign,nonatomic) SCNView * view; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(SCNView *)view;
-(void)setView:(id)arg1;
-(id)gestureRecognizers;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewWillDrawAtTime:(double)arg1;
-(void)viewDidDrawAtTime:(double)arg1;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(BOOL)wantsRedraw;
-(void)setEnableFreeCamera:(BOOL)arg1;
-(SCNNode *)freeCamera;
-(BOOL)enableFreeCamera;
-(void)activateFreeCamera;

@end

