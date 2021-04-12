/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <CoreSuggestions/SGObject.h>
#import <libobjc.A.dylib/SGEventLocationForGeocode.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface SGLocation : SGObject <SGEventLocationForGeocode, NSCopying, NSSecureCoding> {

	unsigned long long _locationType;
	NSString* _label;
	NSString* _address;
	double _latitude;
	double _longitude;
	double _accuracy;
	double _quality;
	NSString* _airportCode;
	NSData* _handle;

}

@property (nonatomic,readonly) unsigned long long locationType;              //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * address;                           //@synthesize address=_address - In the implementation block
@property (getter=isGeocoded,nonatomic,readonly) BOOL geocoded; 
@property (nonatomic,readonly) double latitude;                              //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                             //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double accuracy;                              //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) double quality;                               //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) NSString * airportCode;                       //@synthesize airportCode=_airportCode - In the implementation block
@property (nonatomic,readonly) NSData * handle;                              //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToLocation:(id)arg1 ;
-(double)latitude;
-(long long)compare:(id)arg1 ;
-(NSData *)handle;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(double)quality;
-(NSString *)airportCode;
-(NSString *)description;
-(NSString *)address;
-(unsigned long long)locationType;
-(id)geocodeAddress;
-(id)geocodeLabel;
-(id)geocodeAirportCode;
-(BOOL)geocodeIsStart;
-(BOOL)geocodeIsEnd;
-(double)geocodeLatitude;
-(double)geocodeLongitude;
-(id)geocodeHandle;
-(double)accuracy;
-(double)geocodeAccuracy;
-(id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6 ;
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 accuracy:(double)arg7 quality:(double)arg8 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 airportCode:(id)arg5 latitude:(double)arg6 longitude:(double)arg7 accuracy:(double)arg8 quality:(double)arg9 ;
-(id)initWithLocation:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4 handle:(id)arg5 ;
-(id)initWithId:(id)arg1 origin:(id)arg2 type:(unsigned long long)arg3 label:(id)arg4 address:(id)arg5 airportCode:(id)arg6 latitude:(double)arg7 longitude:(double)arg8 accuracy:(double)arg9 quality:(double)arg10 handle:(id)arg11 ;
-(BOOL)isGeocoded;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
@end

