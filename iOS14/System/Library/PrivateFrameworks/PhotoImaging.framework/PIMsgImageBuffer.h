/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)format;
-(unsigned long long)width;
-(void*)bytes;
-(unsigned long long)height;
-(id)image;
-(void)setData:(NSMutableData *)arg1 ;
-(NSMutableData *)data;
-(void)dealloc;
-(unsigned long long)elementByteSize;
-(unsigned long long)rowElements;
-(id)initWithBytes:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
-(id)initWithData:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(long long)arg4 bytesPerComponent:(unsigned long long)arg5 format:(int)arg6 colorspace:(CGColorSpaceRef)arg7 ;
@end

