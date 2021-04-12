/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface _CSIRenditionBlockData : NSObject {

	unsigned _dataPixelFormat;
	int _pixelFormat;
	char* _data;
	unsigned _nrows;
	unsigned long long _rowbytes;
	AQ _imageBytes;
	char _name[128];
	unsigned char _imageBlockReleaseCount;
	unsigned long long _sourceRowbytes;
	unsigned _allocateMemory : 1;
	unsigned _mmappedData : 1;

}
+(id)sharedCache;
-(void)dealloc;
-(const char*)bytes;
-(int)pixelFormat;
-(unsigned long long)rowbytes;
-(void)_allocateImageBytes;
-(void)_freeImageBytes;
-(void)_makeReadOnly;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 sourceRowbytes:(unsigned long long)arg3 pixelFormat:(int)arg4 ;
-(id)initWithBytes:(void*)arg1 pixelWidth:(unsigned)arg2 pixelHeight:(unsigned)arg3 sourceRowbytes:(unsigned long long)arg4 pixelFormat:(int)arg5 ;
-(void)updateFromCSIHeader:(const csiheader*)arg1 ;
-(void)setRowBytes:(unsigned long long)arg1 ;
-(unsigned long long)imageBytes;
-(unsigned)nrows;
-(BOOL)wasUsedTransiently;
-(void)tallyImageBlockRelease;
-(BOOL)expandCSIBitmapData:(csibitmap*)arg1 fromSlice:(slice)arg2 makeReadOnly:(BOOL)arg3 ;
@end

