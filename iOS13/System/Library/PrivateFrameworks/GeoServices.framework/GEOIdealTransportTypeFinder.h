/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOIdealTransportTypeFinder : NSObject
+(id)_transportTypePreferenceAsString:(long long)arg1 ;
+(long long)idealTransportTypeForOrigin:(SCD_Struct_GE32)arg1 destination:(SCD_Struct_GE32)arg2 mapType:(int)arg3 ;
+(long long)idealTransportTypeForMapType:(int)arg1 ;
+(long long)idealTransportType;
@end

