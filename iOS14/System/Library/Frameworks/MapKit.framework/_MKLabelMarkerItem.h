/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {

	VKLabelMarker* _labelMarker;

}
+(id)labelMarkerItemWithLabelMarker:(id)arg1 ;
-(BOOL)_hasMUID;
-(unsigned long long)_muid;
-(id)_styleAttributes;
-(int)_venueFeatureType;
-(CGSize)coordinate;
-(BOOL)_hasResolvablePartialInformation;
-(id)_place;
-(int)referenceFrame;
-(id)name;
-(id)_venueInfo;
-(BOOL)isValid;
-(id)_identifier;
-(BOOL)_hasVenueFeatureType;
-(id)initWithLabelMarker:(id)arg1 ;
-(id)_labelMarker;
-(BOOL)_isTransitDisplayFeature;
@end

