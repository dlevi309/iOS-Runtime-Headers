/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_HU11 boundingMapRect; 
@optional
-(BOOL)intersectsMapRect:(SCD_Struct_HU11)arg1;
-(BOOL)canReplaceMapContent;

@required
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_HU11)boundingMapRect;

@end

