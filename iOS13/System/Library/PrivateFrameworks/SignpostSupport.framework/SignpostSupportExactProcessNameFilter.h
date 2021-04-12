/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportExactProcessNameFilter : NSObject <SignpostPredicateProducer> {

	NSSet* _processNameSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual; 
@property (nonatomic,readonly) NSSet * processNameSet;                                 //@synthesize processNameSet=_processNameSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)init;
-(BOOL)passesProcessName:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(unsigned long long)_compoundPredicateType;
-(BOOL)_wantsNotEqual;
-(NSSet *)processNameSet;
-(void)addProcessName:(id)arg1 ;
-(void)addProcessNameSet:(id)arg1 ;
@end

