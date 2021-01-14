/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKDatabaseChangesQueryClientInterface.h>

@class NSArray, HKQueryAnchor, NSString;

@interface _HKDatabaseChangesQuery : HKQuery <HKDatabaseChangesQueryClientInterface> {

	BOOL _includeChangeDetails;
	/*^block*/id _resultsHandler;
	NSArray* _sampleTypes;
	HKQueryAnchor* _anchor;
	long long _changeDetailsQueryStrategy;
	long long _anchorStrategyChangeCountLimit;

}

@property (nonatomic,readonly) id resultsHandler;                                   //@synthesize resultsHandler=_resultsHandler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sampleTypes;                          //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy,readonly) HKQueryAnchor * anchor;                         //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) long long changeDetailsQueryStrategy;                  //@synthesize changeDetailsQueryStrategy=_changeDetailsQueryStrategy - In the implementation block
@property (assign,nonatomic) long long anchorStrategyChangeCountLimit;              //@synthesize anchorStrategyChangeCountLimit=_anchorStrategyChangeCountLimit - In the implementation block
@property (assign,nonatomic) BOOL includeChangeDetails;                             //@synthesize includeChangeDetails=_includeChangeDetails - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureServerInterface:(id)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(NSArray *)sampleTypes;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setIncludeChangeDetails:(BOOL)arg1 ;
-(void)setChangeDetailsQueryStrategy:(long long)arg1 ;
-(void)client_deliverQueryAnchor:(id)arg1 sampleTypeChanges:(id)arg2 queryUUID:(id)arg3 ;
-(BOOL)includeChangeDetails;
-(void)setAnchorStrategyChangeCountLimit:(long long)arg1 ;
-(id)initWithTypes:(id)arg1 anchor:(id)arg2 resultsHandler:(/*^block*/id)arg3 ;
-(long long)changeDetailsQueryStrategy;
-(long long)anchorStrategyChangeCountLimit;
-(id)resultsHandler;
-(HKQueryAnchor *)anchor;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
@end

