/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UICalloutBarDelegate.h>

@class UIView, NSString, NSArray;

@interface UIMenuController : NSObject <UICalloutBarDelegate> {

	CGRect _targetRect;
	UIView* _targetView;
	long long _arrowDirection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isMenuVisible,nonatomic) BOOL menuVisible; 
@property (assign,nonatomic) long long arrowDirection;                           //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,copy) NSArray * menuItems; 
@property (nonatomic,readonly) CGRect menuFrame; 
+(id)sharedMenuController;
-(id)init;
-(void)dealloc;
-(void)update;
-(BOOL)isMenuVisible;
-(void)showMenuFromView:(id)arg1 rect:(CGRect)arg2 ;
-(long long)arrowDirection;
-(void)setArrowDirection:(long long)arg1 ;
-(id)_targetView;
-(CGRect)_targetRect;
-(CGRect)menuFrame;
-(void)calloutBar:(id)arg1 willStartAnimation:(id)arg2 ;
-(void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2 ;
-(void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2 ;
-(void)_reparentCalloutBarIfNeeded;
-(void)_windowWillRotate:(id)arg1 ;
-(void)_removeWindowWillRotateObserver;
-(BOOL)_menuHidden;
-(void)_showMenuAnimated:(BOOL)arg1 ;
-(void)_hideMenuAnimated:(BOOL)arg1 ;
-(void)hideMenu;
-(void)setMenuVisible:(BOOL)arg1 ;
-(void)hideMenuFromView:(id)arg1 ;
-(void)setTargetRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setTargetRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)setMenuItems:(NSArray *)arg1 ;
-(NSArray *)menuItems;
@end

