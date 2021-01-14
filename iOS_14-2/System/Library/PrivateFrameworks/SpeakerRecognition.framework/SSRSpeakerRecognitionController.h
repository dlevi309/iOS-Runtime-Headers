/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
*/

#import <libobjc.A.dylib/SSRSpeakerRecognitionOrchestratorDelegate.h>

@protocol SSRSpeakerRecognitionControllerDelegate;
@class SSRSpeakerRecognitionContext, SSRSpeakerRecognitionOrchestrator, NSDictionary, NSString;

@interface SSRSpeakerRecognitionController : NSObject <SSRSpeakerRecognitionOrchestratorDelegate> {

	SSRSpeakerRecognitionContext* _context;
	id<SSRSpeakerRecognitionControllerDelegate> _delegate;
	SSRSpeakerRecognitionOrchestrator* _orchestrator;
	NSDictionary* _lastScoreCard;

}

@property (nonatomic,retain) SSRSpeakerRecognitionContext * context;                                   //@synthesize context=_context - In the implementation block
@property (assign,nonatomic,__weak) id<SSRSpeakerRecognitionControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SSRSpeakerRecognitionOrchestrator * orchestrator;                         //@synthesize orchestrator=_orchestrator - In the implementation block
@property (nonatomic,retain) NSDictionary * lastScoreCard;                                             //@synthesize lastScoreCard=_lastScoreCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SSRSpeakerRecognitionControllerDelegate>)delegate;
-(SSRSpeakerRecognitionContext *)context;
-(void)setDelegate:(id<SSRSpeakerRecognitionControllerDelegate>)arg1 ;
-(void)endAudio;
-(void)setContext:(SSRSpeakerRecognitionContext *)arg1 ;
-(id)initWithContext:(id)arg1 withDelegate:(id)arg2 error:(id*)arg3 ;
-(void)processAudio:(id)arg1 withNumberOfSamples:(unsigned long long)arg2 ;
-(id)resetWithContext:(id)arg1 ;
-(id)getLatestSpeakerInfo;
-(NSDictionary *)lastScoreCard;
-(void)voiceRecognitionOrchestrator:(id)arg1 hasVoiceRecognitionInfo:(id)arg2 ;
-(void)voiceRecognitionOrchestratorFinishedProcessing:(id)arg1 withFinalVoiceRecognitionInfo:(id)arg2 ;
-(SSRSpeakerRecognitionOrchestrator *)orchestrator;
-(void)setOrchestrator:(SSRSpeakerRecognitionOrchestrator *)arg1 ;
-(void)setLastScoreCard:(NSDictionary *)arg1 ;
@end

