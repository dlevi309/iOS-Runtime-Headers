/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject;

@interface GEOMapFeatureAccessFinder : NSObject {

	BOOL _allowNetwork;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL allowNetwork;                               //@synthesize allowNetwork=_allowNetwork - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)init;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsFeature:(SCD_Struct_GE206*)arg2 ;
-(Sphere<float, 2, std::__1::enable_if<true, void> >)_boundingCircleWithCenter:(GEOCoarseLocationLatLng)arg1 radius:(double)arg2 inTile:(GEOTileKey)arg3 ;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsTransitLink:(SCD_Struct_GE166*)arg2 ;
-(BOOL)_featureHasValidGeometry:(SCD_Struct_GE206*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAllowNetwork:(BOOL)arg1 ;
-(BOOL)allowNetwork;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsPoints:(SCD_Struct_GE204*)arg2 pointCount:(unsigned long long)arg3 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

