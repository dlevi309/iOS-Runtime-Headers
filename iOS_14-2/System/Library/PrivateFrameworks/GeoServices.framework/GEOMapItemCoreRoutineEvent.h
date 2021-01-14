/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class NSDictionary, GEOMapItemClientAttributes, GEOPlace, NSString, NSDate, GEOAddressObject;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {

	NSDictionary* _addressDictionary;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPlace* _place;
	NSString* _eventName;
	NSString* _eventTitle;
	NSDate* _eventDate;
	BOOL _eventIsAllDay;
	GEOCoarseLocationLatLng _coordinate;
	GEOAddressObject* _addressObject;

}
-(BOOL)isEventAllDay;
-(id)weatherDisplayName;
-(id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(GEOCoarseLocationLatLng)arg6 clientAttributes:(id)arg7 ;
-(id)addressDictionary;
-(id)geoAddress;
-(id)addressObject;
-(GEOCoarseLocationLatLng)coordinate;
-(id)_clientAttributes;
-(BOOL)_hasResolvablePartialInformation;
-(id)_place;
-(id)eventName;
-(BOOL)_responseStatusIsIncomplete;
-(id)name;
-(id)description;
-(id)eventDate;
-(BOOL)isValid;
@end

