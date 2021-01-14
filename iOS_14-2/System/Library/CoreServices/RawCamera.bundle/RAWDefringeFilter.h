/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

