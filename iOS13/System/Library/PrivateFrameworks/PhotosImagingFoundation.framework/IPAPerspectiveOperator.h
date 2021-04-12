/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

