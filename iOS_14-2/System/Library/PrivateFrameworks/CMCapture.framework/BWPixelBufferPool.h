/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_semaphore;
#import <CMCapture/CMCapture-Structs.h>
@class BWVideoFormat, NSString, NSDictionary, BWMemoryPool, NSObject;

@interface BWPixelBufferPool : NSObject {

	BWVideoFormat* _videoFormat;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalPixelBufferAttributes;
	os_unfair_lock_s _pixelBufferPoolConfigurationLock;
	CVPixelBufferPoolRef _pixelBufferPool;
	NSDictionary* _pixelBufferPoolAuxAttributes;
	int _pixelBufferPoolCreateError;
	BWMemoryPool* _memoryPool;
	BOOL _providesBackPressure;
	NSObject*<OS_dispatch_semaphore> _backPressureSemaphore;

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(int)_ensurePool;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 providesBackPressure:(BOOL)arg6 ;
-(int)preallocate;
-(unsigned long long)capacity;
-(unsigned)pixelFormat;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(void)flushToMinimumCapacity:(unsigned long long)arg1 ;
-(NSString *)name;
-(CVBufferRef)_newPixelBuffer;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(void)_flush;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)dealloc;
@end

