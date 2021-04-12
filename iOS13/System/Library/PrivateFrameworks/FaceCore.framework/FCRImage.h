/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
*/


@interface FCRImage : NSObject {

	unsigned long long width;
	unsigned long long height;
	unsigned long long bytesPerRow;
	char* rawDataBuffer;
	char* alignedDataBuffer;
	BOOL freeBufferWhenDone;

}

@property (assign) unsigned long long width; 
@property (assign) unsigned long long height; 
@property (assign) unsigned long long bytesPerRow; 
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char*)arg4 freeBufferWhenDone:(BOOL)arg5 ;
-(char*)getAlignedImageData;
@end

