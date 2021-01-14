/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(id)unpackZilchPoints:(id)arg1 ;
+(unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackBasicPoints:(id)arg1 ;
+(id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(SCD_Struct_GE32)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3 ;
+(void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)compressedZilchDataFromPoints:(void*)arg1 fromPointIndex:(unsigned long long)arg2 pointCount:(unsigned long long)arg3 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3 ;
+(id)debugDescriptionForCompressedZilchData:(id)arg1 ;
@end

