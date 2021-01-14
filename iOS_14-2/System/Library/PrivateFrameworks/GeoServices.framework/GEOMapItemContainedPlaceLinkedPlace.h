/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOPDLinkedPlace, GEOMapItemIdentifier, GEOFeatureStyleAttributes;

@interface GEOMapItemContainedPlaceLinkedPlace : GEOBaseMapItem {

	GEOPDLinkedPlace* _linkedPlace;
	GEOMapItemIdentifier* _identifier;
	GEOFeatureStyleAttributes* _styleAttributes;

}
-(BOOL)_hasMUID;
-(id)initWithLinkedPlace:(id)arg1 ;
-(unsigned long long)_muid;
-(id)_styleAttributes;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)_hasResolvablePartialInformation;
-(int)_resultProviderID;
-(BOOL)_hasResultProviderID;
-(BOOL)_responseStatusIsIncomplete;
-(int)referenceFrame;
-(id)name;
-(id)description;
-(BOOL)isValid;
-(id)_identifier;
-(BOOL)_isInLinkedPlaceRelationship;
@end

