/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSString, VideoAttributes, NSArray;

@interface VCVideoCapture : NSObject {

	id _captureServer;
	NSMutableArray* _sinkArray;
	NSString* _sourceUID;
	VideoAttributes* _localVideoAttributes;
	opaque_pthread_mutex_t _sinkArrayMutex;

}

@property (readonly) NSArray * sinkArray;                                        //@synthesize sinkArray=_sinkArray - In the implementation block
@property (readonly) NSObject*<VCVideoCaptureServer> captureServer; 
-(void)dealloc;
-(NSObject*<VCVideoCaptureServer>)captureServer;
-(void)distributeVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 preview:(BOOL)arg3 orientation:(int)arg4 fromCamera:(BOOL)arg5 camera:(int)arg6 switching:(BOOL)arg7 videoMirrored:(BOOL)arg8 ;
-(id)initWithCaptureServer:(id)arg1 ;
-(void)addSink:(id)arg1 ;
-(void)removeSink:(id)arg1 ;
-(NSArray *)sinkArray;
@end

