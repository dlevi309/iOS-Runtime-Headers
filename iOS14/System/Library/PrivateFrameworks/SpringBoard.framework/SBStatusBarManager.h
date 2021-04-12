/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, UIWindow, NSMutableArray, NSString;

@interface SBStatusBarManager : NSObject <BSDescriptionProviding> {

	NSHashTable* _statusBars;
	UIWindow* _recycledStatusBarsContainerWindow;
	NSMutableArray* _recycledStatusBars;
	NSHashTable* _hideStatusBarAssertions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)succinctDescription;
-(void)_removeStatusBarContainer:(id)arg1 ;
-(id)init;
-(id)frontmostStatusBarStyleRequest;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isFrontmostStatusBarPartHidden:(long long)arg1 ;
-(NSString *)debugDescription;
-(id)acquireHideFrontmostStatusBarAssertionForReason:(id)arg1 ;
-(id)createStatusBarWithReason:(id)arg1 withFrame:(CGRect)arg2 ;
-(NSString *)description;
-(id)createStatusBarWithReason:(id)arg1 ;
-(id)leadingStatusBarStyleRequest;
-(void)recycleStatusBar:(id)arg1 ;
-(id)trailingStatusBarStyleRequest;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)handleStatusBarTapWithEvent:(id)arg1 ;
-(BOOL)isFrontmostStatusBarHidden;
@end

