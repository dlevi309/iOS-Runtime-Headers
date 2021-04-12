/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class UIScene, NSString;

@interface UIPointerLockState : NSObject <_UISceneComponentProviding> {

	long long _status;
	UIScene* _scene;

}

@property (getter=isLocked,nonatomic,readonly) BOOL locked; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(BOOL)isLocked;
-(void)_setScene:(id)arg1 ;
-(id)_settingsDiffActionsForScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)_windowScene;
-(id)windowHostingScene;
-(void)_pointerLockStatusUpdated;
-(void)_preferredPointerLockStatusUpdated;
@end

