/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy {

	double _fitWidth;

}
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)description;
-(id)initWithWidth:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
@end

