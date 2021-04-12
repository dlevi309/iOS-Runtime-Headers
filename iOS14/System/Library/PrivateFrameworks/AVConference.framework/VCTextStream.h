/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/VCMediaStream.h>
#import <libobjc.A.dylib/VCTextSender.h>
#import <libobjc.A.dylib/VCTextReceiverDelegate.h>

@protocol VCTextReceiverDelegate;
@class VCTextReceiver, VCTextTransmitter, NSString;

@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate> {

	VCTextReceiver* _textReceiver;
	VCTextTransmitter* _textTransmitter;
	id<VCTextReceiverDelegate> _receiveDelegate;

}

@property (assign,nonatomic) id<VCTextReceiverDelegate> receiveDelegate; 
@property (nonatomic,readonly) double lastReceivedRTPPacketTime; 
@property (nonatomic,readonly) double lastReceivedRTCPPacketTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)sendText:(id)arg1 ;
-(void)sendCharacter:(unsigned short)arg1 ;
-(id)supportedPayloads;
-(id<VCTextReceiverDelegate>)receiveDelegate;
-(void)didReceiveText:(id)arg1 ;
-(void)setupTextTransmitter;
-(BOOL)setupTextReceiverWithError:(id*)arg1 ;
-(double)lastReceivedRTPPacketTime;
-(double)lastReceivedRTCPPacketTime;
-(void)setReceiveDelegate:(id<VCTextReceiverDelegate>)arg1 ;
-(void)didReceiveCharacter:(unsigned short)arg1 ;
-(void)onCallIDChanged;
-(BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)onStartWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onStopWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onPauseWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onResumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)onSendRTCPPacket;
-(void)onRTPTimeout;
-(void)onRTCPTimeout;
-(double)rtcpHeartbeatLeeway;
@end

