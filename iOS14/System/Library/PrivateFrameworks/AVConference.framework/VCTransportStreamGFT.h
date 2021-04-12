/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStreamGFT : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;
	/*^block*/id _callback;
	void* _callbackContext;
	int _vtpCallbackId;
	fd_set _readFDsForCallback;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(tagVCMediaQueueRef)mediaQueue;
-(int)receivePacket:(SCD_Struct_VC195*)arg1 ;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(void)dealloc;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC195*)arg1 ;
-(int)registerPacketCallbackContext:(void*)arg1 callback:(/*^block*/id)arg2 ;
-(void)VCTransportStreamUnblock;
-(int)unregisterPacketCallback;
-(void)processVTPPacket:(VTPPacket*)arg1 ;
@end

