/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCVideoSink.h>
#import <libobjc.A.dylib/VCVideoCaptureClient.h>

@class NSString;

@interface VCVideoCaptureConverter : NSObject <VCVideoSink, VCVideoCaptureClient> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)delegate;
-(BOOL)onVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 attribute:(SCD_Struct_Vi133)arg3 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)sourceFrameRateDidChange:(unsigned)arg1 ;
-(void)dealloc;
-(void)setSourceFramerate:(unsigned)arg1 ;
-(void)thermalLevelDidChange:(int)arg1 ;
-(id)clientCaptureRule;
-(void)avConferencePreviewError:(id)arg1 ;
-(void)cameraAvailabilityDidChange:(BOOL)arg1 ;
-(void)updateThrottleRate;
-(BOOL)processFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)setDestinationFramerate:(unsigned)arg1 ;
-(unsigned)sourceFramerate;
-(unsigned)destinationFramerate;
@end

