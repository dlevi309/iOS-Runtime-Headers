/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/

#import <RawCamera/RawCamera-Structs.h>
#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber, NSString;

@interface RAWDefringeFilter : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputWidth;
	NSNumber* inputAxialWidth;
	id inputColorSpace;

}

@property (nonatomic,copy,readonly) NSString * deFringeKernelSource; 
@property (nonatomic,copy,readonly) NSString * fringeDirectionsKernelSource; 
@property (nonatomic,copy,readonly) NSString * fringeEdgesKernelSource; 
-(id)outputImage;
-(CGRect)expandByOneROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByTwoROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByThreeROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByFourROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandByFiveROI:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandSelect:(int)arg1 destRect:(CGRect)arg2 ;
-(CGRect)expandSelectN:(int)arg1 destRect:(CGRect)arg2 userInfo:(id)arg3 ;
-(id)kernelSourceWithBuffer:(const char*)arg1 inflatedSize:(unsigned long long)arg2 deflatedSize:(unsigned long long)arg3 ;
-(NSString *)deFringeKernelSource;
-(NSString *)fringeDirectionsKernelSource;
-(NSString *)fringeEdgesKernelSource;
@end

