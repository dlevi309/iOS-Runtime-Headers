/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportUniquePIDFilter : NSObject <SignpostPredicateProducer> {

	NSSet* _uniquePidSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual; 
@property (nonatomic,readonly) NSSet * uniquePidSet;                                   //@synthesize uniquePidSet=_uniquePidSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)init;
-(BOOL)passesUniquePIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(unsigned long long)_compoundPredicateType;
-(BOOL)_wantsNotEqual;
-(NSSet *)uniquePidSet;
-(void)addUniquePIDNumber:(id)arg1 ;
-(void)addUniquePIDNumberSet:(id)arg1 ;
@end

