/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLLocationUtils : NSObject
+(CLLocationCoordinate2D)defaultLocationCoordinate2D;
+(BOOL)canUseCoordinate:(CLLocationCoordinate2D)arg1 ;
+(PLCartesianCoordinate3D)cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2 ;
+(id)predicateForAssetWithLocation;
+(BOOL)locationIsCoarse:(id)arg1 ;
+(id)predicateForMomentWithLocation;
+(BOOL)horizontalAccuracyIsCoarse:(double)arg1 ;
@end

