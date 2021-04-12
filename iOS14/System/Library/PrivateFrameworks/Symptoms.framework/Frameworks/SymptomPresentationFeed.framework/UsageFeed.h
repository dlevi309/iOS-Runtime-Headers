/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationFeed.framework/SymptomPresentationFeed
*/


@class AnalyticsWorkspace, UsageAnalytics, NSArray;

@interface UsageFeed : NSObject {

	AnalyticsWorkspace* workspace;
	UsageAnalytics* handleAnalytics;
	unsigned lastSubscriberTag;
	unsigned lastSkippedTag;
	unsigned long long numUnrolledCellCounts;
	unsigned long long numRolledCellCounts;
	unsigned long long numNewlyCreated;
	unsigned long long numAppended;
	id _delegate;
	NSArray* _processFeedData;

}

@property (assign,nonatomic) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * processFeedData;              //@synthesize processFeedData=_processFeedData - In the implementation block
-(void)prepProcessDataFractionWithTag:(unsigned)arg1 from:(id)arg2 until:(id)arg3 pollInterval:(float)arg4 ;
-(BOOL)usageToDateWithOptionsFor:(id)arg1 nameKind:(id)arg2 options:(id)arg3 reply:(/*^block*/id)arg4 ;
-(id)_typicalUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3 ;
-(id)delegate;
-(id)_performRollUp:(unsigned)arg1 andMetadata:(unsigned)arg2 from:(id)arg3 until:(id)arg4 ;
-(void)clearLoggingCounters;
-(id)_composePredicateLineWithName:(id)arg1 keyPath:(id)arg2 isSweep:(BOOL*)arg3 wantGeneric:(BOOL)arg4 gotGeneric:(BOOL*)arg5 ;
-(id)initWithWorkspace:(id)arg1 ;
-(NSArray *)processFeedData;
-(BOOL)algosScoreToDateWithOptionsFor:(id)arg1 nameKind:(id)arg2 startTime:(id)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)usageToDateFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3 ;
-(id)networkDomainSessionTypeString:(unsigned long long)arg1 ;
-(void)_rollValuesFrom:(id)arg1 toDict:(id)arg2 ;
-(void)prepProcessDataFractionWithTag:(unsigned)arg1 andMetadata:(unsigned)arg2 from:(id)arg3 until:(id)arg4 pollInterval:(float)arg5 ;
-(BOOL)calendarUsageFor:(id)arg1 nameKind:(id)arg2 dayResolution:(id)arg3 daySlot:(unsigned short)arg4 weekSlot:(unsigned short)arg5 reply:(/*^block*/id)arg6 ;
-(BOOL)getUsageOption:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_calendarUsagePresentation:(id)arg1 nameKind:(id)arg2 source:(id)arg3 ;
-(BOOL)identifierForUUID:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_usagePresentation:(id)arg1 nameKind:(id)arg2 altName:(id)arg3 altNameKind:(id)arg4 source:(double*)arg5 since:(id)arg6 ;
-(BOOL)resetUsageDataFor:(id)arg1 nameKind:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setProcessFeedData:(NSArray *)arg1 ;
-(BOOL)typicalUsageFor:(id)arg1 nameKind:(id)arg2 intervalKind:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)_rollUsageValuesFromDict:(id)arg1 toDict:(id)arg2 forKey:(id)arg3 subscriberTag:(unsigned)arg4 ;
-(void)displayLoggingCounters:(id)arg1 ;
-(BOOL)networkBitmapsToDateWithOptionsFor:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3 options:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)dealloc;
-(BOOL)setUsageOption:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

