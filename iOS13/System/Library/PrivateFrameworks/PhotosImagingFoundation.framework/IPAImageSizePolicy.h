/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface IPAImageSizePolicy : NSObject <NSCoding>
+(id)originalSizePolicy;
+(id)scalePolicyWithScale:(double)arg1 ;
+(id)bestFitPolicyInSize:(CGSize)arg1 ;
+(id)bestFitPolicyInSquare:(double)arg1 ;
+(id)bestFitPolicyShortestEdge:(double)arg1 ;
+(id)bestFitPolicyWithWidth:(double)arg1 ;
+(id)bestFitPolicyWithHeight:(double)arg1 ;
+(id)bestFitPolicyThumbnail;
+(id)bestFitPolicyWithTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenTotalPixelCount:(long long)arg1 ;
+(id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)arg1 ;
+(id)largestPolicyWithPolicies:(id)arg1 ;
+(id)bestFitPolicyWithNominalShortSide:(long long)arg1 minLongSide:(long long)arg2 maxLongSide:(long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)transformSize:(CGSize)arg1 ;
-(PFIntSize_st)integralTransformSize:(CGSize)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
-(BOOL)isOriginalSizePolicy;
@end

