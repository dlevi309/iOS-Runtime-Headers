/*
* Generated on Thursday, January 14, 2021 at 2:21:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)pendingLogLocations;
-(void)transactionLogAtLocationWasIgnored:(id)arg1 ;
-(void)transactionLogAtLocation:(id)arg1 failedToOpenWithError:(id)arg2 ;
-(NSSet *)scheduledLogLocations;
-(void)transactionLogAtLocationWasScheduled:(id)arg1 ;
-(NSSet *)failedLogLocations;
-(NSDictionary *)logLocationsToEncounteredErrors;
-(void)addPendingLogLocation:(id)arg1 ;
-(id)description;
-(void)addPendingLogLocations:(id)arg1 ;
-(NSSet *)ignoredLogLocations;
-(id)initWithPendingLogLocations:(id)arg1 ;
-(void)failedTransactionLogAtLocationRecovered:(id)arg1 ;
-(void)unionWithSchedulingContext:(id)arg1 ;
-(void)dealloc;
@end

