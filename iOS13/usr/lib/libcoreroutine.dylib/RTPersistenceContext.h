/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)options;
-(id<RTPersistenceContextDelegate>)delegate;
-(void)setDelegate:(id<RTPersistenceContextDelegate>)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id)executeFetchRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)save:(id*)arg1 ;
-(id)executeRequest:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 ;
-(BOOL)_processError:(inout id*)arg1 ;
-(id)initWithConcurrencyType:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(BOOL)validateEntityName:(id)arg1 inModel:(id)arg2 ;
-(BOOL)_shouldExecute:(id*)arg1 ;
-(id)substitutionVariableKeys;
-(BOOL)shouldSubstituteVariables:(id)arg1 inPredicate:(id)arg2 entityName:(id)arg3 model:(id)arg4 ;
-(id)predicateWithDefaultSubstitutionVariables:(id)arg1 ;
-(void)_updateRequest:(id*)arg1 includingContextOptions:(unsigned long long)arg2 ;
-(long long)mirroringQualityOfService;
-(void)setMirroringQualityOfService:(long long)arg1 ;
-(BOOL)allowTombstones;
-(RTPredicateInspector *)predicateInspector;
-(void)setPredicateInspector:(RTPredicateInspector *)arg1 ;
@end

