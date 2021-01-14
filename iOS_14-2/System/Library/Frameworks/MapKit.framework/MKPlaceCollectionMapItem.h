/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class MKMapItem, GEOPlaceCollectionItem;

@interface MKPlaceCollectionMapItem : NSObject {

	MKMapItem* _mapItem;
	GEOPlaceCollectionItem* _placeCollectionItem;

}

@property (nonatomic,readonly) MKMapItem * mapItem;                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) GEOPlaceCollectionItem * placeCollectionItem;              //@synthesize placeCollectionItem=_placeCollectionItem - In the implementation block
-(MKMapItem *)mapItem;
-(id)description;
-(GEOPlaceCollectionItem *)placeCollectionItem;
-(id)initWithMapItem:(id)arg1 placeCollectionItem:(id)arg2 ;
@end

