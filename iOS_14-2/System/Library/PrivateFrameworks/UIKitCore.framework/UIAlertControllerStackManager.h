/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneComponentProviding.h>

@class NSMutableArray, UIScene, NSString;

@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding> {

	NSMutableArray* _alertControllerStack;
	NSMutableArray* _hiddenAlertControllers;
	UIScene* _scene;

}

@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(long long)_alertControllerStackCount;
-(void)_didHideAlertController:(id)arg1 ;
-(void)_alertControllerDidDisappear:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)_hideStackedAlertControllers;
-(void)_willHideAlertController:(id)arg1 ;
-(void)_willShowAlertController:(id)arg1 ;
-(void)_alertControllerDidAppear:(id)arg1 ;
-(void)_removeAlertControllerFromStack:(id)arg1 ;
-(void)_showHiddenStackedAlertControllers;
-(id)_topAlertControllerInStack;
-(BOOL)_alertControllerShouldBeTrackedInStack:(id)arg1 ;
-(void)_alertControllerWillAppear:(id)arg1 ;
-(void)_addAlertControllerToStack:(id)arg1 ;
-(void)_alertControllerWillDisappear:(id)arg1 ;
@end

