/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)_compoundPredicateType;
-(NSSet *)pidSet;
-(BOOL)passesPIDNumber:(id)arg1 ;
-(NSPredicate *)predicateEquivalent;
-(BOOL)_wantsNotSubsystem;
-(BOOL)_wantsNotEqual;
-(void)addPIDNumber:(id)arg1 ;
-(void)addPIDNumberSet:(id)arg1 ;
@end

