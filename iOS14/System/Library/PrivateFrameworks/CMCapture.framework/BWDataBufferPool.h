/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWDataBufferBackedFormat;
#import <CMCapture/CMCapture-Structs.h>
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

}

@property (readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) unsigned dataFormat; 
@property (nonatomic,readonly) CVDataBufferPoolRef cvDataBufferPool; 
@property (nonatomic,readonly) CFDictionaryRef cvDataBufferPoolAuxAttributes; 
+(void)initialize;
-(void)setCapacity:(unsigned long long)arg1 ;
-(void)flush;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)_ensurePool;
-(unsigned long long)capacity;
-(unsigned)dataFormat;
-(void)enumerateSurfacesUsingBlock:(/*^block*/id)arg1 ;
-(CVBufferRef)_newDataBuffer;
-(id)initWithFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(BOOL)arg4 ;
-(void)setCVDataBufferPool:(CVDataBufferPoolRef)arg1 attributes:(CFDictionaryRef)arg2 ;
-(CVBufferRef)newDataBuffer;
-(CVDataBufferPoolRef)cvDataBufferPool;
-(CFDictionaryRef)cvDataBufferPoolAuxAttributes;
-(NSString *)name;
-(void)prefetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_flush;
-(void)dealloc;
@end

