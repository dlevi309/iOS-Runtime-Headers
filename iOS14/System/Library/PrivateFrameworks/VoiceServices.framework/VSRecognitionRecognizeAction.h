/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_keywords;
-(id)perform;
-(int)completionType;
-(id)_debugDumpPath;
-(void)_continueAfterDeferredStart;
-(BOOL)_hasDeferredStartCallback;
-(id)initWithModelIdentifier:(id)arg1 ;
-(BOOL)_isRecognizing;
-(BOOL)_isActivelyRecognizing;
-(BOOL)_setBluetoothInputAllowed:(BOOL)arg1 ;
-(id)modelIdentifier;
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
-(void)_reset;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS6*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
-(BOOL)_setDebugDumpEnabled:(BOOL)arg1 dumpPath:(id)arg2 ;
-(void)_configureNewRecognitionInstance;
-(void)_releaseFromPrepare;
-(void)_setResults:(id)arg1 ;
-(void)_handleRecognitionPrepared:(VSRecognitionRef)arg1 ;
-(void)_handleRecognitionStarted:(VSRecognitionRef)arg1 ;
-(void)_handleRecognitionCompleted:(VSRecognitionRef)arg1 withResults:(CFArrayRef)arg2 error:(CFErrorRef)arg3 ;
-(id)cancel;
-(void)dealloc;
@end

