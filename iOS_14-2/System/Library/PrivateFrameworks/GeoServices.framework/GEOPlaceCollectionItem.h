/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPlaceCollectionItem, NSString, GEOMapItemIdentifier, NSArray, NSURL;

@interface GEOPlaceCollectionItem : NSObject {

	GEOPDPlaceCollectionItem* _placeCollectionItem;

}

@property (nonatomic,readonly) NSString * itemDescription; 
@property (nonatomic,readonly) GEOMapItemIdentifier * itemIdentifier; 
@property (nonatomic,readonly) NSArray * photos; 
@property (nonatomic,readonly) BOOL supportsPhotoFallback; 
@property (nonatomic,readonly) NSURL * reviewUrl; 
-(GEOMapItemIdentifier *)itemIdentifier;
-(id)description;
-(NSURL *)reviewUrl;
-(BOOL)supportsPhotoFallback;
-(NSArray *)photos;
-(NSString *)itemDescription;
-(id)initWithPlaceCollectionItem:(id)arg1 ;
@end

