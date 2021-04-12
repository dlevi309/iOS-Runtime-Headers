/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@interface VCVideoCaptureConverter : NSObject <VCVideoCaptureClient> {

	unsigned _destinationFramerate;
	unsigned _sourceFramerate;
	double _throttleRate;
	unsigned _sourceFrameCount;
	unsigned _lastDestinationFrameCount;
	BOOL _isThrottling;
	id _delegate;

}

@property (assign,nonatomic) unsigned sourceFramerate;                   //@synthesize sourceFramerate=_sourceFramerate - In the implementation block
@property (assign,nonatomic) unsigned destinationFramerate;              //@synthesize destinationFramerate=_destinationFramerate - In the implementation block
-(void)dealloc;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSourceFramerate:(unsigned)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(BOOL)onCaptureFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)updateThrottleRate;
-(BOOL)processFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDestinationFramerate:(unsigned)arg1 ;
-(unsigned)sourceFramerate;
-(unsigned)destinationFramerate;
@end

