/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@protocol _UICanvasComponentProviding;
@class UIScene, NSString;

@interface _UISceneCanvasComponent : NSObject <_UISceneComponentProviding> {

	Class canvasComponentClass;
	id<_UICanvasComponentProviding> _canvasComponent;

}

@property (nonatomic,readonly) id<_UICanvasComponentProviding> canvasComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(id)_actionHandlersForScene:(id)arg1 ;
-(void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(id)initWithCanvasComponent:(id)arg1 ;
-(id<_UICanvasComponentProviding>)canvasComponent;
@end

