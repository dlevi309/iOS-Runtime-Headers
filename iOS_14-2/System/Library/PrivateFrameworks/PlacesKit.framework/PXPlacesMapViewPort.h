/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
*/

#import <PlacesKit/PlacesKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXPlacesMapViewPort : NSObject <NSCopying> {

	double _zoomLevel;
	double _pitch;
	double _scale;
	CGSize _viewSize;
	SCD_Struct_PX2 _mapRect;

}

@property (assign,nonatomic) SCD_Struct_PX2 mapRect;              //@synthesize mapRect=_mapRect - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                     //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) double zoomLevel;                    //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (assign,nonatomic) double pitch;                        //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double scale;                        //@synthesize scale=_scale - In the implementation block
-(SCD_Struct_PX2)mapRect;
-(double)zoomLevel;
-(double)pitch;
-(CGSize)viewSize;
-(void)setZoomLevel:(double)arg1 ;
-(double)scale;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMapRect:(SCD_Struct_PX2)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMapRect:(SCD_Struct_PX2)arg1 andViewSize:(CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 ;
-(BOOL)isSpanning180thMerdian;
-(id)viewPortsBySplitingAt180thMerdian;
@end

