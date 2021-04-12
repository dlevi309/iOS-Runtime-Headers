/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, STSiriContext, NSArray, NSDictionary, NSURL, AFLanguageDetectionUserContext;

@interface AFDictationOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forceOfflineRecognition;
	BOOL _preferOnlineRecognition;
	BOOL _detectUtterances;
	BOOL _secureOfflineOnly;
	BOOL _farField;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	BOOL _incremental;
	NSString* _applicationName;
	NSString* _applicationDisplayName;
	NSString* _applicationVersion;
	STSiriContext* _context;
	NSString* _fieldLabel;
	NSString* _fieldIdentifier;
	NSString* _interactionIdentifier;
	NSString* _requestIdentifier;
	long long _keyboardType;
	NSString* _prefixText;
	NSString* _postfixText;
	NSString* _selectedText;
	long long _returnKeyType;
	long long _transcriptionMode;
	NSArray* _inlineItemList;
	NSString* _microphoneIdentifier;
	NSString* _orthography;
	NSString* _keyboardIdentifier;
	NSString* _languageCodeOverride;
	NSString* _offlineLanguage;
	long long _voiceSearchTypeOptions;
	NSDictionary* _voiceSearchHeaderFields;
	NSDictionary* _voiceSearchQueryParameters;
	NSDictionary* _voiceTriggerEventInfo;
	double _maximumRecognitionDuration;
	long long _taskHint;
	NSURL* _originalAudioFileURL;
	NSDictionary* _recognitionOverrides;
	NSURL* _modelOverrideURL;
	AFLanguageDetectionUserContext* _languageDetectionUserContext;
	long long _dictationInputOrigin;
	NSString* _samplingInfo;

}

@property (nonatomic,copy) NSString * applicationName;                                                 //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy) NSString * applicationDisplayName;                                          //@synthesize applicationDisplayName=_applicationDisplayName - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                                              //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,retain) STSiriContext * context;                                                  //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * fieldLabel;                                                      //@synthesize fieldLabel=_fieldLabel - In the implementation block
@property (nonatomic,copy) NSString * fieldIdentifier;                                                 //@synthesize fieldIdentifier=_fieldIdentifier - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                           //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * requestIdentifier;                                               //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) long long keyboardType;                                                   //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * prefixText;                                                      //@synthesize prefixText=_prefixText - In the implementation block
@property (nonatomic,copy) NSString * postfixText;                                                     //@synthesize postfixText=_postfixText - In the implementation block
@property (nonatomic,copy) NSString * selectedText;                                                    //@synthesize selectedText=_selectedText - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                                                  //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) long long transcriptionMode;                                              //@synthesize transcriptionMode=_transcriptionMode - In the implementation block
@property (nonatomic,copy) NSArray * inlineItemList;                                                   //@synthesize inlineItemList=_inlineItemList - In the implementation block
@property (nonatomic,copy) NSString * microphoneIdentifier;                                            //@synthesize microphoneIdentifier=_microphoneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * orthography;                                                     //@synthesize orthography=_orthography - In the implementation block
@property (nonatomic,copy) NSString * keyboardIdentifier;                                              //@synthesize keyboardIdentifier=_keyboardIdentifier - In the implementation block
@property (nonatomic,copy) NSString * languageCodeOverride;                                            //@synthesize languageCodeOverride=_languageCodeOverride - In the implementation block
@property (nonatomic,copy) NSString * offlineLanguage;                                                 //@synthesize offlineLanguage=_offlineLanguage - In the implementation block
@property (assign,nonatomic) long long voiceSearchTypeOptions;                                         //@synthesize voiceSearchTypeOptions=_voiceSearchTypeOptions - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceSearchHeaderFields;                                     //@synthesize voiceSearchHeaderFields=_voiceSearchHeaderFields - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceSearchQueryParameters;                                  //@synthesize voiceSearchQueryParameters=_voiceSearchQueryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * voiceTriggerEventInfo;                                       //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (assign,nonatomic) BOOL forceOfflineRecognition;                                             //@synthesize forceOfflineRecognition=_forceOfflineRecognition - In the implementation block
@property (assign,nonatomic) BOOL preferOnlineRecognition;                                             //@synthesize preferOnlineRecognition=_preferOnlineRecognition - In the implementation block
@property (assign,nonatomic) BOOL detectUtterances;                                                    //@synthesize detectUtterances=_detectUtterances - In the implementation block
@property (assign,nonatomic) BOOL secureOfflineOnly;                                                   //@synthesize secureOfflineOnly=_secureOfflineOnly - In the implementation block
@property (assign,nonatomic) BOOL farField;                                                            //@synthesize farField=_farField - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                            //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
@property (assign,nonatomic) BOOL incremental;                                                         //@synthesize incremental=_incremental - In the implementation block
@property (assign,nonatomic) double maximumRecognitionDuration;                                        //@synthesize maximumRecognitionDuration=_maximumRecognitionDuration - In the implementation block
@property (assign,nonatomic) long long taskHint;                                                       //@synthesize taskHint=_taskHint - In the implementation block
@property (nonatomic,copy) NSURL * originalAudioFileURL;                                               //@synthesize originalAudioFileURL=_originalAudioFileURL - In the implementation block
@property (nonatomic,copy) NSDictionary * recognitionOverrides;                                        //@synthesize recognitionOverrides=_recognitionOverrides - In the implementation block
@property (nonatomic,copy) NSURL * modelOverrideURL;                                                   //@synthesize modelOverrideURL=_modelOverrideURL - In the implementation block
@property (nonatomic,copy) AFLanguageDetectionUserContext * languageDetectionUserContext;              //@synthesize languageDetectionUserContext=_languageDetectionUserContext - In the implementation block
@property (assign,nonatomic) long long dictationInputOrigin;                                           //@synthesize dictationInputOrigin=_dictationInputOrigin - In the implementation block
@property (nonatomic,copy) NSString * samplingInfo;                                                    //@synthesize samplingInfo=_samplingInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)selectedText;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(long long)keyboardType;
-(void)setReturnKeyType:(long long)arg1 ;
-(NSString *)requestIdentifier;
-(long long)returnKeyType;
-(NSString *)fieldLabel;
-(void)setKeyboardType:(long long)arg1 ;
-(id)init;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(NSString *)fieldIdentifier;
-(void)setFieldLabel:(NSString *)arg1 ;
-(void)setFieldIdentifier:(NSString *)arg1 ;
-(void)setKeyboardIdentifier:(NSString *)arg1 ;
-(void)setSecureOfflineOnly:(BOOL)arg1 ;
-(void)setPostfixText:(NSString *)arg1 ;
-(void)setVoiceSearchTypeOptions:(long long)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setDictationInputOrigin:(long long)arg1 ;
-(void)setLanguageDetectionUserContext:(AFLanguageDetectionUserContext *)arg1 ;
-(void)setPreferOnlineRecognition:(BOOL)arg1 ;
-(BOOL)preferOnlineRecognition;
-(long long)dictationInputOrigin;
-(void)setDetectUtterances:(BOOL)arg1 ;
-(void)setMaximumRecognitionDuration:(double)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(NSString *)applicationName;
-(void)setPrefixText:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)farField;
-(BOOL)forceOfflineRecognition;
-(BOOL)secureOfflineOnly;
-(BOOL)detectUtterances;
-(NSString *)orthography;
-(STSiriContext *)context;
-(NSString *)prefixText;
-(NSString *)offlineLanguage;
-(void)setOfflineLanguage:(NSString *)arg1 ;
-(long long)taskHint;
-(void)setOrthography:(NSString *)arg1 ;
-(AFLanguageDetectionUserContext *)languageDetectionUserContext;
-(NSString *)interactionIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationVersion;
-(void)setFarField:(BOOL)arg1 ;
-(NSString *)postfixText;
-(NSString *)samplingInfo;
-(long long)transcriptionMode;
-(id)dictationOptionsWithoutTextContext;
-(void)setApplicationDisplayName:(NSString *)arg1 ;
-(NSString *)languageCodeOverride;
-(void)setLanguageCodeOverride:(NSString *)arg1 ;
-(void)setTranscriptionMode:(long long)arg1 ;
-(NSString *)microphoneIdentifier;
-(void)setMicrophoneIdentifier:(NSString *)arg1 ;
-(long long)voiceSearchTypeOptions;
-(NSDictionary *)voiceSearchHeaderFields;
-(void)setVoiceSearchHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceSearchQueryParameters;
-(void)setVoiceSearchQueryParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)voiceTriggerEventInfo;
-(NSString *)keyboardIdentifier;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setVoiceTriggerEventInfo:(NSDictionary *)arg1 ;
-(void)setForceOfflineRecognition:(BOOL)arg1 ;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(void)setIncremental:(BOOL)arg1 ;
-(double)maximumRecognitionDuration;
-(void)setTaskHint:(long long)arg1 ;
-(NSURL *)originalAudioFileURL;
-(void)setOriginalAudioFileURL:(NSURL *)arg1 ;
-(NSDictionary *)recognitionOverrides;
-(void)setRecognitionOverrides:(NSDictionary *)arg1 ;
-(NSURL *)modelOverrideURL;
-(void)setModelOverrideURL:(NSURL *)arg1 ;
-(NSArray *)inlineItemList;
-(void)setInlineItemList:(NSArray *)arg1 ;
-(void)setSamplingInfo:(NSString *)arg1 ;
-(NSString *)applicationDisplayName;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)incremental;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(void)setContext:(STSiriContext *)arg1 ;
@end

