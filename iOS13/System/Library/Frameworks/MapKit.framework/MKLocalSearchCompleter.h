/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKLocalSearchCompleterDelegate, MKLocationManagerOperation, MKAutocompleteAnalyticsProvider;
#import <MapKit/MapKit-Structs.h>
@class NSString, GEOSearchCategory, NSArray, GEORetainedSearchMetadata, CLLocation, GEOClientRankingModel, GEOSortPriorityMapping, NSTimer, GEOMapServiceTraits, NSMutableArray, GEOAutocompleteSessionData, MKPointOfInterestFilter, MKLocalSearchCompletion;

@interface MKLocalSearchCompleter : NSObject {

	NSString* _queryFragment;
	SCD_Struct_MK13 _region;
	GEOSearchCategory* _categoryFilter;
	NSArray* _filters;
	GEORetainedSearchMetadata* _retainedSearchMetadata;
	id<MKLocalSearchCompleterDelegate> _delegate;
	id _context;
	NSString* _identifier;
	long long _listType;
	double _timeSinceLastInBoundingRegion;
	CLLocation* _deviceLocation;
	unsigned long long _mapType;
	double _lastRequestTime;
	BOOL _dirty;
	BOOL _resultsAreCurrent;
	NSArray* _results;
	NSArray* _sections;
	GEOClientRankingModel* _clientRankingModel;
	GEOSortPriorityMapping* _sortPriorityMapping;
	NSTimer* _timer;
	int _source;
	id<MKLocationManagerOperation> _singleLocationUpdate;
	GEOMapServiceTraits* _traits;
	unsigned long long _maxNumberOfConcurrentRequests;
	NSMutableArray* _inFlightTickets;
	NSMutableArray* _pendingTickets;
	BOOL _statefulQueriesEnabled;
	GEOAutocompleteSessionData* _autocompleteSessionData;
	BOOL _shouldDisplayNoResults;
	BOOL _shouldEnableRAPForNoResults;
	BOOL _autocompleteTopSectionIsQuerySuggestions;
	BOOL _showAutocompleteClientSource;
	BOOL _shouldPreloadTransitInfo;
	long long _filterType;
	unsigned long long _resultTypes;
	MKPointOfInterestFilter* _pointOfInterestFilter;
	id<MKAutocompleteAnalyticsProvider> _analyticsProvider;
	MKLocalSearchCompletion* _tappedQuerySuggestionCompletion;
	long long _privateFilterType;

}

@property (assign,nonatomic) SCD_Struct_MK8 boundingRegion; 
@property (nonatomic,copy) NSString * fragment; 
@property (assign,nonatomic) long long entriesType; 
@property (nonatomic,retain) id<MKAutocompleteAnalyticsProvider> analyticsProvider;                                                                                                      //@synthesize analyticsProvider=_analyticsProvider - In the implementation block
@property (nonatomic,retain) GEOSearchCategory * categoryFilter;                                                                                                                         //@synthesize categoryFilter=_categoryFilter - In the implementation block
@property (nonatomic,retain) CLLocation * deviceLocation;                                                                                                                                //@synthesize deviceLocation=_deviceLocation - In the implementation block
@property (nonatomic,retain) GEORetainedSearchMetadata * retainedSearchMetadata;                                                                                                         //@synthesize retainedSearchMetadata=_retainedSearchMetadata - In the implementation block
@property (assign,nonatomic,__weak) id context;                                                                                                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                                                                                                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long listType;                                                                                                                                         //@synthesize listType=_listType - In the implementation block
@property (assign,nonatomic) double timeSinceLastInBoundingRegion;                                                                                                                       //@synthesize timeSinceLastInBoundingRegion=_timeSinceLastInBoundingRegion - In the implementation block
@property (assign,nonatomic) unsigned long long mapType;                                                                                                                                 //@synthesize mapType=_mapType - In the implementation block
@property (nonatomic,retain) GEOMapServiceTraits * traits;                                                                                                                               //@synthesize traits=_traits - In the implementation block
@property (getter=_shouldDisplayNoResults,nonatomic,readonly) BOOL shouldDisplayNoResults;                                                                                               //@synthesize shouldDisplayNoResults=_shouldDisplayNoResults - In the implementation block
@property (getter=_shouldEnableRAPForNoResults,nonatomic,readonly) BOOL shouldEnableRAPForNoResults;                                                                                     //@synthesize shouldEnableRAPForNoResults=_shouldEnableRAPForNoResults - In the implementation block
@property (getter=_clientRankingModel,nonatomic,readonly) GEOClientRankingModel * clientRankingModel;                                                                                    //@synthesize clientRankingModel=_clientRankingModel - In the implementation block
@property (getter=_sortPriorityMapping,nonatomic,readonly) GEOSortPriorityMapping * sortPriorityMapping;                                                                                 //@synthesize sortPriorityMapping=_sortPriorityMapping - In the implementation block
@property (getter=_autocompleteTopSectionIsQuerySuggestions,nonatomic,readonly) BOOL autocompleteTopSectionIsQuerySuggestions;                                                           //@synthesize autocompleteTopSectionIsQuerySuggestions=_autocompleteTopSectionIsQuerySuggestions - In the implementation block
@property (setter=_setTappedQuerySuggestionCompletion:,getter=_tappedQuerySuggestionCompletion,nonatomic,retain) MKLocalSearchCompletion * tappedQuerySuggestionCompletion;              //@synthesize tappedQuerySuggestionCompletion=_tappedQuerySuggestionCompletion - In the implementation block
@property (getter=_showAutocompleteClientSource,nonatomic,readonly) BOOL showAutocompleteClientSource;                                                                                   //@synthesize showAutocompleteClientSource=_showAutocompleteClientSource - In the implementation block
@property (assign,setter=_setShouldPreloadTransitInfo:,getter=_shouldPreloadTransitInfo,nonatomic) BOOL shouldPreloadTransitInfo;                                                        //@synthesize shouldPreloadTransitInfo=_shouldPreloadTransitInfo - In the implementation block
@property (getter=_sections,nonatomic,readonly) NSArray * sections;                                                                                                                      //@synthesize sections=_sections - In the implementation block
@property (assign,setter=_setPrivateFilterType:,getter=_privateFilterType,nonatomic) long long privateFilterType;                                                                        //@synthesize privateFilterType=_privateFilterType - In the implementation block
@property (assign,nonatomic) BOOL statefulQueriesEnabled; 
@property (nonatomic,copy) NSString * queryFragment;                                                                                                                                     //@synthesize queryFragment=_queryFragment - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK8 region;                                                                                                                                      //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) long long filterType;                                                                                                                                       //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) unsigned long long resultTypes;                                                                                                                             //@synthesize resultTypes=_resultTypes - In the implementation block
@property (nonatomic,copy) MKPointOfInterestFilter * pointOfInterestFilter;                                                                                                              //@synthesize pointOfInterestFilter=_pointOfInterestFilter - In the implementation block
@property (assign,nonatomic,__weak) id<MKLocalSearchCompleterDelegate> delegate;                                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (getter=isSearching,nonatomic,readonly) BOOL searching; 
-(id)init;
-(void)dealloc;
-(id<MKLocalSearchCompleterDelegate>)delegate;
-(void)setDelegate:(id<MKLocalSearchCompleterDelegate>)arg1 ;
-(void)setSource:(int)arg1 ;
-(NSString *)fragment;
-(NSString *)identifier;
-(int)source;
-(void)cancel;
-(NSArray *)results;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)context;
-(void)setFragment:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(SCD_Struct_MK8)region;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(void)setDeviceLocation:(CLLocation *)arg1 ;
-(GEOMapServiceTraits *)traits;
-(void)setTraits:(GEOMapServiceTraits *)arg1 ;
-(void)_updateFilters;
-(id)_sections;
-(void)setRegion:(SCD_Struct_MK8)arg1 ;
-(void)retry;
-(BOOL)_shouldDisplayNoResults;
-(void)setMapType:(unsigned long long)arg1 ;
-(unsigned long long)mapType;
-(CLLocation *)deviceLocation;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(long long)listType;
-(void)setListType:(long long)arg1 ;
-(long long)entriesType;
-(void)setEntriesType:(long long)arg1 ;
-(GEOSearchCategory *)categoryFilter;
-(void)setCategoryFilter:(GEOSearchCategory *)arg1 ;
-(void)_cancelTimer;
-(unsigned long long)resultTypes;
-(BOOL)isSearching;
-(void)setPointOfInterestFilter:(MKPointOfInterestFilter *)arg1 ;
-(MKPointOfInterestFilter *)pointOfInterestFilter;
-(SCD_Struct_MK8)boundingRegion;
-(void)setResultTypes:(unsigned long long)arg1 ;
-(BOOL)_shouldEnableRAPForNoResults;
-(BOOL)_shouldPreloadTransitInfo;
-(NSString *)queryFragment;
-(void)_notifyDelegatesWithResults:(id)arg1 sections:(id)arg2 shouldDisplayNoResults:(BOOL)arg3 shouldEnableRAPForNoResults:(BOOL)arg4 ticket:(id)arg5 ;
-(void)_handleCompletion:(id)arg1 shouldDisplayNoResults:(BOOL)arg2 shouldEnableRAPForNoResults:(BOOL)arg3 forTicket:(id)arg4 ;
-(double)timeSinceLastInBoundingRegion;
-(void)_markDirty;
-(id)_completionTicketForPrivateFilterType:(long long)arg1 traits:(id)arg2 ;
-(id)_completionTicketForFilterTypeWithTraits:(id)arg1 ;
-(id<MKAutocompleteAnalyticsProvider>)analyticsProvider;
-(void)_schedulePendingRequest;
-(void)_handleError:(id)arg1 forTicket:(id)arg2 ;
-(double)timeToNextRequest;
-(void)_scheduleRequestWithTimeToNextRequest:(double)arg1 ;
-(void)_markDirtyAndScheduleRequestWithTimeToNextRequest:(double)arg1 ;
-(void)_fireRequest;
-(void)_setPrivateFilterType:(long long)arg1 ;
-(void)setQueryFragment:(NSString *)arg1 ;
-(long long)_privateFilterType;
-(void)setRetainedSearchMetadata:(GEORetainedSearchMetadata *)arg1 ;
-(BOOL)resultsAreCurrent;
-(void)clearQueryState;
-(BOOL)statefulQueriesEnabled;
-(void)setStatefulQueriesEnabled:(BOOL)arg1 ;
-(void)setBoundingRegion:(SCD_Struct_MK8)arg1 ;
-(void)setTimeSinceLastInBoundingRegion:(double)arg1 ;
-(void)setAnalyticsProvider:(id<MKAutocompleteAnalyticsProvider>)arg1 ;
-(id)_clientRankingModel;
-(id)_sortPriorityMapping;
-(BOOL)_autocompleteTopSectionIsQuerySuggestions;
-(id)_tappedQuerySuggestionCompletion;
-(void)_setTappedQuerySuggestionCompletion:(id)arg1 ;
-(BOOL)_showAutocompleteClientSource;
-(void)_setShouldPreloadTransitInfo:(BOOL)arg1 ;
@end

