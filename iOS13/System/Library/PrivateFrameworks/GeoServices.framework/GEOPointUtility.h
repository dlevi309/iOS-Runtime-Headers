/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOPointUtility : NSObject
+(unsigned long long)pointCount:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)unpackZilchPoints:(id)arg1 ;
+(id)unpackBasicPoints:(id)arg1 ;
+(void*)controlPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(SCD_Struct_GE36)pointAt:(unsigned long long)arg1 pointData:(id)arg2 usesZilch:(BOOL)arg3 ;
+(id)unpackPoints:(id)arg1 usesZilch:(BOOL)arg2 ;
+(id)zilchData:(id)arg1 fromPointIndex:(unsigned long long)arg2 ;
+(id)subdataFromPointData:(id)arg1 fromPointIndex:(unsigned long long)arg2 usesZilch:(BOOL)arg3 ;
@end

