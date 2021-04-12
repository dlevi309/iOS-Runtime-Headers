/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
*/


@class NSArray, CIContext;

@interface BitmapFilterer : NSObject {

	NSArray* filters;
	const unsigned short* sourceBitmap;
	void* targetBitmap;
	unsigned rowCount;
	unsigned columnCount;
	unsigned sourceRowBytes;
	unsigned targetRowBytes;
	unsigned bitsPerComponent;
	unsigned samplesPerPixel;
	CIContext* context;

}
+(void)applyFilters:(id)arg1 toBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(void)dealloc;
-(id)outputImage;
-(id)inputImage;
-(id)initWithFilters:(id)arg1 sourceBitmap:(const unsigned short*)arg2 targetBitmap:(void*)arg3 rowCount:(unsigned)arg4 columnCount:(unsigned)arg5 sourceRowBytes:(unsigned)arg6 targetRowBytes:(unsigned)arg7 bitsPerComponent:(unsigned)arg8 context:(id)arg9 ;
-(void)applyFilters;
@end

