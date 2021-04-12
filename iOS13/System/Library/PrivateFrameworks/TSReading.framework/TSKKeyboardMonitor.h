/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


@protocol TSKKeyboardObserver;
#import <TSReading/TSReading-Structs.h>
@class UIWindow, NSMutableArray;

@interface TSKKeyboardMonitor : NSObject {

	UIWindow* _rootWindow;
	BOOL _keyboardIsVisibleAndDocked;
	BOOL _keyboardIsAnimatingInOrDocking;
	BOOL _keyboardIsAnimatingOutOrUndocking;
	BOOL _weAreFakingAHideEvent;
	BOOL _lastHideWasFake;
	BOOL _suppressDidHide;
	CGRect _keyboardFrame;
	double _onScreenHeight;
	CFArrayRef _keyboardObservers;
	NSMutableArray* _completionBlocks;
	id<TSKKeyboardObserver> _exclusiveKeyboardObserver;
	double _keyboardAnimationDuration;

}

@property (assign,nonatomic) UIWindow * rootWindow;                       //@synthesize rootWindow=_rootWindow - In the implementation block
@property (readonly) BOOL keyboardIsVisibleAndDocked;                     //@synthesize keyboardIsVisibleAndDocked=_keyboardIsVisibleAndDocked - In the implementation block
@property (readonly) BOOL keyboardIsAnimating; 
@property (readonly) BOOL keyboardIsAnimatingInOrDocking;                 //@synthesize keyboardIsAnimatingInOrDocking=_keyboardIsAnimatingInOrDocking - In the implementation block
@property (readonly) BOOL keyboardIsAnimatingOutOrUndocking;              //@synthesize keyboardIsAnimatingOutOrUndocking=_keyboardIsAnimatingOutOrUndocking - In the implementation block
@property (readonly) double onScreenHeight;                               //@synthesize onScreenHeight=_onScreenHeight - In the implementation block
@property (readonly) CGRect keyboardFrame;                                //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (readonly) double keyboardAnimationDuration;                    //@synthesize keyboardAnimationDuration=_keyboardAnimationDuration - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedKeyboardMonitor;
+(id)_singletonAlloc;
+(void)addKeyboardObserver:(id)arg1 ;
+(void)removeKeyboardObserver:(id)arg1 ;
+(void)setModalKeyboardObserver:(id)arg1 ;
+(void)setKeyboardHiddenByModalObserver:(id)arg1 ;
+(BOOL)keyboardIsVisibleAndDocked;
+(BOOL)keyboardIsAnimating;
+(BOOL)keyboardIsAnimatingInOrDocking;
+(BOOL)keyboardIsAnimatingOutOrUndocking;
+(void)afterKeyboardAnimationPerformBlock:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)keyboardFrame;
-(void)addKeyboardObserver:(id)arg1 ;
-(void)removeKeyboardObserver:(id)arg1 ;
-(void)p_installKeyboardNotifications;
-(void)p_removeKeyboardNotifications;
-(void)setModalKeyboardObserver:(id)arg1 ;
-(void)setKeyboardHiddenByModalObserver:(id)arg1 ;
-(BOOL)keyboardIsVisibleAndDocked;
-(BOOL)keyboardIsAnimating;
-(BOOL)keyboardIsAnimatingInOrDocking;
-(BOOL)keyboardIsAnimatingOutOrUndocking;
-(void)afterKeyboardAnimationPerformBlock:(/*^block*/id)arg1 ;
-(id)p_keyboardFrameView;
-(void)p_keyboardWillShowOrDock:(id)arg1 ;
-(void)p_keyboardDidShowOrDock:(id)arg1 ;
-(void)p_keyboardWillHideOrUndock:(id)arg1 ;
-(void)p_keyboardDidHideOrUndock:(id)arg1 ;
-(void)p_KeyboardWillChangeFrame:(id)arg1 ;
-(void)p_KeyboardDidChangeFrame:(id)arg1 ;
-(void)p_updateKeyboardInfoFromNotification:(id)arg1 ;
-(void)p_enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)p_performAnimationCompletionBlocksWithVisible:(BOOL)arg1 ;
-(void)setRootWindow:(UIWindow *)arg1 ;
-(double)keyboardHeightInView:(id)arg1 ;
-(UIWindow *)rootWindow;
-(double)onScreenHeight;
-(double)keyboardAnimationDuration;
@end

