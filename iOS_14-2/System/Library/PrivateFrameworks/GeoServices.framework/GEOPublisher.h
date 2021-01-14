/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPublisher, GEOCollectionPublisherAttribution, GEOMapItemIdentifier, NSString, NSURL;

@interface GEOPublisher : NSObject {

	GEOPDPublisher* _publisher;
	GEOCollectionPublisherAttribution* _publisherAttribution;

}

@property (nonatomic,readonly) long long totalCollectionCount; 
@property (nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (nonatomic,readonly) NSString * publisherDescription; 
@property (nonatomic,readonly) NSURL * publisherURL; 
@property (getter=isSuppressed,nonatomic,readonly) BOOL suppressed; 
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked; 
@property (nonatomic,readonly) GEOCollectionPublisherAttribution * publisherAttribution;              //@synthesize publisherAttribution=_publisherAttribution - In the implementation block
-(BOOL)isBlocked;
-(id)initWithPublisher:(id)arg1 usingAttribution:(id)arg2 ;
-(BOOL)isSuppressed;
-(GEOCollectionPublisherAttribution *)publisherAttribution;
-(unsigned long long)hash;
-(GEOMapItemIdentifier *)identifier;
-(NSString *)publisherDescription;
-(long long)totalCollectionCount;
-(NSURL *)publisherURL;
-(BOOL)isEqual:(id)arg1 ;
@end

