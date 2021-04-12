/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface HULocationTriggerEditorCircle : NSObject <MKOverlay> {

	double _radius;
	CLLocationCoordinate2D _coordinate;

}

@property (assign,nonatomic) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) double radius;                                  //@synthesize radius=_radius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_HU9 boundingMapRect; 
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(CLLocationCoordinate2D)coordinate;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(SCD_Struct_HU9)boundingMapRect;
-(SCD_Struct_HU9)circleRect;
@end

