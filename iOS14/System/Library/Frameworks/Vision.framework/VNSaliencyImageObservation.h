/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNPixelBufferObservation.h>

@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation {

	CGSize _mOriginalImageSize;
	CGRect _mSalientRegion;
	CGRect _mHighlySalientRegion;
	os_unfair_lock_s _mComputeBoundingBoxesLock;
	NSArray* _mSalientObjects;

}

@property (nonatomic,readonly) CGRect boundingBox; 
@property (nonatomic,readonly) CGRect narrowedBoundingBox; 
@property (nonatomic,readonly) NSArray * salientObjects; 
+(BOOL)supportsSecureCoding;
-(NSArray *)salientObjects;
-(CVBufferRef)createSaliencyImageAndReturnError:(id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(CVBufferRef)arg2 originalImageSize:(CGSize)arg3 salientObjectBoundingBoxes:(id)arg4 ;
-(id)salientObjectsAndReturnError:(id*)arg1 ;
-(void)_computeBoundingBoxes;
-(CGRect)narrowedBoundingBox;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

