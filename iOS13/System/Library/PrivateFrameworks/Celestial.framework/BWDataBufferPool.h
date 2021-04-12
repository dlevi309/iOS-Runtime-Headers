/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol BWDataBufferBackedFormat;
#import <Celestial/Celestial-Structs.h>
@class NSString, NSDictionary;

@interface BWDataBufferPool : NSObject {

	id<BWDataBufferBackedFormat> _format;
	unsigned long long _capacity;
	NSString* _name;
	BOOL _clientProvidesPool;
	NSDictionary* _additionalDataBufferAttributes;
	os_unfair_lock_s _dataBufferPoolConfigurationLock;
	CVDataBufferPoolRef _dataBufferPool;
	NSDictionary* _dataBufferPoolAuxAttributes;
	int _dataBufferPoolCreateError;
	CFDictionaryRef _cvDataBufferPoolAuxAttributes;

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) CVDataBufferPoolRef cvDataBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvDataBufferPoolAuxAttributes;              //@synthesize cvDataBufferPoolAuxAttributes=_cvDataBufferPoolAuxAttributes - In the implementation block
+(void)initialize;
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_flush;
-(id)initWithFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 ;
-(unsigned)dataFormat;
-(int)_ensurePool;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVDataBufferPoolRef)cvDataBufferPool;
-(CVBufferRef)_newDataBuffer;
-(void)setCVDataBufferPool:(CVDataBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(CVBufferRef)newDataBuffer;
-(CFDictionaryRef)cvDAtaBufferPoolAuxAttributes;
-(CFDictionaryRef)cvDataBufferPoolAuxAttributes;
@end

