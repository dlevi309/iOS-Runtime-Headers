/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionAction.h>

@class NSString, NSArray;

@interface VSRecognitionRecognizeAction : VSRecognitionAction {

	NSString* _modelIdentifier;
	NSArray* _keywords;
	void* _recognition;
	NSArray* _results;
	NSString* _debugDumpPath;
	NSString* _audioInputPath;
	double _levelInterval;
	struct {
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned resetEngine : 1;
		unsigned bluetoothAllowed : 1;
		unsigned hasStarted : 1;
	}  _recognizeFlags;

}
-(void)dealloc;
-(id)cancel;
-(void)_reset;
-(id)_keywords;
-(id)modelIdentifier;
-(id)perform;
-(void)_setResults:(id)arg1 ;
-(int)completionType;
-(void)_continueAfterDeferredStart;
-(BOOL)_hasDeferredStartCallback;
-(id)_debugDumpPath;
-(id)initWithModelIdentifier:(id)arg1 ;
-(BOOL)_isRecognizing;
-(BOOL)_isActivelyRecognizing;
-(BOOL)_setBluetoothInputAllowed:(BOOL)arg1 ;
-(BOOL)_setDebugDumpPath:(id)arg1 ;
-(BOOL)_setDebugDumpEnabled:(BOOL)arg1 ;
-(BOOL)_setPreferredEngine:(int)arg1 ;
-(BOOL)_setAudioInputPath:(id)arg1 ;
-(BOOL)_setInputLevelUpdateInterval:(double)arg1 ;
-(BOOL)_setEngineResetRequired:(BOOL)arg1 ;
-(void)_handledThreadedResults:(id)arg1 nextAction:(id)arg2 ;
-(float)_inputLevel;
-(float)_inputLevelDB;
-(id)_keywordAtIndex:(long long)arg1 ;
-(long long)_keywordCount;
-(BOOL)_keywordIndexChanged;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS6*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
-(BOOL)_setDebugDumpEnabled:(BOOL)arg1 dumpPath:(id)arg2 ;
-(void)_configureNewRecognitionInstance;
-(void)_releaseFromPrepare;
-(void)_handleRecognitionPrepared:(VSRecognitionRef)arg1 ;
-(void)_handleRecognitionStarted:(VSRecognitionRef)arg1 ;
-(void)_handleRecognitionCompleted:(VSRecognitionRef)arg1 withResults:(CFArrayRef)arg2 error:(CFErrorRef)arg3 ;
@end

