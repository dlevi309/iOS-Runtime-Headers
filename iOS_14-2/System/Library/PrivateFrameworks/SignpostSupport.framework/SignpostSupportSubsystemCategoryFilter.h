/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_initWithEntries:(id)arg1 ;
-(void)addEntry:(id)arg1 ;
-(unsigned long long)_compoundPredicateType;
-(void)addSubsystem:(id)arg1 category:(id)arg2 ;
-(void)_fixupToSupportFramerateCalculation;
-(BOOL)passesSubsystem:(id)arg1 category:(id)arg2 ;
-(NSPredicate *)predicateEquivalent;
-(id)liveStreamingPredicate;
-(void)_forceInclusionOfSubsystem:(id)arg1 category:(id)arg2 ;
-(NSMutableDictionary *)subsystemsDict;
-(id)_subpredicatesForSubsystemsWithIsSimplified:(BOOL)arg1 ;
-(BOOL)_wantsNotSubsystem;
-(id)_predicateEquivalentWithIsSimplified:(BOOL)arg1 ;
-(BOOL)matchesSubsystem:(id)arg1 category:(id)arg2 ;
@end

