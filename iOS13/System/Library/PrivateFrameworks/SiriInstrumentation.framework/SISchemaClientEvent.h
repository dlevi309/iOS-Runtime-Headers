/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
*/

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDictationContext, SISchemaInvocation, SISchemaLocation, SISchemaPunchOut, SISchemaSiriCue, SISchemaUUFRPresented, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaUIStateTransition, SISchemaClientFlow, SISchemaDialogOutput, SISchemaDictationEndPointStop, SISchemaDictationEndPointCancel, SISchemaDictationAlternativeSelected, SISchemaDictationTranscriptionMetadata, SISchemaClientEventMetadata, SISchemaClientTransportEventMetadata, NSData;

@interface SISchemaClientEvent : PBCodable {

	unsigned long long _whichEvent_Type;
	SISchemaAudioFirstBufferRecorded* _audioFirstBufferRecorded;
	SISchemaAudioStopRecording* _audioStopRecording;
	SISchemaConversationTrace* _clientConversationTrace;
	SISchemaDeviceDynamicContext* _deviceDynamicContext;
	SISchemaDeviceFixedContext* _deviceFixedContext;
	SISchemaDictationContext* _dictationContext;
	SISchemaInvocation* _invocation;
	SISchemaLocation* _location;
	SISchemaPunchOut* _punchOut;
	SISchemaSiriCue* _siriCue;
	SISchemaUUFRPresented* _uufrPresented;
	SISchemaSpeechTranscription* _speechTranscription;
	SISchemaTextToSpeechBegin* _textToSpeechBegin;
	SISchemaTextToSpeechEnd* _textToSpeechEnd;
	SISchemaUIStateTransition* _uiStateTransition;
	SISchemaClientFlow* _clientFlow;
	SISchemaDialogOutput* _dialogOutput;
	SISchemaDictationEndPointStop* _dictationEndPointStop;
	SISchemaDictationEndPointCancel* _dictationEndPointCancel;
	SISchemaDictationAlternativeSelected* _dictationAlternativeSelected;
	SISchemaDictationTranscriptionMetadata* _dictationTranscriptionMetadata;
	SISchemaClientEventMetadata* _eventMetadata;
	SISchemaClientTransportEventMetadata* _transportMetadata;

}

@property (nonatomic,retain) SISchemaClientEventMetadata * eventMetadata;                                          //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaClientTransportEventMetadata * transportMetadata;                             //@synthesize transportMetadata=_transportMetadata - In the implementation block
@property (nonatomic,retain) SISchemaAudioFirstBufferRecorded * audioFirstBufferRecorded;                          //@synthesize audioFirstBufferRecorded=_audioFirstBufferRecorded - In the implementation block
@property (nonatomic,retain) SISchemaAudioStopRecording * audioStopRecording;                                      //@synthesize audioStopRecording=_audioStopRecording - In the implementation block
@property (nonatomic,retain) SISchemaConversationTrace * clientConversationTrace;                                  //@synthesize clientConversationTrace=_clientConversationTrace - In the implementation block
@property (nonatomic,retain) SISchemaDeviceDynamicContext * deviceDynamicContext;                                  //@synthesize deviceDynamicContext=_deviceDynamicContext - In the implementation block
@property (nonatomic,retain) SISchemaDeviceFixedContext * deviceFixedContext;                                      //@synthesize deviceFixedContext=_deviceFixedContext - In the implementation block
@property (nonatomic,retain) SISchemaDictationContext * dictationContext;                                          //@synthesize dictationContext=_dictationContext - In the implementation block
@property (nonatomic,retain) SISchemaInvocation * invocation;                                                      //@synthesize invocation=_invocation - In the implementation block
@property (nonatomic,retain) SISchemaLocation * location;                                                          //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) SISchemaPunchOut * punchOut;                                                          //@synthesize punchOut=_punchOut - In the implementation block
@property (nonatomic,retain) SISchemaSiriCue * siriCue;                                                            //@synthesize siriCue=_siriCue - In the implementation block
@property (nonatomic,retain) SISchemaUUFRPresented * uufrPresented;                                                //@synthesize uufrPresented=_uufrPresented - In the implementation block
@property (nonatomic,retain) SISchemaSpeechTranscription * speechTranscription;                                    //@synthesize speechTranscription=_speechTranscription - In the implementation block
@property (nonatomic,retain) SISchemaTextToSpeechBegin * textToSpeechBegin;                                        //@synthesize textToSpeechBegin=_textToSpeechBegin - In the implementation block
@property (nonatomic,retain) SISchemaTextToSpeechEnd * textToSpeechEnd;                                            //@synthesize textToSpeechEnd=_textToSpeechEnd - In the implementation block
@property (nonatomic,retain) SISchemaUIStateTransition * uiStateTransition;                                        //@synthesize uiStateTransition=_uiStateTransition - In the implementation block
@property (nonatomic,retain) SISchemaClientFlow * clientFlow;                                                      //@synthesize clientFlow=_clientFlow - In the implementation block
@property (nonatomic,retain) SISchemaDialogOutput * dialogOutput;                                                  //@synthesize dialogOutput=_dialogOutput - In the implementation block
@property (nonatomic,retain) SISchemaDictationEndPointStop * dictationEndPointStop;                                //@synthesize dictationEndPointStop=_dictationEndPointStop - In the implementation block
@property (nonatomic,retain) SISchemaDictationEndPointCancel * dictationEndPointCancel;                            //@synthesize dictationEndPointCancel=_dictationEndPointCancel - In the implementation block
@property (nonatomic,retain) SISchemaDictationAlternativeSelected * dictationAlternativeSelected;                  //@synthesize dictationAlternativeSelected=_dictationAlternativeSelected - In the implementation block
@property (nonatomic,retain) SISchemaDictationTranscriptionMetadata * dictationTranscriptionMetadata;              //@synthesize dictationTranscriptionMetadata=_dictationTranscriptionMetadata - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                                 //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
+(id)getTagForEventTypeClass:(Class)arg1 ;
+(Class)getEventTypeClassForTag:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(SISchemaInvocation *)invocation;
-(SISchemaLocation *)location;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setLocation:(SISchemaLocation *)arg1 ;
-(void)setPunchOut:(SISchemaPunchOut *)arg1 ;
-(SISchemaPunchOut *)punchOut;
-(void)setInvocation:(SISchemaInvocation *)arg1 ;
-(void)setEventType:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(SISchemaClientEventMetadata *)eventMetadata;
-(int)getAnyEventType;
-(void)setEventMetadata:(SISchemaClientEventMetadata *)arg1 ;
-(void)setTransportMetadata:(SISchemaClientTransportEventMetadata *)arg1 ;
-(void)setAudioFirstBufferRecorded:(SISchemaAudioFirstBufferRecorded *)arg1 ;
-(void)setAudioStopRecording:(SISchemaAudioStopRecording *)arg1 ;
-(void)setClientConversationTrace:(SISchemaConversationTrace *)arg1 ;
-(void)setDeviceDynamicContext:(SISchemaDeviceDynamicContext *)arg1 ;
-(void)setDeviceFixedContext:(SISchemaDeviceFixedContext *)arg1 ;
-(void)setDictationContext:(SISchemaDictationContext *)arg1 ;
-(void)setSiriCue:(SISchemaSiriCue *)arg1 ;
-(void)setUufrPresented:(SISchemaUUFRPresented *)arg1 ;
-(void)setSpeechTranscription:(SISchemaSpeechTranscription *)arg1 ;
-(void)setTextToSpeechBegin:(SISchemaTextToSpeechBegin *)arg1 ;
-(void)setTextToSpeechEnd:(SISchemaTextToSpeechEnd *)arg1 ;
-(void)setUiStateTransition:(SISchemaUIStateTransition *)arg1 ;
-(void)setClientFlow:(SISchemaClientFlow *)arg1 ;
-(void)setDialogOutput:(SISchemaDialogOutput *)arg1 ;
-(void)setDictationEndPointStop:(SISchemaDictationEndPointStop *)arg1 ;
-(void)setDictationEndPointCancel:(SISchemaDictationEndPointCancel *)arg1 ;
-(void)setDictationAlternativeSelected:(SISchemaDictationAlternativeSelected *)arg1 ;
-(void)setDictationTranscriptionMetadata:(SISchemaDictationTranscriptionMetadata *)arg1 ;
-(SISchemaClientTransportEventMetadata *)transportMetadata;
-(SISchemaAudioFirstBufferRecorded *)audioFirstBufferRecorded;
-(SISchemaAudioStopRecording *)audioStopRecording;
-(SISchemaConversationTrace *)clientConversationTrace;
-(SISchemaDeviceDynamicContext *)deviceDynamicContext;
-(SISchemaDeviceFixedContext *)deviceFixedContext;
-(SISchemaDictationContext *)dictationContext;
-(SISchemaSiriCue *)siriCue;
-(SISchemaUUFRPresented *)uufrPresented;
-(SISchemaSpeechTranscription *)speechTranscription;
-(SISchemaTextToSpeechBegin *)textToSpeechBegin;
-(SISchemaTextToSpeechEnd *)textToSpeechEnd;
-(SISchemaUIStateTransition *)uiStateTransition;
-(SISchemaClientFlow *)clientFlow;
-(SISchemaDialogOutput *)dialogOutput;
-(SISchemaDictationEndPointStop *)dictationEndPointStop;
-(SISchemaDictationEndPointCancel *)dictationEndPointCancel;
-(SISchemaDictationAlternativeSelected *)dictationAlternativeSelected;
-(SISchemaDictationTranscriptionMetadata *)dictationTranscriptionMetadata;
-(unsigned long long)whichEvent_Type;
@end

