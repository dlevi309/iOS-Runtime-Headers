/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)predicateForChangeAtKeyPath:(id)arg1 withMinimumDurationInPreviousState:(double)arg2 ;
+(id)predicateForChangeAtKeyPaths:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 withFormat:(id)arg2 ;
+(id)predicateForChangeAtKeyPath:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 ;
+(id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 withPredicateForPreviousState:(id)arg3 withMinimumDurationInPreviousState:(double)arg4 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3 ;
+(id)predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
-(void)setKeyPaths:(NSSet *)arg1 ;
-(NSSet *)keyPaths;
-(BOOL)firesOnAnyChange;
-(NSPredicate *)predicate;
-(NSSet *)circularLocationRegions;
-(NSOrderedSet *)timeBasedPredicateEvaluationIntervals;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicateForPreviousState;
-(id)initForChangeAtKeyPaths:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)initForChangeAtKeyPath:(id)arg1 equalToValue:(id)arg2 ;
-(id)description;
-(void)setTimeBasedPredicateEvaluationIntervals:(NSOrderedSet *)arg1 ;
-(void)setCircularLocationRegions:(NSSet *)arg1 ;
-(id)initForChangeAtKeyPath:(id)arg1 ;
-(double)minimumDurationInPreviousState;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setMinimumDurationInPreviousState:(double)arg1 ;
-(BOOL)evaluateOnEveryKeyPathUpdate;
-(void)setEvaluateOnEveryKeyPathUpdate:(BOOL)arg1 ;
-(void)setPredicateForPreviousState:(NSPredicate *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateWithState:(id)arg1 previousValue:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
@end

