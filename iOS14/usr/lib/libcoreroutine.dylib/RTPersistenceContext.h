/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <CoreData/NSManagedObjectContext.h>

@protocol RTPersistenceContextDelegate;
@class RTPredicateInspector;

@interface RTPersistenceContext : NSManagedObjectContext {

	long long _mirroringQualityOfService;
	id<RTPersistenceContextDelegate> _delegate;
	RTPredicateInspector* _predicateInspector;
	unsigned long long _options;

}

@property (__weak) id<RTPersistenceContextDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RTPredicateInspector * predicateInspector;              //@synthesize predicateInspector=_predicateInspector - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) long long mirroringQualityOfService;                    //@synthesize mirroringQualityOfService=_mirroringQualityOfService - In the implementation block
-(BOOL)save:(id*)arg1 ;
-(void)_updateRequest:(id*)arg1 includingContextOptions:(unsigned long long)arg2 ;
-(id<RTPersistenceContextDelegate>)delegate;
-(BOOL)validateEntityName:(id)arg1 inModel:(id)arg2 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)options;
-(id)substitutionVariableKeys;
-(long long)mirroringQualityOfService;
-(void)setOptions:(unsigned long long)arg1 ;
-(BOOL)shouldSubstituteVariables:(id)arg1 inPredicate:(id)arg2 entityName:(id)arg3 model:(id)arg4 ;
-(void)setDelegate:(id<RTPersistenceContextDelegate>)arg1 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(RTPredicateInspector *)predicateInspector;
-(BOOL)_processError:(inout id*)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(BOOL)_shouldExecute:(id*)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)predicateWithDefaultSubstitutionVariables:(id)arg1 ;
-(void)setPredicateInspector:(RTPredicateInspector *)arg1 ;
-(BOOL)allowTombstones;
-(void)setMirroringQualityOfService:(long long)arg1 ;
@end

