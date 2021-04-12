/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableSet, NSMutableDictionary, NSSet, NSDictionary;

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {

	NSMutableSet* _scheduledLogLocations;
	NSMutableSet* _pendingLogLocations;
	NSMutableSet* _failedLogLocations;
	NSMutableSet* _ignoredLogLocations;
	NSMutableDictionary* _logLocationsToEncounteredErrors;
	int _lock;

}

@property (nonatomic,readonly) NSSet * pendingLogLocations;                                 //@synthesize pendingLogLocations=_pendingLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * scheduledLogLocations;                               //@synthesize scheduledLogLocations=_scheduledLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * failedLogLocations;                                  //@synthesize failedLogLocations=_failedLogLocations - In the implementation block
@property (nonatomic,readonly) NSSet * ignoredLogLocations;                                 //@synthesize ignoredLogLocations=_ignoredLogLocations - In the implementation block
@property (nonatomic,readonly) NSDictionary * logLocationsToEncounteredErrors;              //@synthesize logLocationsToEncounteredErrors=_logLocationsToEncounteredErrors - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(NSSet *)pendingLogLocations;
-(void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2 ;
-(void)transactionLogAtLocationWasIgnored:(id)arg1 ;
-(void)transactionLogAtLocationWasScheduled:(id)arg1 ;
-(NSDictionary *)logLocationsToEncounteredErrors;
-(NSSet *)failedLogLocations;
-(NSSet *)scheduledLogLocations;
-(void)addPendingLogLocation:(id)arg1 ;
-(void)addPendingLogLocations:(id)arg1 ;
-(NSSet *)ignoredLogLocations;
-(id)initWithPendingLogLocations:(id)arg1 ;
-(void)failedTransactionLogAtLocationRecovered:(id)arg1 ;
-(void)unionWithSchedulingContext:(id)arg1 ;
@end

