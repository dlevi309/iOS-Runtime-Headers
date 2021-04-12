/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
*/

#import <libIPTelephony.dylib/libIPTelephony.dylib-Structs.h>
#import <libobjc.A.dylib/AVCTextStreamDelegate.h>

@class NSString;

@interface AVCRTPTextSessionDelegate : NSObject <AVCTextStreamDelegate> {

	AVCRTPRTTSession* owner;
	AVCRTPStackController* stackController;

}

@property (assign,nonatomic) AVCRTPRTTSession* owner; 
@property (assign,nonatomic) AVCRTPStackController* stackController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOwner:(AVCRTPRTTSession*)arg1 ;
-(AVCRTPRTTSession*)owner;
-(void)streamDidStop:(id)arg1 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3 ;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidRTPTimeOut:(id)arg1 ;
-(void)streamDidRTCPTimeOut:(id)arg1 ;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(id)initWithOwner:(AVCRTPRTTSession*)arg1 andStackController:(AVCRTPStackController*)arg2 ;
-(AVCRTPStackController*)stackController;
-(void)setStackController:(AVCRTPStackController*)arg1 ;
@end

