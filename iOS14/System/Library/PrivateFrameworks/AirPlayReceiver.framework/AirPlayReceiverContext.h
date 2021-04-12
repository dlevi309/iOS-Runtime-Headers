/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/


@protocol OS_dispatch_queue;
#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
@class NSObject, AirPlayReceiverMediaRemoteHelper;

@interface AirPlayReceiverContext : NSObject {

	AirPlayReceiverSessionPrivate* _session;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned char _receiverUIStarted;
	unsigned _receiverUISessionID;
	float _outputVolume;
	unsigned _powerAssertion;
	AirPlayReceiverMediaRemoteHelper* _mediaRemoteHelper;

}
-(void)handleMRCommand:(unsigned)arg1 translatedAPCommand:(unsigned)arg2 withOptions:(CFDictionaryRef)arg3 ;
@end

