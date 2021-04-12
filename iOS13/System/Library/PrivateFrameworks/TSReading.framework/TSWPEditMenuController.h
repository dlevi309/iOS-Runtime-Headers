/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSKKeyboardObserver.h>

@class UIView, NSString;

@interface TSWPEditMenuController : NSObject <TSKKeyboardObserver> {

	int _menuState;
	BOOL _showMenuOnKeyboard;
	BOOL _isBeginningEditing;
	UIView* _targetView;
	CGRect _targetRect;

}

@property (assign,nonatomic) BOOL showMenuOnKeyboard;                 //@synthesize showMenuOnKeyboard=_showMenuOnKeyboard - In the implementation block
@property (assign,nonatomic) CGRect targetRect;                       //@synthesize targetRect=_targetRect - In the implementation block
@property (assign,nonatomic,__weak) UIView * targetView;              //@synthesize targetView=_targetView - In the implementation block
@property (assign,nonatomic) BOOL isBeginningEditing;                 //@synthesize isBeginningEditing=_isBeginningEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAnimating;
+(void)hideEditMenu;
+(id)p_sharedEditMenuController;
+(int)menuState;
+(id)sharedEditMenuController;
+(void)showEditMenuAtTargetRect:(CGRect)arg1 canCenterHUD:(BOOL)arg2 interactiveCanvasController:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(UIView *)targetView;
-(void)setTargetView:(UIView *)arg1 ;
-(CGRect)targetRect;
-(void)setTargetRect:(CGRect)arg1 ;
-(void)keyboardDidShowOrDock:(id)arg1 ;
-(void)keyboardDidHideOrUndock:(id)arg1 ;
-(void)p_setMenuVisible:(id)arg1 ;
-(void)p_willShowMenu:(id)arg1 ;
-(void)p_didShowMenu:(id)arg1 ;
-(void)p_willHideMenu:(id)arg1 ;
-(void)p_didHideMenu:(id)arg1 ;
-(void)p_didAnimateKeyboard;
-(void)p_clearIsBeginningEditing;
-(void)setIsBeginningEditing:(BOOL)arg1 ;
-(BOOL)showMenuOnKeyboard;
-(void)setShowMenuOnKeyboard:(BOOL)arg1 ;
-(BOOL)isBeginningEditing;
@end

