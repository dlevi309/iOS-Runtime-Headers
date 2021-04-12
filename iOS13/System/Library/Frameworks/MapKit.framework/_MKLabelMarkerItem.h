/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class VKLabelMarker;

@interface _MKLabelMarkerItem : GEOBaseMapItem {

	VKLabelMarker* _labelMarker;

}
+(id)labelMarkerItemWithLabelMarker:(id)arg1 ;
-(id)name;
-(BOOL)isValid;
-(id)_identifier;
-(CGSize)coordinate;
-(int)referenceFrame;
-(id)_styleAttributes;
-(unsigned long long)_muid;
-(id)_place;
-(BOOL)_hasMUID;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_isTransitDisplayFeature;
-(BOOL)_hasVenueFeatureType;
-(int)_venueFeatureType;
-(id)_venueInfo;
-(id)initWithLabelMarker:(id)arg1 ;
-(id)_labelMarker;
@end

