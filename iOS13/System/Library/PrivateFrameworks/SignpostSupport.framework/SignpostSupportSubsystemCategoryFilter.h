/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSPredicate, NSMutableDictionary;

@interface SignpostSupportSubsystemCategoryFilter : NSObject <SignpostPredicateProducer> {

	NSMutableDictionary* _subsystemsDict;

}

@property (nonatomic,readonly) NSMutableDictionary * subsystemsDict;                   //@synthesize subsystemsDict=_subsystemsDict - In the implementation block
@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotSubsystem; 
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)debugDescription;
-(void)addEntry:(id)arg1 ;
-(id)_initWithEntries:(id)arg1 ;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(NSPredicate *)predicateEquivalent;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(NSMutableDictionary *)subsystemsDict;
-(id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)arg1 ;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
-(id)_predicateEquivalentWithIsSimplified:(BOOL)arg1 ;
-(void)_fixupToSupportFramerateCalculation;
-(BOOL)matchesSubsystem:(id)arg1 category:(id)arg2 ;
-(void)addSubsystem:(id)arg1 category:(id)arg2 ;
@end

