/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIAnimationFenceCoordinating.h>

@protocol _UIContextBinding, _UIContextBinderContextCreationPolicyHolding;
@class NSPointerArray, NSMutableOrderedSet, NSMutableArray, NSArray, NSString;

@interface _UIContextBinder : NSObject <_UIAnimationFenceCoordinating> {

	NSPointerArray* _enrolledBindables;
	NSPointerArray* _attachedBindables;
	NSMutableOrderedSet* _contexts;
	BOOL __registeredPreCommitHandler;
	NSMutableArray* __preCommitHandlers;
	/*^block*/id __realPreCommitHandler;
	/*^block*/id __realPostCommitHandler;
	id<_UIContextBinding> _substrate;
	long long _contextManagementPolicy;
	id<_UIContextBinderContextCreationPolicyHolding> _contextCreationPolicyHolder;

}

@property (nonatomic,readonly) id<_UIContextBinding> substrate;                                                                //@synthesize substrate=_substrate - In the implementation block
@property (assign,nonatomic) long long contextManagementPolicy;                                                                //@synthesize contextManagementPolicy=_contextManagementPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<_UIContextBinderContextCreationPolicyHolding> contextCreationPolicyHolder;              //@synthesize contextCreationPolicyHolder=_contextCreationPolicyHolder - In the implementation block
@property (nonatomic,readonly) NSArray * enrolledBindables; 
@property (nonatomic,readonly) NSArray * attachedBindables; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2 ;
-(id)_synchronizedDrawingFence;
-(void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(/*^block*/id)arg2 ;
-(void)_synchronizeDrawingWithFence:(id)arg1 ;
-(void)expellBindable:(id)arg1 ;
-(void)detachBindable:(id)arg1 ;
-(void)purgeContextsWithPurgeAction:(/*^block*/id)arg1 ;
-(void)createContextsWithTest:(/*^block*/id)arg1 creationAction:(/*^block*/id)arg2 ;
-(long long)contextManagementPolicy;
-(NSArray *)enrolledBindables;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 ;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 force:(BOOL)arg2 ;
-(NSArray *)attachedBindables;
-(BOOL)bindableEnrolled:(id)arg1 ;
-(id<_UIContextBinding>)substrate;
-(void)_synchronizeDrawingWithPreCommitHandler:(/*^block*/id)arg1 ;
-(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 withPreCommitHandler:(/*^block*/id)arg2 ;
-(void)_synchronizeDrawing;
-(id)initWithSubstrate:(id)arg1 ;
-(void)enrollBindable:(id)arg1 ;
-(void)attachBindable:(id)arg1 ;
-(void)updateBindable:(id)arg1 ;
-(void)setContextManagementPolicy:(long long)arg1 ;
-(id)_attachedBindablePointersAsCopy:(BOOL)arg1 ;
-(id)_enrolledBindablePointersAsCopy:(BOOL)arg1 ;
-(BOOL)bindableIsTopmostAttached:(id)arg1 ;
-(void)recreateContextForBindable:(id)arg1 ;
-(BOOL)permitContextCreationForBindable:(id)arg1 ;
-(id)_contextForBindable:(id)arg1 ;
-(unsigned)_synchronizeDrawingAcrossProcesses;
-(void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned)arg1 ;
-(id<_UIContextBinderContextCreationPolicyHolding>)contextCreationPolicyHolder;
-(void)setContextCreationPolicyHolder:(id<_UIContextBinderContextCreationPolicyHolding>)arg1 ;
@end

