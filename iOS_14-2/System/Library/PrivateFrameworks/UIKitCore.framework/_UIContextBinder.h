/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIContextBinding, _UIContextBinderContextCreationPolicyHolding;
@class NSPointerArray, NSMutableOrderedSet, NSArray;

@interface _UIContextBinder : NSObject {

	NSPointerArray* _enrolledBindables;
	NSPointerArray* _attachedBindables;
	NSMutableOrderedSet* _contexts;
	id<_UIContextBinding> _substrate;
	long long _contextManagementPolicy;
	id<_UIContextBinderContextCreationPolicyHolding> _contextCreationPolicyHolder;

}

@property (nonatomic,readonly) id<_UIContextBinding> substrate;                                                                //@synthesize substrate=_substrate - In the implementation block
@property (assign,nonatomic) long long contextManagementPolicy;                                                                //@synthesize contextManagementPolicy=_contextManagementPolicy - In the implementation block
@property (assign,nonatomic,__weak) id<_UIContextBinderContextCreationPolicyHolding> contextCreationPolicyHolder;              //@synthesize contextCreationPolicyHolder=_contextCreationPolicyHolder - In the implementation block
@property (nonatomic,readonly) NSArray * enrolledBindables; 
@property (nonatomic,readonly) NSArray * attachedBindables; 
+(id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2 ;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 ;
-(void)updateBindable:(id)arg1 ;
-(NSArray *)enrolledBindables;
-(id)_contextForBindable:(id)arg1 ;
-(void)setContextCreationPolicyHolder:(id<_UIContextBinderContextCreationPolicyHolding>)arg1 ;
-(BOOL)permitContextCreationForBindable:(id)arg1 ;
-(void)createContextsWithTest:(/*^block*/id)arg1 creationAction:(/*^block*/id)arg2 ;
-(id<_UIContextBinderContextCreationPolicyHolding>)contextCreationPolicyHolder;
-(void)expellBindable:(id)arg1 ;
-(id)_attachedBindablePointersAsCopy:(BOOL)arg1 ;
-(long long)contextManagementPolicy;
-(void)setContextManagementPolicy:(long long)arg1 ;
-(void)enrollBindable:(id)arg1 ;
-(void)updateBindableOrderWithTest:(/*^block*/id)arg1 force:(BOOL)arg2 ;
-(id<_UIContextBinding>)substrate;
-(void)recreateContextForBindable:(id)arg1 ;
-(BOOL)bindableIsTopmostAttached:(id)arg1 ;
-(id)initWithSubstrate:(id)arg1 ;
-(void)detachBindable:(id)arg1 ;
-(BOOL)bindableEnrolled:(id)arg1 ;
-(NSArray *)attachedBindables;
-(void)attachBindable:(id)arg1 ;
-(void)purgeContextsWithPurgeAction:(/*^block*/id)arg1 ;
-(id)_enrolledBindablePointersAsCopy:(BOOL)arg1 ;
@end

