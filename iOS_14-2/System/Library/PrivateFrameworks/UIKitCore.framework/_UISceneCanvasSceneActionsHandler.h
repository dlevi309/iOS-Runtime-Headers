/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4 ;
-(id)initWithCanvasSceneActionsHandler:(id)arg1 ;
-(id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4 ;
@end

