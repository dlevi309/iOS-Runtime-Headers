/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {

	BWVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 providesBackPressure:(BOOL)arg6 ;
-(int)preallocate;
-(id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(BWVideoFormat *)videoFormat;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)dealloc;
@end

