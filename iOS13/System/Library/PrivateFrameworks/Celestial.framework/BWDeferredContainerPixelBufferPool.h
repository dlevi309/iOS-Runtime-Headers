/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWPixelBufferPool.h>

@class BWVideoFormat;

@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {

	BWVideoFormat* _videoFormat;

}

@property (nonatomic,readonly) BWVideoFormat * videoFormat;                                 //@synthesize videoFormat=_videoFormat - In the implementation block
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)dealloc;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(BWVideoFormat *)videoFormat;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
@end

