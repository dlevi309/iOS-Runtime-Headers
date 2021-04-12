/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol GEOCompletionItem;
#import <MapKit/MapKit-Structs.h>
@class NSString, MKMapItem, NSArray, GEOSearchCategory, GEOResolvedItem, GEODirectionIntent, GEORetainedSearchMetadata, GEOServerResultScoreMetadata, GEOCollectionResult, GEOPublisherResult;

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
@property (nonatomic,readonly) GEOCollectionResult * collectionResult; 
@property (nonatomic,readonly) GEOPublisherResult * publisherResult; 
@property (nonatomic,readonly) NSArray * childItems; 
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
-(long long)_type;
-(void)setSourceID:(NSString *)arg1 ;
-(GEODirectionIntent *)directionIntent;
-(NSArray *)childItems;
-(NSString *)subtitle;
-(int)_placeType;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(id<GEOCompletionItem>)geoCompletionItem;
-(BOOL)_alreadySentFeedback;
-(id)_geoCompletionItem;
-(GEOSearchCategory *)category;
-(GEORetainedSearchMetadata *)retainedSearchMetadata;
-(unsigned long long)serverSectionIndex;
-(unsigned long long)serverItemIndexInSection;
-(MKMapItem *)mapItem;
-(id)description;
-(void)setLocalizedSectionHeader:(NSString *)arg1 ;
-(long long)sortPriority;
-(BOOL)hasSortPriority;
-(id)calloutTitle;
-(id)queryLine;
-(NSString *)localizedSectionHeader;
-(BOOL)getCoordinate:(CLLocationCoordinate2D*)arg1 ;
-(void)sendFeedback;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(long long)entryTapBehavior;
-(NSArray *)displayLines;
-(long long)autocompleteCellType;
-(BOOL)hasQueryAcceleratorAffordanceEnabled;
-(GEOCollectionResult *)collectionResult;
-(GEOPublisherResult *)publisherResult;
-(unsigned long long)hash;
-(id)copyStorage;
-(NSString *)sourceID;
-(NSArray *)titleHighlightRanges;
-(NSArray *)subtitleHighlightRanges;
-(id)initWithGeoCompletionItem:(id)arg1 serverSectionIndex:(unsigned long long)arg2 serverItemIndexInSection:(unsigned long long)arg3 ;
-(BOOL)_hasDisambiguationRadiusMeters;
-(id)iconWithScale:(double)arg1 ;
-(MKLocalSearchCompletion *)directionIntentOrigin;
-(void)setDirectionIntentOrigin:(MKLocalSearchCompletion *)arg1 ;
-(MKLocalSearchCompletion *)directionIntentDestination;
-(void)setDirectionIntentDestination:(MKLocalSearchCompletion *)arg1 ;
-(NSString *)title;
-(GEOResolvedItem *)clientResolved;
-(GEOServerResultScoreMetadata *)serverResultScoreMetadata;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)queryAcceleratorCompletionString;
-(float)_disambiguationRadiusMeters;
@end

