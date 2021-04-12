/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(double)pitch;
-(void)setScale:(double)arg1 ;
-(void)setPitch:(double)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(CGSize)viewSize;
-(void)setMapRect:(SCD_Struct_PX2)arg1 ;
-(double)zoomLevel;
-(void)setZoomLevel:(double)arg1 ;
-(SCD_Struct_PX2)mapRect;
-(id)initWithMapRect:(SCD_Struct_PX2)arg1 andViewSize:(CGSize)arg2 zoomLevel:(double)arg3 pitch:(double)arg4 ;
-(BOOL)isSpanning180thMerdian;
-(id)viewPortsBySplitingAt180thMerdian;
@end

