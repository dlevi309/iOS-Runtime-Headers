/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStream : NSObject {

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
-(void)dealloc;
-(tagVCMediaQueueRef)mediaQueue;
-(int)receivePacket:(SCD_Struct_VC162*)arg1 ;
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC162*)arg1 ;
-(int)registerPacketCallbackContext:(void*)arg1 callback:(/*^block*/id)arg2 ;
-(void)VCTransportStreamUnblock;
-(int)unregisterPacketCallback;
-(void)processVTPPacket:(VTPPacket*)arg1 ;
@end

