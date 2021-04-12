/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/


#import <PhotoImaging/PhotoImaging-Structs.h>
@class NSMutableData;

@interface PIMsgImageBuffer : NSObject {

	unsigned long long elementByteSize;
	unsigned long long rowElements;
	unsigned long long width;
	unsigned long long height;
	int format;
	CGColorSpaceRef bufferColorspace;
	NSMutableData* data;

}

@property (retain) NSMutableData * data; 
@property (readonly) unsigned long long elementByteSize; 
@property (readonly) unsigned long long rowElements; 
@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (readonly) int format; 
-(void)dealloc;
-(void*)bytes;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(unsigned long long)width;
-(unsigned long long)height;
-(int)format;
-(id)image;
-(unsigned long long)elementByteSize;
-(unsigned long long)rowElements;
-(id)initWithBytes:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
-(id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
@end

