/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWSourceNode.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface BWMetadataSourceNode : BWSourceNode {

	BOOL _running;
	opaqueCMFormatDescriptionRef _formatDescription;
	OpaqueCMClockRef _clock;
	NSObject*<OS_dispatch_queue> _emitSamplesDispatchQueue;

}

@property (nonatomic,readonly) opaqueCMFormatDescriptionRef formatDescription;              //@synthesize formatDescription=_formatDescription - In the implementation block
+(void)initialize;
-(OpaqueCMClockRef)clock;
-(BOOL)start:(id*)arg1 ;
-(id)nodeSubType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)appendMetadataSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(void)dealloc;
@end

