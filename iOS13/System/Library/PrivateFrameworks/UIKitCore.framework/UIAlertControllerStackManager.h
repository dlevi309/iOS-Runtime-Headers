/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSMutableArray, UIScene, NSString;

@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding> {

	NSMutableArray* _alertControllerStack;
	NSMutableArray* _hiddenAlertControllers;
	UIScene* _scene;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
-(id)initWithScene:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_alertControllerWillAppear:(id)arg1 ;
-(void)_alertControllerDidAppear:(id)arg1 ;
-(void)_alertControllerWillDisappear:(id)arg1 ;
-(void)_alertControllerDidDisappear:(id)arg1 ;
-(BOOL)_alertControllerShouldBeTrackedInStack:(id)arg1 ;
-(void)_willShowAlertController:(id)arg1 ;
-(void)_addAlertControllerToStack:(id)arg1 ;
-(void)_hideStackedAlertControllers;
-(void)_willHideAlertController:(id)arg1 ;
-(void)_removeAlertControllerFromStack:(id)arg1 ;
-(void)_didHideAlertController:(id)arg1 ;
-(id)_topAlertControllerInStack;
-(void)_showHiddenStackedAlertControllers;
-(long long)_alertControllerStackCount;
@end

