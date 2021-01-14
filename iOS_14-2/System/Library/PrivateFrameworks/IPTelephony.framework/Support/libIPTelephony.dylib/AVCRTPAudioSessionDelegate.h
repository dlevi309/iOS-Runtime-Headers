/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/AVCAudioStreamDelegate.h>

@class NSString;

@interface AVCRTPAudioSessionDelegate : NSObject <AVCAudioStreamDelegate> {

	weak_ptr<AVCRTPAudioSession>* owner;
	shared_ptr<AVCRTPStackController>* stackController;

}

@property (assign,nonatomic) weak_ptr<AVCRTPAudioSession>* owner; 
@property (assign,nonatomic) shared_ptr<AVCRTPStackController>* stackController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(weak_ptr<AVCRTPAudioSession>*)owner;
-(void)streamDidStop:(id)arg1 ;
-(void)setOwner:(weak_ptr<AVCRTPAudioSession>*)arg1 ;
-(shared_ptr<AVCRTPStackController>*)stackController;
-(void)handleRTCPPacketWithBlock:(/*^block*/id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2 ;
-(void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2 ;
-(id)initWithOwner:(shared_ptr<AVCRTPAudioSession>*)arg1 andStackController:(shared_ptr<AVCRTPStackController>*)arg2 ;
-(void)setStackController:(shared_ptr<AVCRTPStackController>*)arg1 ;
@end
