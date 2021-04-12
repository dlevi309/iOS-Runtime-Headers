/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE36 boundingRect; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(NSString *)internalName;
-(GEOCoarseLocationLatLng)coordinate;
-(SCD_Struct_GE36)boundingRect;
-(unsigned long long)transitID;
-(double)boundingRadius;
-(GEOCoarseLocationLatLng*)polygonPoints;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(long long)polygonPointsCount;
-(double)distanceInMetersFrom:(GEOCoarseLocationLatLng)arg1;

@end

