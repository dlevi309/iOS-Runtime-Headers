/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


#import <Celestial/Celestial-Structs.h>
@class BWVideoFormat, NSString, NSDictionary, BWMemoryPool;

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

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) CVPixelBufferPoolRef cvPixelBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvPixelBufferPoolAuxAttributes; 
+(void)initialize;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(unsigned)pixelFormat;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_flush;
-(CVBufferRef)newPixelBuffer;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 ;
-(void)preallocateWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)preallocate;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 additionalPixelBufferAttributes:(id)arg4 ;
-(id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 memoryPool:(id)arg5 ;
-(int)_ensurePool;
-(CVBufferRef)_newPixelBuffer;
-(void)setCVPixelBufferPool:(CVPixelBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(CVPixelBufferPoolRef)cvPixelBufferPool;
-(CFDictionaryRef)cvPixelBufferPoolAuxAttributes;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
@end

