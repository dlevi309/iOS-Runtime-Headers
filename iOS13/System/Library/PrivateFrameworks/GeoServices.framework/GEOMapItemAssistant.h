/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)name;
-(BOOL)isValid;
-(SCD_Struct_GE32)coordinate;
-(id)addressDictionary;
-(unsigned long long)_muid;
-(id)_place;
-(BOOL)_hasMUID;
-(id)addressObject;
-(id)weatherDisplayName;
-(id)geoAddress;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_responseStatusIsIncomplete;
-(id)_businessURL;
-(BOOL)_hasUserRatingScore;
-(unsigned)_sampleSizeForUserRatingScore;
-(float)_normalizedUserRatingScore;
-(id)initWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
@end

