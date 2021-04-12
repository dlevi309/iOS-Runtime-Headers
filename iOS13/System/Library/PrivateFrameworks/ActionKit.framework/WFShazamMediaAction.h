/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/SHRecognitionSessionDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class AVAudioEngine, NSString;

@interface WFShazamMediaAction : WFAction <SHRecognitionSessionDelegate, WFApplicationStateObserver> {

	BOOL _waitingForInterruptionEnd;
	AVAudioEngine* _audioEngine;

}

@property (nonatomic,retain) AVAudioEngine * audioEngine;                 //@synthesize audioEngine=_audioEngine - In the implementation block
@property (assign,nonatomic) BOOL waitingForInterruptionEnd;              //@synthesize waitingForInterruptionEnd=_waitingForInterruptionEnd - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVAudioEngine *)audioEngine;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)finishRunningWithError:(id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)session:(id)arg1 didNotFindMatchForSignature:(id)arg2 ;
-(void)session:(id)arg1 didFindMatch:(id)arg2 ;
-(void)session:(id)arg1 didFailForSignature:(id)arg2 withError:(id)arg3 ;
-(void)startShazamWithRetryCount:(int)arg1 ;
-(void)finishRunningWithMatch:(id)arg1 error:(id)arg2 ;
-(void)audioInterruption:(id)arg1 ;
-(void)setAudioEngine:(AVAudioEngine *)arg1 ;
-(BOOL)waitingForInterruptionEnd;
-(void)setWaitingForInterruptionEnd:(BOOL)arg1 ;
@end

