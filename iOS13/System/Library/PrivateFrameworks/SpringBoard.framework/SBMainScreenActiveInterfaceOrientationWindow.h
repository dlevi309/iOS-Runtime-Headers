/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	UIViewController* _sb_rootViewController;

}

@property (nonatomic,copy,readonly) NSString * debugName;                                                            //@synthesize debugName=_debugName - In the implementation block
@property (setter=sb_setRootViewController:,nonatomic,retain) UIViewController * sb_rootViewController;              //@synthesize sb_rootViewController=_sb_rootViewController - In the implementation block
@property (assign,nonatomic) BOOL passesTouchesThrough;                                                              //@synthesize passesTouchesThrough=_passesTouchesThrough - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)isActive;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)debugName;
-(void)setHidden:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setRootViewController:(id)arg1 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3 ;
-(id)initWithDebugName:(id)arg1 ;
-(void)sb_setRootViewController:(id)arg1 ;
-(void)setPassesTouchesThrough:(BOOL)arg1 ;
-(UIViewController *)sb_rootViewController;
-(BOOL)isDisablingInterfaceOrientationChanges;
-(BOOL)passesTouchesThrough;
-(void)disableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)enableInterfaceOrientationChangesForReason:(id)arg1 ;
-(void)_updateInterfaceOrientationToCurrentActiveInterfaceOrientationWithDuration:(double)arg1 ;
@end

