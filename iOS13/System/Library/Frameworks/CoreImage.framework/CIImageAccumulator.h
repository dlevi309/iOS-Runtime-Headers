/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIImageAccumulator : NSObject {

	void* _state;

}

@property (readonly) CGRect extent; 
@property (readonly) int format; 
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 ;
+(id)imageAccumulatorWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)clear;
-(CGRect)extent;
-(int)format;
-(id)image;
-(void)setImage:(id)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 options:(id)arg3 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 ;
-(id)initWithExtent:(CGRect)arg1 format:(int)arg2 colorSpace:(CGColorSpaceRef)arg3 ;
-(void)setImage:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(void)commitUpdates:(id)arg1 ;
@end

