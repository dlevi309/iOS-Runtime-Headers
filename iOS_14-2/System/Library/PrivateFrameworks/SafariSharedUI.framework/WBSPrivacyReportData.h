/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPrivacyReportDataProvider.h>

@protocol OS_dispatch_queue;
@class NSArray, WBSKnownTrackingThirdParty, NSSet, NSObject, NSMutableArray, WBSKnownTrackerFilter, NSDate, WBSHistory, NSString;

@interface WBSPrivacyReportData : NSObject <WBSPrivacyReportDataProvider> {

	NSObject*<OS_dispatch_queue> _dataPrefetchQueue;
	long long _prefetchState;
	NSMutableArray* _prefetchCompletionHandlers;
	WBSKnownTrackerFilter* _knownTrackerFilter;
	NSSet* _firstPartiesFromHistory;
	NSDate* _dataWindowStartDate;
	NSDate* _dataWindowEndDate;
	NSArray* _knownTrackers;
	NSArray* _knownTrackersSortDescriptors;
	NSArray* _trackedFirstParties;
	NSArray* _trackedFirstPartiesSortDescriptors;
	WBSKnownTrackingThirdParty* _mostSeenKnownTracker;
	NSSet* _trackerOwnerNames;
	double _ratioOfTrackedFirstPartiesToAllVisited;
	WBSHistory* _history;

}

@property (nonatomic,retain) WBSHistory * history;                                             //@synthesize history=_history - In the implementation block
@property (nonatomic,readonly) NSArray * knownTrackers;                                        //@synthesize knownTrackers=_knownTrackers - In the implementation block
@property (nonatomic,retain) NSArray * knownTrackersSortDescriptors;                           //@synthesize knownTrackersSortDescriptors=_knownTrackersSortDescriptors - In the implementation block
@property (nonatomic,readonly) NSArray * trackedFirstParties;                                  //@synthesize trackedFirstParties=_trackedFirstParties - In the implementation block
@property (nonatomic,retain) NSArray * trackedFirstPartiesSortDescriptors;                     //@synthesize trackedFirstPartiesSortDescriptors=_trackedFirstPartiesSortDescriptors - In the implementation block
@property (nonatomic,readonly) WBSKnownTrackingThirdParty * mostSeenKnownTracker;              //@synthesize mostSeenKnownTracker=_mostSeenKnownTracker - In the implementation block
@property (nonatomic,readonly) NSSet * trackerOwnerNames;                                      //@synthesize trackerOwnerNames=_trackerOwnerNames - In the implementation block
@property (nonatomic,readonly) double ratioOfTrackedFirstPartiesToAllVisited;                  //@synthesize ratioOfTrackedFirstPartiesToAllVisited=_ratioOfTrackedFirstPartiesToAllVisited - In the implementation block
@property (nonatomic,readonly) BOOL hasData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)getKnownTrackingDomainsForWebView:(id)arg1 after:(id)arg2 before:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(WBSHistory *)history;
-(double)ratioOfTrackedFirstPartiesToAllVisited;
-(WBSKnownTrackingThirdParty *)mostSeenKnownTracker;
-(BOOL)hasData;
-(void)_computeStatistics;
-(void)setHistory:(WBSHistory *)arg1 ;
-(void)loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithHistory:(id)arg1 ;
-(NSArray *)knownTrackers;
-(NSArray *)trackedFirstParties;
-(void)_resetKnownTrackersSortDescriptors;
-(void)_resetTrackedFirstPartiesSortDescriptors;
-(void)_sortKnownTrackers;
-(void)_sortTrackedFirstParties;
-(void)_prefetchData;
-(void)_executePrefetchCompletionHandlers;
-(void)_loadDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_discardPrefetchedData;
-(id)_dataWindowStartWithLoadedThirdParties:(id)arg1 boundBy:(id)arg2 ;
-(id)_dataWindowStartWithBlockedThirdParties:(id)arg1 boundBy:(id)arg2 ;
-(id)getRecentFirstPartiesFromThirdParty:(id)arg1 ;
-(void)_ingestPreventedThirdParties:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_addPrefetchCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadDataFromStartDate:(id)arg1 toEndDate:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(NSArray *)knownTrackersSortDescriptors;
-(void)setKnownTrackersSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)trackedFirstPartiesSortDescriptors;
-(void)setTrackedFirstPartiesSortDescriptors:(NSArray *)arg1 ;
-(NSSet *)trackerOwnerNames;
-(void)prefetchData;
-(void)discardPrefetchedData;
@end

