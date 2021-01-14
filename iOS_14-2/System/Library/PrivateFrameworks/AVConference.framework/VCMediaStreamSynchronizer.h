/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamSyncSourceDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface VCMediaStreamSynchronizer : NSObject <VCMediaStreamSyncSourceDelegate> {

	tagVCMediaStreamSyncTime _source;
	tagVCMediaStreamSyncTime _destination;
	unsigned _destinationPlayoutSampleRTPTimestamp;
	int _destinationRTPTimestampWraps;
	double _sourcePlayoutSampleSystemTime;
	unsigned _sourcePlayoutSampleRTPTimestamp;
	int _sourceRTPTimestampWraps;
	int _sourceState;
	NSObject*<OS_dispatch_queue> _mediaStreamSynchronizerQueue;
	tagHANDLE* _videoPlayerHandle;
	/*^block*/id _destinationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)differenceBetweenRtpTimestamp:(unsigned)arg1 rtpTimestamp:(unsigned)arg2 ;
-(void)dealloc;
-(void)updateSourceState:(int)arg1 ;
-(void)updateSourceNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2 ;
-(void)updateSourcePlayoutSampleRTPTimestamp:(unsigned)arg1 systemTime:(double)arg2 uuid:(id)arg3 ;
-(id)initWithSourceSampleRate:(unsigned)arg1 destinationSampleRate:(unsigned)arg2 ;
-(void)setDestinationAlarmHandler:(/*^block*/id)arg1 ;
-(void)updateDestinationNTPTime:(double)arg1 withRTPTimeStamp:(unsigned)arg2 ;
-(void)scheduleDestinationPlaybackWithRTPTimestamp:(unsigned)arg1 ;
-(double)sourceTimeForDestinationRTPTimestamp:(unsigned)arg1 ;
-(void)callDestinationAlarmHandlerWithTimestamp:(unsigned)arg1 isClosing:(BOOL)arg2 ;
-(SCD_Struct_VC84)calculatePlayoutTimeWithRTPTimestamp:(unsigned)arg1 ;
@end

