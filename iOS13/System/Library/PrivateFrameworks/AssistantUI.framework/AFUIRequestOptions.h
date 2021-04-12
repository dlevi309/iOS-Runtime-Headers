/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, AFBulletin, NSDictionary, SAGuidanceCheckForGuideUpdateContext, SASPronunciationContext, NSURL, NSNumber, AFRequestInfo, AFSpeechRequestOptions;

@interface AFUIRequestOptions : NSObject <NSCopying, NSSecureCoding> {

	long long _requestSource;
	BOOL _pronunciationRequest;
	BOOL _initialBringUp;
	BOOL _useAutomaticEndpointing;
	BOOL _useStreamingDictation;
	BOOL _acousticIdEnabled;
	BOOL _releaseAudioSessionOnRecordingCompletion;
	BOOL _predictedRecordRouteIsZLL;
	NSString* _activationDeviceIdentifier;
	AFBulletin* _bulletin;
	NSString* _appBundleIdentifier;
	NSDictionary* _messagesDirectActionContext;
	SAGuidanceCheckForGuideUpdateContext* _checkForGuideUpdateContext;
	long long _directActionEvent;
	NSString* _serverCommandId;
	SASPronunciationContext* _pronunciationContext;
	NSString* _text;
	NSURL* _speechFileURL;
	double _expectedTimestamp;
	double _timestamp;
	double _buttonDownTimestamp;
	NSNumber* _homeButtonUpFromBeep;
	NSDictionary* _continuityInfo;
	AFRequestInfo* _requestInfo;
	AFSpeechRequestOptions* _speechRequestOptions;

}

@property (assign,nonatomic) long long requestSource; 
@property (nonatomic,copy) NSString * activationDeviceIdentifier;                                          //@synthesize activationDeviceIdentifier=_activationDeviceIdentifier - In the implementation block
@property (nonatomic,retain) AFBulletin * bulletin;                                                        //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                                 //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * messagesDirectActionContext;                                     //@synthesize messagesDirectActionContext=_messagesDirectActionContext - In the implementation block
@property (nonatomic,copy) SAGuidanceCheckForGuideUpdateContext * checkForGuideUpdateContext;              //@synthesize checkForGuideUpdateContext=_checkForGuideUpdateContext - In the implementation block
@property (assign,nonatomic) long long directActionEvent;                                                  //@synthesize directActionEvent=_directActionEvent - In the implementation block
@property (nonatomic,copy) NSString * serverCommandId;                                                     //@synthesize serverCommandId=_serverCommandId - In the implementation block
@property (assign,getter=isPronunciationRequest,nonatomic) BOOL pronunciationRequest;                      //@synthesize pronunciationRequest=_pronunciationRequest - In the implementation block
@property (nonatomic,retain) SASPronunciationContext * pronunciationContext;                               //@synthesize pronunciationContext=_pronunciationContext - In the implementation block
@property (nonatomic,copy) NSString * text;                                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSURL * speechFileURL;                                                          //@synthesize speechFileURL=_speechFileURL - In the implementation block
@property (assign,nonatomic) double expectedTimestamp;                                                     //@synthesize expectedTimestamp=_expectedTimestamp - In the implementation block
@property (assign,nonatomic) double timestamp;                                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double buttonDownTimestamp;                                                   //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (getter=isForStark,nonatomic,readonly) BOOL forStark; 
@property (getter=isForSpeechRequest,nonatomic,readonly) BOOL forSpeechRequest; 
@property (assign,getter=isInitialBringUp,nonatomic) BOOL initialBringUp;                                  //@synthesize initialBringUp=_initialBringUp - In the implementation block
@property (assign,nonatomic) BOOL useAutomaticEndpointing;                                                 //@synthesize useAutomaticEndpointing=_useAutomaticEndpointing - In the implementation block
@property (assign,nonatomic) BOOL useStreamingDictation;                                                   //@synthesize useStreamingDictation=_useStreamingDictation - In the implementation block
@property (nonatomic,retain) NSNumber * homeButtonUpFromBeep;                                              //@synthesize homeButtonUpFromBeep=_homeButtonUpFromBeep - In the implementation block
@property (nonatomic,copy) NSDictionary * continuityInfo;                                                  //@synthesize continuityInfo=_continuityInfo - In the implementation block
@property (nonatomic,retain) AFRequestInfo * requestInfo;                                                  //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,retain) AFSpeechRequestOptions * speechRequestOptions;                                //@synthesize speechRequestOptions=_speechRequestOptions - In the implementation block
@property (assign,nonatomic) BOOL acousticIdEnabled;                                                       //@synthesize acousticIdEnabled=_acousticIdEnabled - In the implementation block
@property (assign,nonatomic) BOOL releaseAudioSessionOnRecordingCompletion;                                //@synthesize releaseAudioSessionOnRecordingCompletion=_releaseAudioSessionOnRecordingCompletion - In the implementation block
@property (assign,nonatomic) BOOL predictedRecordRouteIsZLL;                                               //@synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(BOOL)useAutomaticEndpointing;
-(void)setUseAutomaticEndpointing:(BOOL)arg1 ;
-(void)setReleaseAudioSessionOnRecordingCompletion:(BOOL)arg1 ;
-(void)setUseStreamingDictation:(BOOL)arg1 ;
-(void)setActivationDeviceIdentifier:(NSString *)arg1 ;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(long long)requestSource;
-(void)setRequestSource:(long long)arg1 ;
-(AFRequestInfo *)requestInfo;
-(NSString *)serverCommandId;
-(void)setSpeechRequestOptions:(AFSpeechRequestOptions *)arg1 ;
-(AFSpeechRequestOptions *)speechRequestOptions;
-(BOOL)releaseAudioSessionOnRecordingCompletion;
-(NSString *)activationDeviceIdentifier;
-(void)setServerCommandId:(NSString *)arg1 ;
-(void)setHomeButtonUpFromBeep:(NSNumber *)arg1 ;
-(void)setAcousticIdEnabled:(BOOL)arg1 ;
-(BOOL)useStreamingDictation;
-(BOOL)isInitialBringUp;
-(NSNumber *)homeButtonUpFromBeep;
-(BOOL)acousticIdEnabled;
-(void)setBulletin:(AFBulletin *)arg1 ;
-(AFBulletin *)bulletin;
-(SASPronunciationContext *)pronunciationContext;
-(SAGuidanceCheckForGuideUpdateContext *)checkForGuideUpdateContext;
-(NSDictionary *)continuityInfo;
-(void)setContinuityInfo:(NSDictionary *)arg1 ;
-(void)setRequestInfo:(AFRequestInfo *)arg1 ;
-(BOOL)isForStark;
-(id)initWithRequestSource:(long long)arg1 ;
-(double)buttonDownTimestamp;
-(long long)directActionEvent;
-(void)setSpeechFileURL:(NSURL *)arg1 ;
-(BOOL)predictedRecordRouteIsZLL;
-(void)setPredictedRecordRouteIsZLL:(BOOL)arg1 ;
-(void)setButtonDownTimestamp:(double)arg1 ;
-(void)setInitialBringUp:(BOOL)arg1 ;
-(void)setDirectActionEvent:(long long)arg1 ;
-(void)setMessagesDirectActionContext:(NSDictionary *)arg1 ;
-(void)_configureStreamingDictationForSource:(long long)arg1 ;
-(NSDictionary *)messagesDirectActionContext;
-(void)setCheckForGuideUpdateContext:(SAGuidanceCheckForGuideUpdateContext *)arg1 ;
-(BOOL)isPronunciationRequest;
-(void)setPronunciationRequest:(BOOL)arg1 ;
-(void)setPronunciationContext:(SASPronunciationContext *)arg1 ;
-(NSURL *)speechFileURL;
-(double)expectedTimestamp;
-(void)setExpectedTimestamp:(double)arg1 ;
-(BOOL)isForSpeechRequest;
@end

