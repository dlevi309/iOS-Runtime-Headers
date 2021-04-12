/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSArray;

@interface BWMotionDataTimeMachine : NSObject {

	NSMutableArray* _cache;
	NSArray* _motionMetadataKeys;
	NSArray* _sampleBufferAttachmentKeys;
	unsigned long long _earliestAvailableMotionDataSerialNumber;
	unsigned long long _latestAvailableMotionDataSerialNumber;
	unsigned long long _capacity;
	BOOL _synchronizedSlaveMotionDataCachingEnabled;
	BOOL _cacheEntireMetadataDictionary;
	OpaqueFigSimpleMutexRef _propertyMutex;

}

@property (readonly) BOOL synchronizedSlaveMotionDataCachingEnabled; 
@property (readonly) unsigned long long earliestAvailableMotionDataSerialNumber; 
@property (readonly) unsigned long long latestAvailableMotionDataSerialNumber; 
+(void)initialize;
-(unsigned long long)addMotionDataToCacheForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 synchronizedSlaveMotionDataCachingEnabled:(BOOL)arg2 cacheEntireMetadataDictionary:(BOOL)arg3 ;
-(id)copyMotionDataForStartingSerialNumber:(unsigned long long)arg1 endingSerialNumber:(unsigned long long)arg2 ;
-(id)copyMotionDataForSerialNumber:(unsigned long long)arg1 ;
-(unsigned long long)earliestAvailableMotionDataSerialNumber;
-(unsigned long long)latestAvailableMotionDataSerialNumber;
-(BOOL)synchronizedSlaveMotionDataCachingEnabled;
-(id)_copyMotionDataForSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)dealloc;
@end

