/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWSourceNode.h>

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
-(void)dealloc;
-(BOOL)start:(id*)arg1 ;
-(BOOL)stop:(id*)arg1 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(OpaqueCMClockRef)clock;
-(id)initWithFormatDescription:(opaqueCMFormatDescriptionRef)arg1 clock:(OpaqueCMClockRef)arg2 ;
-(id)nodeSubType;
-(void)appendMetadataSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end

