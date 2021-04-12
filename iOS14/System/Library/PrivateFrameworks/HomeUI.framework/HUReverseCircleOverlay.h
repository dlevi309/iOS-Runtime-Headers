/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <MapKit/MKCircle.h>

@interface HUReverseCircleOverlay : MKCircle {

	SCD_Struct_HU11 _boundingRect;

}

@property (assign,nonatomic) SCD_Struct_HU11 boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 boundingMapRect:(SCD_Struct_HU11)arg3 ;
-(SCD_Struct_HU11)boundingRect;
-(void)setBoundingRect:(SCD_Struct_HU11)arg1 ;
-(SCD_Struct_HU11)innerCircleBoundingMapRect;
-(SCD_Struct_HU11)boundingMapRect;
@end

