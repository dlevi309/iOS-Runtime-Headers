/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <ClassroomKit/CRKASMRosterProviderDecoratorBase.h>

@class NSMutableDictionary;

@interface CRKASMAtomicRosterProvider : CRKASMRosterProviderDecoratorBase {

	NSMutableDictionary* _completionsByConstraint;

}

@property (nonatomic,readonly) NSMutableDictionary * completionsByConstraint;              //@synthesize completionsByConstraint=_completionsByConstraint - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)dealloc;
-(id)courseWithIdentifier:(id)arg1 inRoster:(id)arg2 ;
-(id)initWithRosterProvider:(id)arg1 ;
-(void)createCourseWithProperties:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateCourseWithIdentifier:(id)arg1 properties:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeCourseWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)endObservingRoster;
-(void)beginObservingRoster;
-(id)coursesMatchingCreateProperties:(id)arg1 inRoster:(id)arg2 createdAfter:(id)arg3 ;
-(id)pushCompletion:(/*^block*/id)arg1 withRosterEvaluator:(/*^block*/id)arg2 ;
-(void)evaluateConstraintForUnderlyingCompletion:(id)arg1 error:(id)arg2 ;
-(void)evalutateConstraintsForRosterUpdate;
-(NSMutableDictionary *)completionsByConstraint;
@end

