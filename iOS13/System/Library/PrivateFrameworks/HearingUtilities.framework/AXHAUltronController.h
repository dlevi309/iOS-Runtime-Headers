/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/SNResultsObserving.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>

@protocol OS_dispatch_queue;
@class SBSStatusBarStyleOverridesAssertion, SNAudioStreamAnalyzer, AXUIClient, NSObject, AVAudioEngine, AVAudioFormat, AVAudioSession, NSMutableArray, NSMutableDictionary, NSString;

@interface AXHAUltronController : NSObject <SNResultsObserving, AXUIClientDelegate> {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	SNAudioStreamAnalyzer* _listener;
	AXUIClient* _hearingUIClient;
	NSObject*<OS_dispatch_queue> _audioProcessingQueue;
	BOOL _isRecording;
	AVAudioEngine* _audioEngine;
	AVAudioFormat* _clientFormat;
	AVAudioSession* _session;
	NSMutableArray* _bufferCollection;
	NSMutableDictionary* _detectionResultCollection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)directory;
-(void)_processResult:(id)arg1 ;
-(BOOL)isListening;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)startUltron;
-(void)stopUltron;
-(void)reduceFileDirectorySize;
-(id)recorderSettings;
-(id)getDictionaryForListenType;
-(void)_configureAudioCapture;
-(void)_registerListeningRequestTypes;
-(void)_startAudioSession;
-(void)_stopAudioSession;
-(void)_handleAudioSessionInterruption:(id)arg1 ;
-(void)request:(id)arg1 didProduceResult:(id)arg2 ;
-(id)hearingUIClient;
-(void)cleanupUltron;
-(void)toggleUltronSupport:(BOOL)arg1 ;
@end

