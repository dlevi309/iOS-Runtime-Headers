/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString;


@protocol GEOMapTransitPoint <NSObject>
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE40 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE32* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@required
-(SCD_Struct_GE32)coordinate;
-(SCD_Struct_GE40)boundingRect;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1;
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE32*)polygonPoints;
-(long long)polygonPointsCount;

@end

