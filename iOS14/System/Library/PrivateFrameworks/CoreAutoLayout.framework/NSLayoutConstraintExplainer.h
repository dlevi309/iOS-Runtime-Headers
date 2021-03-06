/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/


@class NSLayoutConstraint, NSMutableSet, NSMapTable, NSArray;

@interface NSLayoutConstraintExplainer : NSObject {

	NSLayoutConstraint* _constraint;
	NSMutableSet* _requiredConstraints;
	NSMutableSet* _frozenConstraints;
	NSMutableSet* _relaxedConstraints;
	NSMapTable* _satisfactionChanges;
	NSMapTable* _priorities;
	NSArray* _mutuallyExclusiveConstraints;

}

@property (retain) NSMapTable * satisfactionChanges;                    //@synthesize satisfactionChanges=_satisfactionChanges - In the implementation block
@property (retain) NSMapTable * priorities;                             //@synthesize priorities=_priorities - In the implementation block
@property (retain) NSArray * mutuallyExclusiveConstraints;              //@synthesize mutuallyExclusiveConstraints=_mutuallyExclusiveConstraints - In the implementation block
-(id)description;
-(NSMapTable *)priorities;
-(void)recalculateExplanation;
-(void)setSatisfactionChanges:(NSMapTable *)arg1 ;
-(void)setPriorities:(NSMapTable *)arg1 ;
-(void)setMutuallyExclusiveConstraints:(NSArray *)arg1 ;
-(id)thawConstraint:(id)arg1 ;
-(void)_freezeErrorVariable:(id)arg1 forcingZeroValue:(BOOL)arg2 inEngine:(id)arg3 accumulatingConstraints:(id)arg4 andMutuallyExclusiveConstraints:(id*)arg5 ;
-(NSMapTable *)satisfactionChanges;
-(NSArray *)mutuallyExclusiveConstraints;
-(unsigned long long)_satisfactionChangeCount:(/*^block*/id)arg1 withResults:(id*)arg2 ;
-(id)relaxConstraint:(id)arg1 ;
-(id)initWithConstraint:(id)arg1 ;
-(id)requireConstraint:(id)arg1 ;
-(id)freezeConstraint:(id)arg1 ;
-(void)dealloc;
@end

