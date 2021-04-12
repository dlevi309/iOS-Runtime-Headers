/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_HU9 boundingMapRect; 
@optional
-(BOOL)intersectsMapRect:(SCD_Struct_HU9)arg1;
-(BOOL)canReplaceMapContent;

@required
-(CLLocationCoordinate2D)coordinate;
-(SCD_Struct_HU9)boundingMapRect;

@end

