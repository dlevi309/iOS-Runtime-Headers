/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, GEORelatedCollectionSection, NSArray;

@interface GEORelatedEntitySection : NSObject {

	unsigned _index;
	NSString* _name;
	long long _sectionType;
	GEORelatedCollectionSection* _relatedCollectionSection;
	NSArray* _relatedPlaceCollections;

}

@property (nonatomic,readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned index;                                                      //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) long long sectionType;                                               //@synthesize sectionType=_sectionType - In the implementation block
@property (nonatomic,readonly) GEORelatedCollectionSection * relatedCollectionSection;              //@synthesize relatedCollectionSection=_relatedCollectionSection - In the implementation block
@property (nonatomic,readonly) NSArray * relatedPlaceCollections;                                   //@synthesize relatedPlaceCollections=_relatedPlaceCollections - In the implementation block
-(unsigned)index;
-(GEORelatedCollectionSection *)relatedCollectionSection;
-(id)init;
-(NSString *)name;
-(long long)sectionType;
-(id)placeCollectionsWithCollectionSection:(id)arg1 ;
-(NSArray *)relatedPlaceCollections;
-(id)initWithRelatedEntitySection:(id)arg1 mapsResults:(id)arg2 ;
@end

