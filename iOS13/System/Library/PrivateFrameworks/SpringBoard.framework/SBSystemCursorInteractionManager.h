/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/_UICursorInteractionDelegate.h>

@class _UICursorInteraction, NSMapTable, UIWindow, UIView, NSString;

@interface SBSystemCursorInteractionManager : NSObject <_UICursorInteractionDelegate> {

	_UICursorInteraction* _cursorInteraction;
	NSMapTable* _registeredViewsToDelegates;
	UIWindow* _window;
	UIView* _activeCursorRegionView;

}

@property (nonatomic,readonly) UIWindow * window;                            //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * activeCursorRegionView;              //@synthesize activeCursorRegionView=_activeCursorRegionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindow *)window;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3 ;
-(void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3 ;
-(void)registerView:(id)arg1 delegate:(id)arg2 ;
-(void)unregisterView:(id)arg1 ;
-(id)initWithCursorInteractionWindow:(id)arg1 ;
-(UIView *)activeCursorRegionView;
@end

