/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISceneBSActionHandler.h>

@class NSString;

@interface _UISceneSnapshotBSActionsHandler : NSObject <_UISceneBSActionHandler>

@property (nonatomic,readonly) BOOL wantsOwnAssertion; 
@property (nonatomic,readonly) BOOL wantsAsyncSnapshot; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)wantsAsyncSnapshot;
-(id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4 ;
-(BOOL)wantsOwnAssertion;
@end

