/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class CMMotionManager, NSObject;

@interface BWCoreMotionMetadataSourceNode : BWSourceNode {

	CMMotionManager* _motionManager;
	int _bufferGenerationRate;
	int _samplesPerBuffer;
	BOOL _running;
	BWCoreMotionMetadataSampleData* _sampleDataForBuffer;
	int _numSamplesInBuffer;
	opaqueCMFormatDescriptionRef _boxedMetadataFormatDescription;
	unsigned _localIDOfCoreMotionMetadata_BE;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;
	opaqueCMFormatDescriptionRef _formatDescription;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
+(int)extractBWCoreMotionMetadataFromBlockBuffer:(OpaqueCMBlockBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
+(int)extractBWCoreMotionMetadataFromSampleBuffer:(opaqueCMSampleBufferRef)arg1 intoNativeEndianSampleData:(BWCoreMotionMetadataSampleData*)arg2 ;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(id)nodeSubType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(BOOL)stop:(id*)arg1 ;
-(void)_emitMetadataSampleBuffer;
-(id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2 ;
-(void)dealloc;
@end

