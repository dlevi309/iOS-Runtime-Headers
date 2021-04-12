/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapTransitPoint.h>

@class NSString, GEOMapAccess;

@interface GEOMapAccessTransitNodeBase : NSObject <GEOMapTransitPoint> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapNodeTransit>* _node;
	double _boundingRadius;
	SCD_Struct_GE40 _boundingRect;
	SCD_Struct_GE32* _polygonPoints;
	long long _polygonPointsCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE32 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius;                       //@synthesize boundingRadius=_boundingRadius - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE40 boundingRect;                //@synthesize boundingRect=_boundingRect - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE32* polygonPoints;              //@synthesize polygonPoints=_polygonPoints - In the implementation block
@property (nonatomic,readonly) long long polygonPointsCount;                //@synthesize polygonPointsCount=_polygonPointsCount - In the implementation block
-(void)dealloc;
-(NSString *)description;
-(SCD_Struct_GE32)coordinate;
-(SCD_Struct_GE40)boundingRect;
-(unsigned long long)transitID;
-(id)findGeometryWithCompletionHandler:(/*^block*/id)arg1 ;
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1 ;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)internalName;
-(double)boundingRadius;
-(SCD_Struct_GE32*)polygonPoints;
-(long long)polygonPointsCount;
-(id)initWithMap:(id)arg1 node:(shared_ptr<geo::MapNodeTransit>*)arg2 ;
@end

