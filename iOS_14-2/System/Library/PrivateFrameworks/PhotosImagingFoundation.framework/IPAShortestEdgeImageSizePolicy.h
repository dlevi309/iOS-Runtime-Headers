/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@interface IPAShortestEdgeImageSizePolicy : IPAImageSizePolicy {

	double _shortestEdge;

}
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBestFitPolicy;
-(id)initWithShortestEdge:(double)arg1 ;
@end

