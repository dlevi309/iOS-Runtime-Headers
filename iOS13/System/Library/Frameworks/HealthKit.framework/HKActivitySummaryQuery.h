/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/HKActivitySummaryQueryClientInterface.h>

@class NSMutableArray, NSString;

@interface HKActivitySummaryQuery : HKQuery <HKActivitySummaryQueryClientInterface> {

	BOOL _initialHandlerCalled;
	/*^block*/id _completionHandler;
	NSMutableArray* _pendingActivitySummaries;
	BOOL _shouldIncludeActivitySummaryPrivateProperties;
	BOOL _shouldIncludeActivitySummaryStatistics;
	BOOL _orderByDateAscending;
	/*^block*/id _updateHandler;
	unsigned long long _limit;

}

@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;              //@synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeActivitySummaryStatistics;                     //@synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler; 
@property (assign,nonatomic) BOOL orderByDateAscending;                                       //@synthesize orderByDateAscending=_orderByDateAscending - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                                        //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy) id updateHandler;                                                  //@synthesize updateHandler=_updateHandler - In the implementation block
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
-(void)queue_validate;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_populateConfiguration:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 resultsHandler:(/*^block*/id)arg2 ;
-(void)client_deliverActivitySummaries:(id)arg1 isFinalBatch:(BOOL)arg2 clearPendingBatches:(BOOL)arg3 queryUUID:(id)arg4 ;
-(BOOL)shouldIncludeActivitySummaryPrivateProperties;
-(void)setShouldIncludeActivitySummaryPrivateProperties:(BOOL)arg1 ;
-(BOOL)shouldIncludeActivitySummaryStatistics;
-(void)setShouldIncludeActivitySummaryStatistics:(BOOL)arg1 ;
-(BOOL)orderByDateAscending;
-(void)setOrderByDateAscending:(BOOL)arg1 ;
-(void)setShouldIncludePrivateActivitySummaryProperties:(BOOL)arg1 ;
@end

