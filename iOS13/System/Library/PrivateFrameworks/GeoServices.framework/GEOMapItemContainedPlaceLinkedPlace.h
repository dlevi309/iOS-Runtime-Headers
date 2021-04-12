/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)name;
-(BOOL)isValid;
-(id)_identifier;
-(SCD_Struct_GE32)coordinate;
-(int)referenceFrame;
-(id)_styleAttributes;
-(unsigned long long)_muid;
-(BOOL)_hasMUID;
-(int)_resultProviderID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(BOOL)_hasResultProviderID;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)initWithLinkedPlace:(id)arg1 ;
@end

