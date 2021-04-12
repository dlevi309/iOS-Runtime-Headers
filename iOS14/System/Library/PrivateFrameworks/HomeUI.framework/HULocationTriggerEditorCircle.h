/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SCD_Struct_HU11 boundingMapRect; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)circleWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(void)setRadius:(double)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(double)radius;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(SCD_Struct_HU11)boundingMapRect;
-(SCD_Struct_HU11)circleRect;
@end

