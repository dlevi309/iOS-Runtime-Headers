/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDCollectionResult, GEOPDComponent, GEOPlaceCollection, NSArray;

@interface GEOCollectionResult : NSObject {

	GEOPDCollectionResult* _collectionResult;
	GEOPDComponent* _collectionComponent;

}

@property (nonatomic,readonly) GEOPlaceCollection * collection; 
@property (nonatomic,readonly) NSArray * placeCollectionItems; 
+(id)collectionResultsFromResponse:(id)arg1 ;
-(GEOPlaceCollection *)collection;
-(id)initWithCollectionResult:(id)arg1 ;
-(NSArray *)placeCollectionItems;
@end

