/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOPDPublisherViewResultFilterAddress, GEOPDEntity, GEOMapItemIdentifier, NSString;

@interface GEOPublisherViewResultFilterAddress : NSObject {

	GEOPDPublisherViewResultFilterAddress* _filterAddressIdentifier;
	GEOPDEntity* _placeEntity;

}

@property (nonatomic,readonly) GEOMapItemIdentifier * filterAddressIdentifier; 
@property (nonatomic,readonly) NSString * displayString; 
@property (nonatomic,readonly) GEOPDPublisherViewResultFilterAddress * addressIdentifier; 
-(NSString *)displayString;
-(GEOPDPublisherViewResultFilterAddress *)addressIdentifier;
-(id)initWithFilterAddressIdentifier:(id)arg1 withPlaces:(id)arg2 ;
-(GEOMapItemIdentifier *)filterAddressIdentifier;
@end

