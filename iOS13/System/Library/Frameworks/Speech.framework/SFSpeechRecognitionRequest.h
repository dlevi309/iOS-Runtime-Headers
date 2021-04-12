/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
*/


@class _SFSearchRequest, NSDictionary, NSURL, NSArray, NSString;

@interface SFSpeechRecognitionRequest : NSObject {

	BOOL _forceOfflineRecognition;
	BOOL _shouldReportPartialResults;
	BOOL _detectMultipleUtterances;
	double _maxiumRecognitionDuration;
	_SFSearchRequest* _searchRequest;
	NSDictionary* _voiceTriggerEventInfo;
	NSDictionary* _recognitionOverrides;
	NSURL* _modelOverrideURL;
	long long _taskHint;
	NSArray* _contextualStrings;
	NSString* _interactionIdentifier;

}

@property (setter=_setSearchRequest:,getter=_searchRequest,nonatomic,retain) _SFSearchRequest * _searchRequest;                                        //@synthesize searchRequest=_searchRequest - In the implementation block
@property (assign,nonatomic) BOOL detectMultipleUtterances;                                                                                            //@synthesize detectMultipleUtterances=_detectMultipleUtterances - In the implementation block
@property (assign,setter=_setForceOfflineRecognition:,getter=_forceOfflineRecognition,nonatomic) BOOL _forceOfflineRecognition;                        //@synthesize forceOfflineRecognition=_forceOfflineRecognition - In the implementation block
@property (setter=_setVoiceTriggerEventInfo:,getter=_voiceTriggerEventInfo,nonatomic,retain) NSDictionary * _voiceTriggerEventInfo;                    //@synthesize voiceTriggerEventInfo=_voiceTriggerEventInfo - In the implementation block
@property (assign,setter=_setMaximumRecognitionDuration:,getter=_maximumRecognitionDuration,nonatomic) double _maxiumRecognitionDuration;              //@synthesize maxiumRecognitionDuration=_maxiumRecognitionDuration - In the implementation block
@property (setter=_setRecognitionOverrides:,getter=_recognitionOverrides,nonatomic,retain) NSDictionary * _recognitionOverrides;                       //@synthesize recognitionOverrides=_recognitionOverrides - In the implementation block
@property (setter=_setModelOverrideURL:,getter=_modelOverrideURL,nonatomic,retain) NSURL * _modelOverrideURL;                                          //@synthesize modelOverrideURL=_modelOverrideURL - In the implementation block
@property (assign,nonatomic) long long taskHint;                                                                                                       //@synthesize taskHint=_taskHint - In the implementation block
@property (assign,nonatomic) BOOL shouldReportPartialResults;                                                                                          //@synthesize shouldReportPartialResults=_shouldReportPartialResults - In the implementation block
@property (nonatomic,copy) NSArray * contextualStrings;                                                                                                //@synthesize contextualStrings=_contextualStrings - In the implementation block
@property (nonatomic,copy) NSString * interactionIdentifier;                                                                                           //@synthesize interactionIdentifier=_interactionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL requiresOnDeviceRecognition; 
-(id)init;
-(NSString *)interactionIdentifier;
-(void)setInteractionIdentifier:(NSString *)arg1 ;
-(BOOL)_forceOfflineRecognition;
-(id)_speechRequestOptions;
-(long long)taskHint;
-(void)setTaskHint:(long long)arg1 ;
-(NSDictionary *)_voiceTriggerEventInfo;
-(double)_maximumRecognitionDuration;
-(NSDictionary *)_recognitionOverrides;
-(NSURL *)_modelOverrideURL;
-(_SFSearchRequest *)_searchRequest;
-(void)_setForceOfflineRecognition:(BOOL)arg1 ;
-(void)setContextualStrings:(NSArray *)arg1 ;
-(void)_setVoiceTriggerEventInfo:(id)arg1 ;
-(id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4 ;
-(BOOL)shouldReportPartialResults;
-(void)setDetectMultipleUtterances:(BOOL)arg1 ;
-(BOOL)automaticallyEndpoint;
-(void)_setSearchRequests:(id)arg1 ;
-(id)_searchRequests;
-(BOOL)_powerMeteringAvailable;
-(void)setRequiresOnDeviceRecognition:(BOOL)arg1 ;
-(BOOL)requiresOnDeviceRecognition;
-(id)_dictationOptionsWithTaskHint:(long long)arg1 requestIdentifier:(id)arg2 ;
-(void)_setMaximumRecognitionDuration:(double)arg1 ;
-(void)_setSearchRequest:(id)arg1 ;
-(void)_setRecognitionOverrides:(id)arg1 ;
-(void)_setModelOverrideURL:(id)arg1 ;
-(void)setShouldReportPartialResults:(BOOL)arg1 ;
-(NSArray *)contextualStrings;
-(BOOL)detectMultipleUtterances;
@end

