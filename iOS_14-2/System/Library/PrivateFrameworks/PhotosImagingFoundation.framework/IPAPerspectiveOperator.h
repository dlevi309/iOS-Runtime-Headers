/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAPerspectiveOperator : IPAGeometryOperator {

	double _xAngle;
	double _yAngle;
	double _dx;
	double _dy;

}
+(id)operatorWithAngleX:(double)arg1 Y:(double)arg2 dx:(double)arg3 dy:(double)arg4 ;
+(id)operatorWithIdentifier:(id)arg1 angleX:(double)arg2 Y:(double)arg3 dx:(double)arg4 dy:(double)arg5 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

