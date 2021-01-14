/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_compoundPredicateType;
-(BOOL)passesUniquePIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(BOOL)_wantsNotEqual;
-(NSSet *)uniquePidSet;
-(void)addUniquePIDNumber:(id)arg1 ;
-(void)addUniquePIDNumberSet:(id)arg1 ;
@end

