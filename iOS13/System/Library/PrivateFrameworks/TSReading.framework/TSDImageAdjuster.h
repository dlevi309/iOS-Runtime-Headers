/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {

	TSDImageAdjustments* mImageAdjustments;

}
-(id)init;
-(void)dealloc;
-(id)initWithImageAdjustments:(id)arg1 ;
-(CGImageRef)newFilteredImageForImage:(CGImageRef)arg1 enhancedImage:(CGImage*)arg2 ;
-(CGImageRef)p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImageRef)arg2 ;
@end

