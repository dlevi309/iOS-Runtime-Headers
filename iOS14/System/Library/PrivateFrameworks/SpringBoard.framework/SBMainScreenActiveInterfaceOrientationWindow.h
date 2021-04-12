/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWindow.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBUIActiveOrientationObserver.h>

@class NSCountedSet, NSString, UIViewController;

@interface SBMainScreenActiveInterfaceOrientationWindow : SBWindow <BSDescriptionProviding, SBUIActiveOrientationObserver> {

	NSCountedSet* _orientationUpdateDisableReasons;
	BOOL _passesTouchesThrough;
	NSString* _debugName;
	UIViewController* _contentViewController;

}

@property (nonatomic,copy,readonly) NSString * debugName;                                                            //@synthesize debugName=_debugName - In the implementation block
@property (setter=setContentViewController:,nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) BOOL passesTouchesThrough;                                                              //@synthesize passesTouchesThrough=_passesTouchesThrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)layoutContentViewControllerWithConstraints;
-(id)succinctDescription;
-(void)setPassesTouchesThrough:(BOOL)arg1 ;
-(BOOL)_canBecomeKeyWindow;
-(void)setHidden:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isActive;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)initWithDebugName:(id)arg1 ;
-(void)setRootViewController:(id)arg1 ;
-(UIViewController *)contentViewController;
-(NSString *)description;
-(BOOL)passesTouchesThrough;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(id)succinctDescriptionBuilder;
-(NSString *)debugName;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(BOOL)isDisablingInterfaceOrientationChanges;
-(void)disableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)enableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1 ;
-(unsigned long long)effectiveRootViewControllerSupportedInterfaceOrientations;
@end

