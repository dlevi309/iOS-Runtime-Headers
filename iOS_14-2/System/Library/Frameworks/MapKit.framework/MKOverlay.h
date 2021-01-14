/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK6 boundingMapRect; 
@optional
-(BOOL)intersectsMapRect:(SCD_Struct_MK6)arg1;
-(BOOL)canReplaceMapContent;

@required
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_MK6)boundingMapRect;

@end

