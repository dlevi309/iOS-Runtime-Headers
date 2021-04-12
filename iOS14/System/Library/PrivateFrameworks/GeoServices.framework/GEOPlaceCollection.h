/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPlaceCollection, GEOPublisher, GEOCollectionPublisherAttribution, NSString, GEOMapItemIdentifier, NSArray, NSDate, NSURL;

@interface GEOPlaceCollection : NSObject {

	GEOPDPlaceCollection* _collection;
	GEOPublisher* _publisher;
	GEOCollectionPublisherAttribution* _publisherAttribution;
	NSString* _publisherAttributionIdentifierString;

}

@property (nonatomic,readonly) NSString * collectionTitle; 
@property (nonatomic,readonly) NSString * collectionDescription; 
@property (nonatomic,readonly) GEOMapItemIdentifier * collectionIdentifier; 
@property (nonatomic,readonly) NSArray * photos; 
@property (nonatomic,readonly) NSArray * itemIds; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (nonatomic,readonly) NSString * authorName; 
@property (nonatomic,readonly) id<GEOMapItemPhoto> authorPhoto; 
@property (nonatomic,readonly) NSURL * collectionURL; 
@property (getter=isSuppressed,nonatomic,readonly) BOOL suppressed; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (nonatomic,readonly) GEOPublisher * publisher;                                              //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,readonly) GEOCollectionPublisherAttribution * publisherAttribution;              //@synthesize publisherAttribution=_publisherAttribution - In the implementation block
@property (nonatomic,readonly) NSString * publisherAttributionIdentifierString;                       //@synthesize publisherAttributionIdentifierString=_publisherAttributionIdentifierString - In the implementation block
-(GEOPublisher *)publisher;
-(BOOL)isBlocked;
-(GEOMapItemIdentifier *)collectionIdentifier;
-(unsigned long long)numberOfItems;
-(NSDate *)lastModifiedDate;
-(NSString *)authorName;
-(NSString *)collectionTitle;
-(NSString *)collectionDescription;
-(id<GEOMapItemPhoto>)authorPhoto;
-(BOOL)isSuppressed;
-(id)initWithCollection:(id)arg1 usingAttribution:(id)arg2 ;
-(NSURL *)collectionURL;
-(GEOCollectionPublisherAttribution *)publisherAttribution;
-(NSString *)publisherAttributionIdentifierString;
-(NSArray *)photos;
-(unsigned long long)hash;
-(NSArray *)itemIds;
-(BOOL)isEqual:(id)arg1 ;
@end

