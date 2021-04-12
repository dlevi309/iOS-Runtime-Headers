/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setView:(id)arg1;
-(SCNView *)view;
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

