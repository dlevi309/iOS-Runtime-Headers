/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCTextSender.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, VCAudioRedBuilder, NSLock, NSMutableArray, NSString;

@interface VCTextTransmitter : NSObject <VCTextSender> {

	VCTextTransmitterConfiguration* _config;
	double _txIntervalMin;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _startTime;
	VCAudioRedBuilder* _redBuilder;
	int _redPayloadType;
	int _currentPayloadType;
	BOOL _isIdle;
	NSLock* _textFramesSendQueueLock;
	NSMutableArray* _textFramesSendQueue;
	NSObject*<OS_dispatch_source> _heartbeat;
	double _idleDuration;
	unsigned _emptyFramesToBeSent;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)start;
-(void)stop;
-(id)initWithConfiguration:(VCTextTransmitterConfiguration*)arg1 ;
-(void)dealloc;
-(void)sendText:(id)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(unsigned)getCharTimestampForSystemTime:(double)arg1 ;
-(void)updatePayloadHistory:(id)arg1 timestamp:(unsigned)arg2 payloadType:(int*)arg3 payload:(char**)arg4 payloadLength:(int*)arg5 ;
-(BOOL)startHeartbeat;
-(void)stopHeartbeat;
-(void)sendTextFrameWithRedundancy:(id)arg1 marker:(int)arg2 ;
-(void)heartbeat;
@end

