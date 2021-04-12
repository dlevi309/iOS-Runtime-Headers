/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

