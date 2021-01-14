/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/


@protocol OS_dispatch_queue;
@class ATXExecutableReferenceManager, NSString, NSObject, ATXBiomeERMStream;

@interface ATXEngagementRecordManager : NSObject {

	ATXExecutableReferenceManager* _referenceManager;
	NSString* _path;
	NSObject*<OS_dispatch_queue> _queue;
	ATXBiomeERMStream* _eventStream;
	double _minDurationForTrackedReferencesToStayAround;

}

@property (assign,nonatomic) double minDurationForTrackedReferencesToStayAround;              //@synthesize minDurationForTrackedReferencesToStayAround=_minDurationForTrackedReferencesToStayAround - In the implementation block
+(id)sharedInstance;
-(id)jsonDict;
-(id)_readData;
-(id)init;
-(id)initWithCacheDirectory:(id)arg1 ;
-(id)description;
-(BOOL)_writeData:(id)arg1 ;
-(id)engagedExecutablesOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2 ;
-(BOOL)hasEngagedWithSuggestion:(id)arg1 engagedExecutables:(id)arg2 ;
-(id)_engagedEntriesNoSync;
-(void)_removeEngagedSuggestionsIfPossibleNoSync;
-(id)_engagedEntriesNoSyncOfType:(unsigned long long)arg1 queryOptions:(unsigned long long)arg2 ;
-(void)_filterOutExplicitEngagementsThatShouldNotClearOnEngagement:(id)arg1 ;
-(id)_identifiersFromEntries:(id)arg1 ;
-(void)_addEngagedSuggestionNoSync:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_addHiddenSuggestionNoSync:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3 ;
-(void)_serializeAndWriteNoSyncSet:(id)arg1 ;
-(void)_removeEngagementsOnQueuePassingTest:(/*^block*/id)arg1 ;
-(void)_logDidAddEntryToBiomeStream:(id)arg1 ;
-(void)updateForClientModelCacheUpdate:(id)arg1 clientModelId:(id)arg2 ;
-(BOOL)hasEngagedWithSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2 ;
-(void)addEngagedSuggestion:(id)arg1 engagementRecordType:(unsigned long long)arg2 ;
-(void)addHiddenSuggestion:(id)arg1 duration:(double)arg2 engagementRecordType:(unsigned long long)arg3 ;
-(void)removeEngagementForSuggestion:(id)arg1 recordType:(unsigned long long)arg2 ;
-(void)removeAllEngagementsForSuggestion:(id)arg1 ;
-(void)removeAllEngagementsOfRecordType:(unsigned long long)arg1 ;
-(void)removeEngagementForExecutableIdentifier:(id)arg1 recordType:(unsigned long long)arg2 abortingRemovalIfEngagementDateIsLaterThanDate:(id)arg3 ;
-(void)removeAllEngagementsWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchEngagedEntriesWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)minDurationForTrackedReferencesToStayAround;
-(void)setMinDurationForTrackedReferencesToStayAround:(double)arg1 ;
@end

