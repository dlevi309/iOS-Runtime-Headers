/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKAnchoredObjectQueryClientInterface.h>

@class NSMutableArray, HKQueryAnchor, NSString;

@interface HKAnchoredObjectQuery : HKQuery <HKAnchoredObjectQueryClientInterface> {

	BOOL _initialHandlerCalled;
	NSMutableArray* _samplesPendingDelivery;
	NSMutableArray* _deletedObjectsPendingDelivery;
	AB _includeDeletedObjects;
	HKQueryAnchor* _currentAnchor;
	BOOL _includeAutomaticTimeZones;
	BOOL _includeContributorInformation;
	/*^block*/id _updateHandler;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                            //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                        //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                       //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) id completionHandler;                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;                  //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL ignoreDeletedObjects; 
@property (assign,nonatomic) BOOL includeContributorInformation;              //@synthesize includeContributorInformation=_includeContributorInformation - In the implementation block
@property (nonatomic,copy) id updateHandler;                                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)configureClientInterface:(id)arg1 ;
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
-(double)collectionInterval;
-(void)setLimit:(unsigned long long)arg1 ;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(unsigned long long)limit;
-(void)setUpdateHandler:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(id)updateHandler;
-(void)setIncludeContributorInformation:(BOOL)arg1 ;
-(id)completionHandler;
-(void)queue_populateConfiguration:(id)arg1 ;
-(BOOL)ignoreDeletedObjects;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 query:(id)arg6 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setIgnoreDeletedObjects:(BOOL)arg1 ;
-(void)setCollectionInterval:(double)arg1 ;
-(BOOL)includeContributorInformation;
-(HKQueryAnchor *)anchor;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(void)queue_validate;
@end

