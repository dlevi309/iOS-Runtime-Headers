/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAGeometryOperator.h>

@interface IPACropOperator : IPAGeometryOperator {

	CGRect _cropRect;

}
+(id)operatorWithCropRect:(CGRect)arg1 ;
+(id)operatorWithIdentifier:(id)arg1 cropRect:(CGRect)arg2 ;
-(id)description;
-(id)transformForGeometry:(id)arg1 ;
@end

