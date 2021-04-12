/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSPredicate, NSOrderedSet;

@interface _CDContextualPredicate : NSObject <NSCopying, NSSecureCoding> {

	BOOL _evaluateOnEveryKeyPathUpdate;
	NSSet* _keyPaths;
	NSPredicate* _predicate;
	NSPredicate* _predicateForPreviousState;
	double _minimumDurationInPreviousState;
	NSOrderedSet* _timeBasedPredicateEvaluationIntervals;
	NSSet* _circularLocationRegions;

}

@property (nonatomic,retain) NSPredicate * predicate;                                           //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSPredicate * predicateForPreviousState;                           //@synthesize predicateForPreviousState=_predicateForPreviousState - In the implementation block
@property (nonatomic,copy) NSSet * keyPaths;                                                    //@synthesize keyPaths=_keyPaths - In the implementation block
@property (assign,nonatomic) double minimumDurationInPreviousState;                             //@synthesize minimumDurationInPreviousState=_minimumDurationInPreviousState - In the implementation block
@property (assign,nonatomic) BOOL evaluateOnEveryKeyPathUpdate;                                 //@synthesize evaluateOnEveryKeyPathUpdate=_evaluateOnEveryKeyPathUpdate - In the implementation block
@property (nonatomic,retain) NSOrderedSet * timeBasedPredicateEvaluationIntervals;              //@synthesize timeBasedPredicateEvaluationIntervals=_timeBasedPredicateEvaluationIntervals - In the implementation block
@property (nonatomic,retain) NSSet * circularLocationRegions;                                   //@synthesize circularLocationRegions=_circularLocationRegions - In the implementation block
@property (nonatomic,readonly) BOOL firesOnAnyChange; 
+(BOOL)supportsSecureCoding;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4 ;
+(id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 ;
+(id)predicateForChangeAtKeyPath:(id)arg1 ;
+(id)predicateForChangeAtKeyPaths:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2 ;
+(id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(NSSet *)keyPaths;
-(void)setTimeBasedPredicateEvaluationIntervals:(NSOrderedSet *)arg1 ;
-(void)setCircularLocationRegions:(NSSet *)arg1 ;
-(NSSet *)circularLocationRegions;
-(id)initForChangeAtKeyPath:(id)arg1 ;
-(id)initForChangeAtKeyPaths:(id)arg1 ;
-(id)initForChangeAtKeyPath:(id)arg1 equalToValue:(id)arg2 ;
-(void)setKeyPaths:(NSSet *)arg1 ;
-(void)setMinimumDurationInPreviousState:(double)arg1 ;
-(void)setPredicateForPreviousState:(NSPredicate *)arg1 ;
-(NSOrderedSet *)timeBasedPredicateEvaluationIntervals;
-(void)setEvaluateOnEveryKeyPathUpdate:(BOOL)arg1 ;
-(NSPredicate *)predicateForPreviousState;
-(BOOL)firesOnAnyChange;
-(double)minimumDurationInPreviousState;
-(BOOL)evaluateOnEveryKeyPathUpdate;
@end

