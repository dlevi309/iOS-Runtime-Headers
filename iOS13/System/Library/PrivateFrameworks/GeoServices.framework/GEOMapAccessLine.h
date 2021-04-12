/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapLine.h>

@class GEOMapAccess, NSString;

@interface GEOMapAccessLine : NSObject <GEOMapLine> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdge>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coordinates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE32* coordinates; 
@property (nonatomic,readonly) double length; 
-(double)length;
-(SCD_Struct_GE32*)coordinates;
-(unsigned long long)coordinateCount;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdge>*)arg2 ;
-(double)distanceFromCoordinate:(SCD_Struct_GE32)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2 ;
@end

