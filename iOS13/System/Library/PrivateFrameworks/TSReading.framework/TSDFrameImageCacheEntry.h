/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject {

	TSDFrameSpec* mFrameSpec;
	double mAssetScale;
	CGSize mSize;
	double mViewScale;
	CGImage* mImages[4];

}

@property (assign,nonatomic) TSDFrameSpec * frameSpec; 
@property (assign,nonatomic) double assetScale; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double viewScale; 
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(double)viewScale;
-(void)setAssetScale:(double)arg1 ;
-(TSDFrameSpec *)frameSpec;
-(double)assetScale;
-(CGImageRef)newImageForCALayer:(BOOL)arg1 mask:(BOOL)arg2 ;
-(void)setImage:(CGImageRef)arg1 forCALayer:(BOOL)arg2 mask:(BOOL)arg3 ;
-(void)setFrameSpec:(TSDFrameSpec *)arg1 ;
@end

