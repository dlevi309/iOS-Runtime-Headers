/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JTPixelBufferPool : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	unsigned _type;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(unsigned)type;
-(CGSize)size;
-(id)initWithSize:(CGSize)arg1 ;
-(CVBufferRef)createPixelBuffer;
-(id)initWithSize:(CGSize)arg1 type:(unsigned)arg2 ;
@end

