/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@protocol SGEventLocationForGeocode <NSObject>
@required
-(id)geocodeAddress;
-(id)geocodeLabel;
-(id)geocodeAirportCode;
-(BOOL)geocodeIsStart;
-(BOOL)geocodeIsEnd;
-(double)geocodeLatitude;
-(double)geocodeLongitude;
-(id)geocodeHandle;
-(double)geocodeAccuracy;
-(id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
-(id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;

@end

