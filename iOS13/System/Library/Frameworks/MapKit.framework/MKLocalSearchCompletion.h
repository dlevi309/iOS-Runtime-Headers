/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata;

@interface MKLocalSearchCompletion : NSObject {

	id<GEOCompletionItem> _item;
	unsigned long long _serverSectionIndex;
	unsigned long long _serverItemIndexInSection;
	NSString* _sourceID;
	NSString* _localizedSectionHeader;
	MKMapItem* _mapItem;
	BOOL _alreadySentFeedback;
	BOOL _shouldDisplayNoResults;
	BOOL _shouldEnableRAPForNoResults;
	MKLocalSearchCompletion* _directionIntentOrigin;
	MKLocalSearchCompletion* _directionIntentDestination;

}

@property (nonatomic,readonly) id<GEOCompletionItem> geoCompletionItem; 
@property (getter=_alreadySentFeedback,nonatomic,readonly) BOOL alreadySentFeedback;                                  //@synthesize alreadySentFeedback=_alreadySentFeedback - In the implementation block
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) GEOSearchCategory * category; 
@property (nonatomic,readonly) GEOResolvedItem * clientResolved; 
@property (nonatomic,readonly) GEODirectionIntent * directionIntent; 
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentOrigin;                                         //@synthesize directionIntentOrigin=_directionIntentOrigin - In the implementation block
@property (nonatomic,retain) MKLocalSearchCompletion * directionIntentDestination;                                    //@synthesize directionIntentDestination=_directionIntentDestination - In the implementation block
@property (nonatomic,readonly) GEORetainedSearchMetadata * retainedSearchMetadata; 
@property (nonatomic,readonly) BOOL hasSortPriority; 
@property (nonatomic,readonly) long long sortPriority; 
@property (nonatomic,readonly) long long entryTapBehavior; 
@property (nonatomic,readonly) GEOServerResultScoreMetadata * serverResultScoreMetadata; 
@property (nonatomic,readonly) unsigned long long serverSectionIndex;                                                 //@synthesize serverSectionIndex=_serverSectionIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long serverItemIndexInSection;                                           //@synthesize serverItemIndexInSection=_serverItemIndexInSection - In the implementation block
@property (nonatomic,readonly) BOOL hasQueryAcceleratorAffordanceEnabled; 
@property (nonatomic,readonly) NSString * queryAcceleratorCompletionString; 
@property (nonatomic,readonly) long long autocompleteCellType; 
@property (nonatomic,copy) NSString * sourceID;                                                                       //@synthesize sourceID=_sourceID - In the implementation block
@property (nonatomic,copy) NSString * localizedSectionHeader;                                                         //@synthesize localizedSectionHeader=_localizedSectionHeader - In the implementation block
@property (getter=_type,nonatomic,readonly) long long type; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_hasDisambiguationRadiusMeters,nonatomic,readonly) BOOL hasDisambiguationRadiusMeters; 
@property (getter=_disambiguationRadiusMeters,nonatomic,readonly) float disambiguationRadiusMeters; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * titleHighlightRanges; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSArray * subtitleHighlightRanges; 
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)_type;
-(GEOSearchCategory *)category;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)sourceID;
-(void)setSourceID:(NSString *)arg1 ;
-(int)_placeType;
-(GEODirectionIntent *)directionIntent;
-(MKMapItem *)mapItem;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(NSString *)localizedSectionHeader;
-(id)queryLine;
-(GEOResolvedItem *)clientResolved;
-(BOOL)hasSortPriority;
-(long long)sortPriority;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(NSString *)queryAcceleratorCompletionString;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(id)calloutTitle;
-(BOOL)getCoordinate:(CLLocationCoordinate2D*)arg1 ;
-(void)sendFeedback;
-(NSArray *)displayLines;
-(long long)entryTapBehavior;
-(long long)autocompleteCellType;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(unsigned long long)serverSectionIndex;
-(unsigned long long)serverItemIndexInSection;
-(float)_disambiguationRadiusMeters;
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)_alreadySentFeedback;
-(id)_geoCompletionItem;
-(NSArray *)titleHighlightRanges;
-(NSArray *)subtitleHighlightRanges;
-(id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3 ;
-(id)copyStorage;
-(BOOL)_hasDisambiguationRadiusMeters;
-(id)iconWithScale:(double)arg1 ;
-(MKLocalSearchCompletion *)directionIntentOrigin;
-(void)setDirectionIntentOrigin:(MKLocalSearchCompletion *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentDestination;
-(void)setDirectionIntentDestination:(MKLocalSearchCompletion *)arg1 ;
@end

