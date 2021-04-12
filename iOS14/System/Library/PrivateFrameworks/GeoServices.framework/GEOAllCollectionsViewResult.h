/*
* Generated on Thursday, January 14, 2021 at 2:21:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDAllCollectionsViewResult, NSArray;

@interface GEOAllCollectionsViewResult : NSObject {

	GEOPDAllCollectionsViewResult* _allCollectionsViewResult;
	NSArray* _places;

}

@property (nonatomic,readonly) NSArray * collectionIdentifiers; 
@property (nonatomic,readonly) NSArray * resultFilters; 
-(NSArray *)resultFilters;
-(id)initWithAllCollectionsViewResult:(id)arg1 withPlaces:(id)arg2 ;
-(id)initWithAllCollectionsViewResult:(id)arg1 ;
-(NSArray *)collectionIdentifiers;
@end

