/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@protocol AFUISpeechSynthesisElementDelegate;
@class NSString, SAUIAudioData, VSSpeechRequest, VSPresynthesizedAudioRequest, NSDictionary;

@interface AFUISpeechSynthesisElement : NSObject {

	NSString* _text;
	BOOL _isPhonetic;
	BOOL _eligibleForSynthesis;
	BOOL _eligibleForProcessing;
	BOOL _provisional;
	BOOL _delayed;
	BOOL _canUseServerTTS;
	BOOL _shouldCache;
	BOOL _synthesizesWhileRecording;
	BOOL _preparationBlockCompleted;
	BOOL _durationHasElapsed;
	SAUIAudioData* _audioData;
	NSString* _identifier;
	NSString* _language;
	NSString* _gender;
	VSSpeechRequest* _speechRequest;
	VSPresynthesizedAudioRequest* _presynthesizedAudioRequest;
	long long _synthesisResult;
	id<AFUISpeechSynthesisElementDelegate> _delegate;
	NSString* _animationIdentifier;
	NSDictionary* _analyticsContext;
	NSDictionary* _speakableContextInfo;
	/*^block*/id _completion;

}

@property (assign,setter=_setEligibleForSynthesis:,getter=isEligibleForSynthesis,nonatomic) BOOL eligibleForSynthesis;                 //@synthesize eligibleForSynthesis=_eligibleForSynthesis - In the implementation block
@property (assign,setter=_setEligibleForProcessing:,getter=isEligibleForProcessing,nonatomic) BOOL eligibleForProcessing;              //@synthesize eligibleForProcessing=_eligibleForProcessing - In the implementation block
@property (getter=_completion,nonatomic,readonly) id completion;                                                                       //@synthesize completion=_completion - In the implementation block
@property (setter=_setText:,nonatomic,copy) NSString * text;                                                                           //@synthesize text=_text - In the implementation block
@property (setter=_setPreparationBlockCompleted:) BOOL preparationBlockCompleted;                                                      //@synthesize preparationBlockCompleted=_preparationBlockCompleted - In the implementation block
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;                                                                    //@synthesize durationHasElapsed=_durationHasElapsed - In the implementation block
@property (nonatomic,readonly) SAUIAudioData * audioData;                                                                              //@synthesize audioData=_audioData - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * language;                                                                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) NSString * gender;                                                                                      //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) BOOL isPhonetic;                                                                                          //@synthesize isPhonetic=_isPhonetic - In the implementation block
@property (getter=isProvisional,nonatomic,readonly) BOOL provisional;                                                                  //@synthesize provisional=_provisional - In the implementation block
@property (assign,getter=isDelayed,nonatomic) BOOL delayed;                                                                            //@synthesize delayed=_delayed - In the implementation block
@property (assign,nonatomic) BOOL canUseServerTTS;                                                                                     //@synthesize canUseServerTTS=_canUseServerTTS - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * speechRequest;                                                                          //@synthesize speechRequest=_speechRequest - In the implementation block
@property (nonatomic,retain) VSPresynthesizedAudioRequest * presynthesizedAudioRequest;                                                //@synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest - In the implementation block
@property (assign,nonatomic) long long synthesisResult;                                                                                //@synthesize synthesisResult=_synthesisResult - In the implementation block
@property (assign,nonatomic,__weak) id<AFUISpeechSynthesisElementDelegate> delegate;                                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * animationIdentifier;                                                                         //@synthesize animationIdentifier=_animationIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * analyticsContext;                                                                        //@synthesize analyticsContext=_analyticsContext - In the implementation block
@property (nonatomic,retain) NSDictionary * speakableContextInfo;                                                                      //@synthesize speakableContextInfo=_speakableContextInfo - In the implementation block
@property (assign,nonatomic) BOOL shouldCache;                                                                                         //@synthesize shouldCache=_shouldCache - In the implementation block
@property (assign,nonatomic) BOOL synthesizesWhileRecording;                                                                           //@synthesize synthesizesWhileRecording=_synthesizesWhileRecording - In the implementation block
-(BOOL)shouldCache;
-(/*^block*/id)_completion;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(id<AFUISpeechSynthesisElementDelegate>)delegate;
-(void)_setText:(id)arg1 ;
-(void)setSpeechRequest:(VSSpeechRequest *)arg1 ;
-(BOOL)isPhonetic;
-(BOOL)canUseServerTTS;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(void)setDelegate:(id<AFUISpeechSynthesisElementDelegate>)arg1 ;
-(id)description;
-(NSString *)text;
-(VSSpeechRequest *)speechRequest;
-(BOOL)isDelayed;
-(SAUIAudioData *)audioData;
-(NSDictionary *)speakableContextInfo;
-(void)setSpeakableContextInfo:(NSDictionary *)arg1 ;
-(NSString *)identifier;
-(void)setDelayed:(BOOL)arg1 ;
-(void)setCanUseServerTTS:(BOOL)arg1 ;
-(NSString *)gender;
-(NSString *)language;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)_setDurationHasElapsed:(BOOL)arg1 ;
-(void)_setPreparationBlockCompleted:(BOOL)arg1 ;
-(BOOL)preparationBlockCompleted;
-(BOOL)durationHasElapsed;
-(void)_setEligibleForProcessing:(BOOL)arg1 ;
-(void)_setEligibleForSynthesis:(BOOL)arg1 ;
-(void)_updateSynthesisEligibility;
-(BOOL)isProvisional;
-(BOOL)isEligibleForProcessing;
-(BOOL)isEligibleForSynthesis;
-(id)initWithText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 language:(id)arg4 gender:(id)arg5 provisional:(BOOL)arg6 eligibleAfterDuration:(double)arg7 delayed:(BOOL)arg8 preparation:(/*^block*/id)arg9 completion:(/*^block*/id)arg10 animationIdentifier:(id)arg11 analyticsContext:(id)arg12 speakableContextInfo:(id)arg13 canUseServerTTS:(BOOL)arg14 eligibilityChangedQueue:(id)arg15 ;
-(void)executeCompletion;
-(void)setIsPhonetic:(BOOL)arg1 ;
-(long long)synthesisResult;
-(void)setSynthesisResult:(long long)arg1 ;
-(NSString *)animationIdentifier;
-(NSDictionary *)analyticsContext;
-(BOOL)synthesizesWhileRecording;
-(void)setSynthesizesWhileRecording:(BOOL)arg1 ;
@end

