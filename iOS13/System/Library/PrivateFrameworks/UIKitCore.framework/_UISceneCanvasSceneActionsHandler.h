/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneBSActionHandler.h>

@protocol _UICanvasSceneActionsHandler;
@class NSString;

@interface _UISceneCanvasSceneActionsHandler : NSObject <_UISceneBSActionHandler> {

	id<_UICanvasSceneActionsHandler> _canvasSceneActionsHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneArrayFromCanvasArray:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)initWithCanvasSceneActionsHandler:(id)arg1 ;
-(id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4 ;
-(id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4 ;
@end

