/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/

#import <libobjc.A.dylib/AXHADetectorManagerDelegate.h>
#import <libobjc.A.dylib/AXHAListenEngineDelegate.h>
#import <libobjc.A.dylib/AXUIClientDelegate.h>
#import <libobjc.A.dylib/AXHAUltronModelAssetManagerDelegate.h>

@protocol OS_dispatch_queue;
@class SBSStatusBarStyleOverridesAssertion, AXUIClient, AXHAListenEngine, AXHADetectorManager, AXUltronModelAssetManager, NSFileManager, NSUserDefaults, NSObject, AXHARingBuffer, NSMutableDictionary, NSString;

@interface AXHAUltronController : NSObject <AXHADetectorManagerDelegate, AXHAListenEngineDelegate, AXUIClientDelegate, AXHAUltronModelAssetManagerDelegate> {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	AXUIClient* _hearingUIClient;
	AXHAListenEngine* _listener;
	AXHADetectorManager* _detectorManager;
	AXUltronModelAssetManager* _assetManager;
	NSFileManager* _fileManager;
	NSUserDefaults* _defaults;
	double _sampleLength;
	BOOL _assetsReady;
	NSObject*<OS_dispatch_queue> _fileProcessingQueue;
	int _state;
	AXHARingBuffer* _audioRingBuffer;
	NSMutableDictionary* _detectionResultCollection;
	NSMutableDictionary* _currentDetections;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(id)directory;
-(BOOL)isListening;
-(void)enroll;
-(void)_processResult:(id)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)hearingUIClient;
-(void)dealloc;
-(void)assetsReadyForUltronManager:(id)arg1 ;
-(void)assetsNotReadyForUltronManager:(id)arg1 ;
-(void)receivedBuffer:(id)arg1 atTime:(id)arg2 ;
-(void)listenEngineDidStartWithInputFormat:(id)arg1 ;
-(void)listenEngineFailedToStartWithError:(id)arg1 ;
-(void)receivedObservation:(id)arg1 forDetector:(id)arg2 ;
-(void)receivedCompletion:(id)arg1 ;
-(void)receivedError:(id)arg1 fromDetector:(id)arg2 ;
-(BOOL)isEnrolled;
-(void)_setupDetectorManager;
-(void)_startRecording;
-(id)retrieveFilesOlderThan:(double)arg1 ;
-(BOOL)cleanupUltronFiles:(id)arg1 ;
-(void)reduceFileDirectorySize;
-(BOOL)stopUltron;
-(void)_recordResultToFile:(id)arg1 ;
-(id)recorderSettings;
-(id)getDictionaryForListenType;
-(void)unenroll;
-(BOOL)startUltron;
-(void)cleanupUltron;
@end

