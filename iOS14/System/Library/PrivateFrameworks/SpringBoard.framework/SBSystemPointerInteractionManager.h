/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <UIKit/UIPointerInteractionDelegate.h>

@class UIPointerInteraction, NSMapTable, UIWindow, UIView, NSString;

@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate> {

	UIPointerInteraction* _pointerInteraction;
	NSMapTable* _registeredViewsToDelegates;
	UIWindow* _window;
	UIView* _activePointerRegionView;

}

@property (nonatomic,readonly) UIWindow * window;                             //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * activePointerRegionView;              //@synthesize activePointerRegionView=_activePointerRegionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(UIWindow *)window;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)unregisterView:(id)arg1 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(id)initWithPointerInteractionWindow:(id)arg1 ;
-(UIView *)activePointerRegionView;
@end

