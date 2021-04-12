/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostPredicateProducer.h>

@class NSSet, NSPredicate;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer> {

	BOOL __wantsNotEqual;
	NSSet* _pidSet;

}

@property (nonatomic,readonly) unsigned long long _compoundPredicateType; 
@property (nonatomic,readonly) BOOL _wantsNotEqual;                                    //@synthesize _wantsNotEqual=__wantsNotEqual - In the implementation block
@property (nonatomic,readonly) NSSet * pidSet;                                         //@synthesize pidSet=_pidSet - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicateEquivalent; 
-(id)init;
-(BOOL)passesPIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(BOOL)_wantsNotSubsystem;
-(unsigned long long)_compoundPredicateType;
-(NSSet *)pidSet;
-(BOOL)_wantsNotEqual;
-(void)addPIDNumber:(id)arg1 ;
-(void)addPIDNumberSet:(id)arg1 ;
@end

