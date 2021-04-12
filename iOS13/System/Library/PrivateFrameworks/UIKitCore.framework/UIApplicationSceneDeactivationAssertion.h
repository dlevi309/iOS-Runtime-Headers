/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class UIApplicationSceneDeactivationManager, NSString;

@interface UIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {

	long long _reason;
	/*^block*/id _predicate;
	UIApplicationSceneDeactivationManager* _manager;
	BOOL _acquired;

}

@property (nonatomic,__weak,readonly) UIApplicationSceneDeactivationManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) long long reason;                                                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                                   //@synthesize predicate=_predicate - In the implementation block
@property (getter=isAcquired,nonatomic,readonly) BOOL acquired;                                     //@synthesize acquired=_acquired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(long long)reason;
-(id)predicate;
-(void)acquire;
-(UIApplicationSceneDeactivationManager *)manager;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)relinquish;
-(void)acquireWithPredicate:(/*^block*/id)arg1 transitionContext:(id)arg2 ;
-(id)initWithReason:(long long)arg1 manager:(id)arg2 ;
-(BOOL)isAcquired;
@end

