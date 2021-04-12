/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSDImageRepCachedSizedImage : NSObject {

	CGImageRef mImageRef;
	CGPathRef mImageMaskPath;
	BOOL mImageHasMaskBakedIn;
	BOOL mImageHasAdjustmentsBakedImage;
	long long mImageOrientation;
	CGSize mImageSize;

}

@property (assign,nonatomic) CGImageRef imageRef; 
@property (assign,nonatomic) CGPathRef imageMaskPath; 
@property (assign,nonatomic) CGSize imageSize; 
@property (assign,nonatomic) long long imageOrientation; 
@property (assign,nonatomic) BOOL imageHasMaskBakedIn; 
@property (assign,nonatomic) BOOL imageHasAdjustmentsBakedImage; 
-(void)dealloc;
-(long long)imageOrientation;
-(void)setImageOrientation:(long long)arg1 ;
-(CGSize)imageSize;
-(CGImageRef)imageRef;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
-(CGPathRef)imageMaskPath;
-(void)setImageMaskPath:(CGPathRef)arg1 ;
-(BOOL)imageHasMaskBakedIn;
-(void)setImageHasMaskBakedIn:(BOOL)arg1 ;
-(BOOL)imageHasAdjustmentsBakedImage;
-(void)setImageHasAdjustmentsBakedImage:(BOOL)arg1 ;
@end

