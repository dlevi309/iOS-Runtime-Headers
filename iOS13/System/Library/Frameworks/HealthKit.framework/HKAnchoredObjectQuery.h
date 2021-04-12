/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _includeAutomaticTimeZones;
	/*^block*/id _updateHandler;
	HKQueryAnchor* _anchor;
	unsigned long long _limit;
	double _collectionInterval;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) HKQueryAnchor * anchor;                        //@synthesize anchor=_anchor - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                    //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) double collectionInterval;                   //@synthesize collectionInterval=_collectionInterval - In the implementation block
@property (nonatomic,readonly) id completionHandler;                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL includeAutomaticTimeZones;              //@synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones - In the implementation block
@property (assign,nonatomic) BOOL ignoreDeletedObjects; 
@property (nonatomic,copy) id updateHandler;                              //@synthesize updateHandler=_updateHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)configurationClass;
+(id)clientInterfaceProtocol;
+(void)configureClientInterface:(id)arg1 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)completionHandler;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(HKQueryAnchor *)anchor;
-(void)setAnchor:(HKQueryAnchor *)arg1 ;
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(void)setIncludeAutomaticTimeZones:(BOOL)arg1 ;
-(BOOL)includeAutomaticTimeZones;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(id)arg3 limit:(unsigned long long)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(void)client_deliverSampleObjects:(id)arg1 deletedObjects:(id)arg2 anchor:(id)arg3 clearPendingSamples:(BOOL)arg4 deliverResults:(BOOL)arg5 query:(id)arg6 ;
-(void)setCollectionInterval:(double)arg1 ;
-(id)initWithType:(id)arg1 predicate:(id)arg2 anchor:(unsigned long long)arg3 limit:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setIgnoreDeletedObjects:(BOOL)arg1 ;
-(BOOL)ignoreDeletedObjects;
-(double)collectionInterval;
@end

