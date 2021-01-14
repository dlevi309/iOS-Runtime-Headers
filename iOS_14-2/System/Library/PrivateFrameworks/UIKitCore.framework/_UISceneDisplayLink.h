/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSMutableArray, CADisplayLink, UIScene, NSString;

@interface _UISceneDisplayLink : NSObject <_UISceneComponentProviding> {

	NSMutableArray* _targetsAndActions;
	CADisplayLink* _displayLink;
	UIScene* _scene;

}

@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sceneDisplayLinkForWindowScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)unregisterTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_updateStatus;
-(void)_displayLinkTick:(id)arg1 ;
-(void)registerTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3 ;
@end

