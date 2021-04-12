/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <MapKit/MKCircle.h>

@interface HUReverseCircleOverlay : MKCircle {

	SCD_Struct_HU9 _boundingRect;

}

@property (assign,nonatomic) SCD_Struct_HU9 boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 boundingMapRect:(SCD_Struct_HU9)arg3 ;
-(SCD_Struct_HU9)boundingRect;
-(SCD_Struct_HU9)boundingMapRect;
-(void)setBoundingRect:(SCD_Struct_HU9)arg1 ;
-(SCD_Struct_HU9)innerCircleBoundingMapRect;
@end

