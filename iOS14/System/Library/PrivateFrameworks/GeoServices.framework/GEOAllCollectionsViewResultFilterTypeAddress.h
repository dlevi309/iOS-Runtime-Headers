/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDAllCollectionsViewResultFilterTypeAddress, GEOPDEntity, GEOMapItemIdentifier, NSString;

@interface GEOAllCollectionsViewResultFilterTypeAddress : NSObject {

	GEOPDAllCollectionsViewResultFilterTypeAddress* _filterAddressIdentifier;
	GEOPDEntity* _placeEntity;

}

@property (nonatomic,readonly) GEOMapItemIdentifier * filterAddressIdentifier; 
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) GEOPDAllCollectionsViewResultFilterTypeAddress * addressIdentifier; 
-(NSString *)displayString;
-(GEOPDAllCollectionsViewResultFilterTypeAddress *)addressIdentifier;
-(id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2 ;
-(GEOMapItemIdentifier *)filterAddressIdentifier;
@end

