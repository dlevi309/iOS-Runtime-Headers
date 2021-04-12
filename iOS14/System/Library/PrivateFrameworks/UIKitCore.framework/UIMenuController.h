/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)hideMenu;
-(id)_targetView;
-(CGRect)_targetRect;
-(CGRect)menuFrame;
-(void)update;
-(void)calloutBar:(id)arg1 willStartAnimation:(id)arg2 ;
-(void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2 ;
-(BOOL)isMenuVisible;
-(NSArray *)menuItems;
-(void)setArrowDirection:(long long)arg1 ;
-(void)showMenuFromView:(id)arg1 rect:(CGRect)arg2 ;
-(BOOL)_menuHidden;
-(void)setMenuItems:(NSArray *)arg1 ;
-(long long)arrowDirection;
-(void)_windowWillRotate:(id)arg1 ;
-(void)setMenuVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_updateAnimated:(BOOL)arg1 checkVisible:(BOOL)arg2 ;
-(void)_reparentCalloutBarIfNeeded;
-(void)_removeWindowWillRotateObserver;
-(void)_showMenuAnimated:(BOOL)arg1 ;
-(void)_hideMenuAnimated:(BOOL)arg1 ;
-(void)setMenuVisible:(BOOL)arg1 ;
-(void)hideMenuFromView:(id)arg1 ;
-(void)setTargetRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)_setTargetRect:(CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
@end

