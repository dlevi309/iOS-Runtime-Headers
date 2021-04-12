/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGRect)boundingBox;
-(CVBufferRef)createSaliencyImageAndReturnError:(id*)arg1 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 rawSaliencyImage:(CVBufferRef)arg2 originalImageSize:(CGSize)arg3 salientObjectBoundingBoxes:(id)arg4 ;
-(id)salientObjectsAndReturnError:(id*)arg1 ;
-(void)_computeBoundingBoxes;
-(NSArray *)salientObjects;
-(CGRect)narrowedBoundingBox;
@end

