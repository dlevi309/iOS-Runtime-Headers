/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOCollectionSuggestionResult, NSString, GEOPublisherSuggestionResult, NSArray;

@interface GEOMapsSearchHomeSection : NSObject {

	GEOCollectionSuggestionResult* _collectionSuggestions;
	NSString* _name;
	GEOPublisherSuggestionResult* _publisherSuggestions;
	NSArray* _searchCategories;
	unsigned long long _sectionType;

}

@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long sectionType;                                     //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) NSArray * searchCategories;                                         //@synthesize searchCategories=_searchCategories - In the implementation block
@property (nonatomic,readonly) GEOCollectionSuggestionResult * collectionSuggestions;              //@synthesize collectionSuggestions=_collectionSuggestions - In the implementation block
@property (nonatomic,readonly) GEOPublisherSuggestionResult * publisherSuggestions;                //@synthesize publisherSuggestions=_publisherSuggestions - In the implementation block
-(NSString *)name;
-(unsigned long long)sectionType;
-(id)description;
-(GEOCollectionSuggestionResult *)collectionSuggestions;
-(BOOL)dataModelIsValid:(id)arg1 ;
-(NSArray *)searchCategories;
-(GEOPublisherSuggestionResult *)publisherSuggestions;
-(id)initWithMapsSearchHomeSection:(id)arg1 mapsResults:(id)arg2 ;
@end

