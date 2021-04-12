/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPAScaleOperator : IPAGeometryOperator {

	double _xScale;
	double _yScale;

}
+(id)operatorWithScaleX:(double)arg1 Y:(double)arg2 ;
+(id)operatorWithIdentifier:(id)arg1 scaleX:(double)arg2 Y:(double)arg3 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

