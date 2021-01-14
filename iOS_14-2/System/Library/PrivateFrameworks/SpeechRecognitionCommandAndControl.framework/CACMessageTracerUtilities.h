/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <libobjc.A.dylib/_SFSpeechRecognitionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/SFSpeechRecognitionTaskDelegate.h>

@class NSString, NSDictionary, NSOperationQueue;

@interface CACMessageTracerUtilities : NSObject <_SFSpeechRecognitionTaskDelegatePrivate, SFSpeechRecognitionTaskDelegate> {

	NSString* _localeIdentifier;
	NSString* _targetApplicationIdentifier;
	NSString* _textAreaIdentifierOrLabel;
	NSString* _textAreaSelectionRange;
	NSDictionary* _customUserCommandProperties;
	NSDictionary* _recognitionProperties;
	NSOperationQueue* _remoteSpeechOperationQueue;

}

@property (nonatomic,retain) NSString * localeIdentifier;                             //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * targetApplicationIdentifier;                  //@synthesize targetApplicationIdentifier=_targetApplicationIdentifier - In the implementation block
@property (nonatomic,retain) NSString * textAreaIdentifierOrLabel;                    //@synthesize textAreaIdentifierOrLabel=_textAreaIdentifierOrLabel - In the implementation block
@property (nonatomic,retain) NSString * textAreaSelectionRange;                       //@synthesize textAreaSelectionRange=_textAreaSelectionRange - In the implementation block
@property (nonatomic,retain) NSDictionary * customUserCommandProperties;              //@synthesize customUserCommandProperties=_customUserCommandProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * recognitionProperties;                    //@synthesize recognitionProperties=_recognitionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCACMessageTracerUtilities;
-(NSString *)localeIdentifier;
-(id)init;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(void)speechRecognitionDidDetectSpeech:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2 ;
-(void)speechRecognitionTaskFinishedReadingAudio:(id)arg1 ;
-(void)speechRecognitionTaskWasCancelled:(id)arg1 ;
-(void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(BOOL)arg2 ;
-(void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2 ;
-(id)_mutablePlistCompatibleObjectFromObject:(id)arg1 ;
-(void)sendCoreAnalyticsForRecognizedCommandIdentifier:(id)arg1 appIdentifier:(id)arg2 ;
-(void)sendRecentAudioDataToAppleServers;
-(void)setCustomUserCommandProperties:(NSDictionary *)arg1 ;
-(void)setRecognitionProperties:(NSDictionary *)arg1 ;
-(id)dictionaryOfNormallyStaticPreferenceValuesForCoreAnalytics;
-(void)logCommandWithIdentifier:(id)arg1 ;
-(void)removeCachedAudioFile;
-(NSString *)targetApplicationIdentifier;
-(void)setTargetApplicationIdentifier:(NSString *)arg1 ;
-(NSString *)textAreaIdentifierOrLabel;
-(void)setTextAreaIdentifierOrLabel:(NSString *)arg1 ;
-(NSString *)textAreaSelectionRange;
-(void)setTextAreaSelectionRange:(NSString *)arg1 ;
-(NSDictionary *)customUserCommandProperties;
-(NSDictionary *)recognitionProperties;
@end

