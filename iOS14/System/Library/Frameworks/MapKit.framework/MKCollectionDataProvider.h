/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKCollectionDataProvider <NSObject>
@optional
-(long long)numberOfSections;
-(id)collectionAtIndex:(long long)arg1;
-(long long)numberOfCollections;
-(id)collections;
-(id)geoCollectionAtIndex:(long long)arg1;

@required
-(void)refreshCollections;
-(void)displayCollections;

@end

