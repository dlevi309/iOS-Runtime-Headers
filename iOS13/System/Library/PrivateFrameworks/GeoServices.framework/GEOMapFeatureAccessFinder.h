/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(Sphere<float, 2, std::__1::enable_if<true, void> >)_boundingCircleWithCenter:(SCD_Struct_GE32)arg1 radius:(double)arg2 inTile:(GEOTileKey)arg3 ;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsTransitLink:(SCD_Struct_GE162*)arg2 ;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsFeature:(SCD_Struct_GE202*)arg2 ;
-(void)setAllowNetwork:(BOOL)arg1 ;
-(BOOL)allowNetwork;
-(BOOL)_boundingCircle:(const Sphere<float, 2, std::__1::enable_if<true, void> >*)arg1 intersectsPoints:(SCD_Struct_GE200*)arg2 pointCount:(unsigned long long)arg3 ;
@end

