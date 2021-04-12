/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

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
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(OpaqueCMClockRef)clock;
-(id)nodeSubType;
-(void)_emitMetadataSampleBuffer;
-(id)initWithBufferGenerationRate:(int)arg1 samplesPerBuffer:(int)arg2 ;
@end

