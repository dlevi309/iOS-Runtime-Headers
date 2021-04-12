/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SGEventLocationForGeocode.h>

@class NSString, NSData;

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode> {

	int _locationType;
	NSString* _label;
	NSString* _address;
	NSString* _airportCode;
	double _latitude;
	double _longitude;
	double _accuracy;
	double _quality;
	NSData* _handle;

}

@property (nonatomic,readonly) int locationType;                    //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) NSString * label;                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * airportCode;              //@synthesize airportCode=_airportCode - In the implementation block
@property (nonatomic,readonly) double latitude;                     //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                    //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) double accuracy;                     //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,readonly) double quality;                      //@synthesize quality=_quality - In the implementation block
@property (nonatomic,readonly) NSData * handle;                     //@synthesize handle=_handle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(long long)compare:(id)arg1 ;
-(NSData *)handle;
-(double)longitude;
-(void)encodeWithCoder:(id)arg1 ;
-(double)quality;
-(NSString *)airportCode;
-(NSString *)description;
-(NSString *)address;
-(int)locationType;
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
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(int)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 accuracy:(double)arg5 quality:(double)arg6 ;
-(id)initWithType:(int)arg1 label:(id)arg2 airportCode:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7 ;
-(id)initWithType:(int)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 handle:(id)arg9 ;
-(BOOL)isEqualToStorageLocation:(id)arg1 ;
-(id)convertToLocationWithId:(id)arg1 origin:(id)arg2 ;
@end

