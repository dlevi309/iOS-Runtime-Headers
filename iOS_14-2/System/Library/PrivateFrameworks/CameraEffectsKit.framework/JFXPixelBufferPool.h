/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@interface JFXPixelBufferPool : NSObject {

	CVPixelBufferPoolRef _pixelBufferPool;
	unsigned _type;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned type;              //@synthesize type=_type - In the implementation block
-(id)initWithSize:(CGSize)arg1 ;
-(CGSize)size;
-(unsigned)type;
-(void)dealloc;
-(CVBufferRef)createPixelBuffer;
-(id)initWithSize:(CGSize)arg1 type:(unsigned)arg2 ;
@end

