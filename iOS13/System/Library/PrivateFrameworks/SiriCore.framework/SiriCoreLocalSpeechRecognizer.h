/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
*/

#import <libobjc.A.dylib/AFSpeechServiceDelegate.h>

@protocol OS_dispatch_queue, SiriCoreLocalSpeechRecognizerDelegate;
@class NSObject, NSXPCConnection, NSString, NSError, NSData;

@interface SiriCoreLocalSpeechRecognizer : NSObject <AFSpeechServiceDelegate> {

	BOOL _recognitionActive;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _esConnection;
	BOOL _hasRecognizedAnything;
	unsigned char _instanceUUID[16];
	NSString* _currentLanguage;
	NSError* _recognitionError;
	NSString* _preheatedProfileAssetPath;
	NSData* _preheatedProfile;
	id<SiriCoreLocalSpeechRecognizerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) id<SiriCoreLocalSpeechRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profilePathForLanguage:(id)arg1 errorOut:(id*)arg2 ;
+(id)speechProfileDataLastModifiedDataForLanguage:(id)arg1 ;
+(id)dictionaryWithContentsProfilePathForLanguage:(id)arg1 errorOut:(id*)arg2 ;
+(id)installedAssetSizeWithError:(id*)arg1 ;
+(id)purgeInstalledAssetsWithError:(id*)arg1 ;
-(id)init;
-(void)invalidate;
-(id)_connection;
-(id<SiriCoreLocalSpeechRecognizerDelegate>)delegate;
-(id)_service;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2 ;
-(void)preheatSpeechRecognitionWithLanguage:(id)arg1 ;
-(void)addAudioPacket:(id)arg1 ;
-(void)finishAudio;
-(void)createSpeechProfileWithLanguage:(id)arg1 JSONData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getOfflineDictationStatusIgnoringCache:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchUserDataForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runAdaptationRecipeEvaluation:(id)arg1 recordData:(id)arg2 attachments:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readProfileAndUserDataWithLanguage:(id)arg1 allowOverride:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)writeDESRecord;
-(oneway void)speechServiceDidRecognizeTokens:(id)arg1 ;
-(oneway void)speechServiceDidProcessAudioDuration:(double)arg1 ;
-(oneway void)speechServiceDidRecognizeRawEagerRecognitionCandidate:(id)arg1 ;
-(oneway void)speechServiceDidRecognizePackage:(id)arg1 ;
-(oneway void)speechServiceDidFinishRecognitionWithStatistics:(id)arg1 error:(id)arg2 ;
-(id)_newConnection;
-(id)_serviceWithFunctionName:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithDelegate:(id)arg1 instanceUUID:(unsigned char)arg2 ;
-(id)_synchronousServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)startSpeechRecognitionWithLanguage:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 context:(id)arg4 narrowband:(BOOL)arg5 detectUtterances:(BOOL)arg6 maximumRecognitionDuration:(double)arg7 farField:(BOOL)arg8 secureOfflineOnly:(BOOL)arg9 censorSpeech:(BOOL)arg10 originalAudioFileURL:(id)arg11 overrides:(id)arg12 modelOverrideURL:(id)arg13 didStartHandler:(/*^block*/id)arg14 ;
-(void)updateSpeechProfileWithLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resetDESWithCompletion:(/*^block*/id)arg1 ;
@end

