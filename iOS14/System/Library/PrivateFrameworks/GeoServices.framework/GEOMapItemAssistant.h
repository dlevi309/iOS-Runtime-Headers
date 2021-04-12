/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class GEOLocation, NSDictionary, NSString, NSURL, GEOPlace, GEOAddressObject;

@interface GEOMapItemAssistant : GEOBaseMapItem {

	GEOLocation* _location;
	NSDictionary* _addressDictionary;
	NSString* _name;
	NSURL* _businessURL;
	NSString* _phoneNumber;
	unsigned long long _muid;
	NSString* _attributionID;
	unsigned _sampleSizeForUserRatingScore;
	float _normalizedUserRatingScore;
	GEOPlace* _place;
	GEOAddressObject* _addressObject;

}
-(float)_normalizedUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(id)weatherDisplayName;
-(BOOL)_hasMUID;
-(id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
-(id)addressDictionary;
-(id)geoAddress;
-(id)_businessURL;
-(id)addressObject;
-(unsigned long long)_muid;
-(unsigned)_sampleSizeForUserRatingScore;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)_hasResolvablePartialInformation;
-(id)_place;
-(BOOL)_responseStatusIsIncomplete;
-(id)name;
-(id)description;
-(BOOL)isValid;
@end

