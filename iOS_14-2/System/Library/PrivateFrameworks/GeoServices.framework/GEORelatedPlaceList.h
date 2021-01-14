/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDRelatedPlace, NSArray;

@interface GEORelatedPlaceList : NSObject {

	GEOPDRelatedPlace* _relatedPlace;

}

@property (nonatomic,readonly) NSArray * mapIdentifiers; 
@property (nonatomic,readonly) int type; 
-(int)type;
-(id)initWithRelatedPlace:(id)arg1 ;
-(NSArray *)mapIdentifiers;
@end

