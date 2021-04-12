/*
* Generated on Thursday, January 14, 2021 at 2:20:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@interface _UIPopoverSceneManager : NSObject
+(id)sharedPopoverSceneManager;
-(void)closePopoverSceneForIdentifier:(id)arg1 popoverWindow:(id)arg2 returningToWindow:(id)arg3 withTransitionCoordinator:(id)arg4 ;
-(void)updatePopoverSceneWithIdentifier:(id)arg1 sourceRectInParentUIWindow:(CGRect)arg2 contentSize:(CGSize)arg3 preferredHorizontalAlignment:(long long)arg4 showsArrow:(BOOL)arg5 isRTL:(BOOL)arg6 ;
-(id)createPopoverSceneForContentViewController:(id)arg1 sourceView:(id)arg2 sourceRectInParentUIWindow:(CGRect)arg3 contentSize:(CGSize)arg4 permittedArrowDirections:(long long)arg5 showsArrow:(BOOL)arg6 userInterfaceStyle:(long long)arg7 withCompletionBlock:(/*^block*/id)arg8 ;
-(void)detachPopoverSceneWithIdentifier:(id)arg1 fromPoint:(CGPoint)arg2 withCompletionCallback:(/*^block*/id)arg3 ;
-(void)updateSupportsDetach:(BOOL)arg1 forPopoverWithSceneIdentifier:(id)arg2 ;
-(void)updatePopoverSceneWithIdentifier:(id)arg1 userInterfaceStyle:(long long)arg2 ;
@end

