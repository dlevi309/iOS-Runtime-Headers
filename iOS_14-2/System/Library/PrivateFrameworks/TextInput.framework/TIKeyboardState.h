/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSArray, TIInputContextHistory, TIKeyboardLayout, TIKeyboardLayoutState, TIDocumentState, TIKeyboardSecureCandidateRenderTraits, BKSHIDEventAuthenticationMessage, TIKeyboardCandidate, TITextInputTraits, NSDictionary;

@interface TIKeyboardState : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI12 _mask;
	SCD_Union_TI14 _autocorrectionListUIState;
	int _shiftState;
	NSUUID* _documentIdentifier;
	NSString* _clientIdentifier;
	NSString* _inputMode;
	NSArray* _auxiliaryInputModeLanguages;
	NSString* _recipientIdentifier;
	TIInputContextHistory* _inputContextHistory;
	TIKeyboardLayout* _keyLayout;
	TIKeyboardLayoutState* _layoutState;
	TIDocumentState* _documentState;
	TIKeyboardSecureCandidateRenderTraits* _secureCandidateRenderTraits;
	BKSHIDEventAuthenticationMessage* _eventAuthenticationMessage;
	NSString* _inputForMarkedText;
	NSString* _searchStringForMarkedText;
	TIKeyboardCandidate* _currentCandidate;
	TITextInputTraits* _textInputTraits;
	NSString* _responseContext;
	unsigned long long _autofillMode;
	NSDictionary* _autofillContext;
	NSArray* _supportedPayloadIds;
	NSArray* _statisticChanges;

}

@property (nonatomic,retain) NSUUID * documentIdentifier;                                                    //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * clientIdentifier;                                                      //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * inputMode;                                                             //@synthesize inputMode=_inputMode - In the implementation block
@property (nonatomic,copy) NSArray * auxiliaryInputModeLanguages;                                            //@synthesize auxiliaryInputModeLanguages=_auxiliaryInputModeLanguages - In the implementation block
@property (nonatomic,copy) NSString * recipientIdentifier;                                                   //@synthesize recipientIdentifier=_recipientIdentifier - In the implementation block
@property (nonatomic,retain) TIInputContextHistory * inputContextHistory;                                    //@synthesize inputContextHistory=_inputContextHistory - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * keyLayout;                                                   //@synthesize keyLayout=_keyLayout - In the implementation block
@property (assign,nonatomic) int shiftState;                                                                 //@synthesize shiftState=_shiftState - In the implementation block
@property (nonatomic,copy) TIKeyboardLayoutState * layoutState;                                              //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,retain) TIDocumentState * documentState;                                                //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,copy) TIKeyboardSecureCandidateRenderTraits * secureCandidateRenderTraits;              //@synthesize secureCandidateRenderTraits=_secureCandidateRenderTraits - In the implementation block
@property (nonatomic,copy) BKSHIDEventAuthenticationMessage * eventAuthenticationMessage;                    //@synthesize eventAuthenticationMessage=_eventAuthenticationMessage - In the implementation block
@property (nonatomic,copy) NSString * inputForMarkedText;                                                    //@synthesize inputForMarkedText=_inputForMarkedText - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * currentCandidate;                                         //@synthesize currentCandidate=_currentCandidate - In the implementation block
@property (assign,nonatomic) BOOL userSelectedCurrentCandidate; 
@property (assign,nonatomic) BOOL shouldSkipCandidateSelection; 
@property (assign,nonatomic) BOOL suppressingCandidateSelection; 
@property (assign,nonatomic) BOOL needsCandidateMetadata; 
@property (assign,nonatomic) BOOL keyboardEventsLagging; 
@property (assign,nonatomic) BOOL hardwareKeyboardMode; 
@property (assign,nonatomic) BOOL splitKeyboardMode; 
@property (assign,nonatomic) BOOL floatingKeyboardMode; 
@property (assign,nonatomic) BOOL landscapeOrientation; 
@property (assign,nonatomic) BOOL omitEmojiCandidates; 
@property (assign,nonatomic) BOOL emojiSearchMode; 
@property (assign,nonatomic) BOOL emojiPopoverMode; 
@property (assign,nonatomic) BOOL wordLearningEnabled; 
@property (assign,nonatomic) BOOL autocorrectionEnabled; 
@property (assign,nonatomic) BOOL shortcutConversionEnabled; 
@property (assign,nonatomic) BOOL candidateSelectionPredictionEnabled; 
@property (assign,nonatomic) BOOL autocapitalizationEnabled; 
@property (nonatomic,retain) TITextInputTraits * textInputTraits;                                            //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,copy) NSString * responseContext;                                                       //@synthesize responseContext=_responseContext - In the implementation block
@property (assign,nonatomic) unsigned long long autocapitalizationType; 
@property (assign,nonatomic) unsigned long long keyboardType; 
@property (assign,nonatomic) BOOL secureTextEntry; 
@property (assign,nonatomic) BOOL autocorrectionListUIDisplayed; 
@property (assign,nonatomic) BOOL autocorrectionListUIAutoDisplayMode; 
@property (assign,nonatomic) BOOL canSendCurrentLocation; 
@property (assign,nonatomic) BOOL isScreenLocked; 
@property (assign,nonatomic) BOOL longPredictionListEnabled; 
@property (assign,nonatomic) BOOL needAutofill; 
@property (assign,nonatomic) unsigned long long autofillMode;                                                //@synthesize autofillMode=_autofillMode - In the implementation block
@property (nonatomic,retain) NSDictionary * autofillContext;                                                 //@synthesize autofillContext=_autofillContext - In the implementation block
@property (assign,nonatomic) BOOL needOneTimeCodeAutofill; 
@property (nonatomic,readonly) BOOL needContactAutofill; 
@property (nonatomic,copy) NSArray * supportedPayloadIds;                                                    //@synthesize supportedPayloadIds=_supportedPayloadIds - In the implementation block
@property (nonatomic,readonly) BOOL shouldOutputFullwidthSpace; 
@property (nonatomic,copy) NSArray * statisticChanges;                                                       //@synthesize statisticChanges=_statisticChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)autocapitalizationType;
-(BOOL)needOneTimeCodeAutofill;
-(BOOL)shouldSkipCandidateSelection;
-(void)setInputMode:(NSString *)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setLandscapeOrientation:(BOOL)arg1 ;
-(BOOL)userSelectedCurrentCandidate;
-(void)setUserSelectedCurrentCandidate:(BOOL)arg1 ;
-(TIDocumentState *)documentState;
-(BOOL)suppressingCandidateSelection;
-(BOOL)isScreenLocked;
-(NSString *)inputMode;
-(unsigned long long)keyboardType;
-(void)setAutocorrectionEnabled:(BOOL)arg1 ;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setAutofillMode:(unsigned long long)arg1 ;
-(void)setSuppressingCandidateSelection:(BOOL)arg1 ;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(void)setCandidateSelectionPredictionEnabled:(BOOL)arg1 ;
-(void)setFloatingKeyboardMode:(BOOL)arg1 ;
-(void)setKeyboardType:(unsigned long long)arg1 ;
-(void)setEventAuthenticationMessage:(BKSHIDEventAuthenticationMessage *)arg1 ;
-(void)setAutocapitalizationType:(unsigned long long)arg1 ;
-(void)setAutofillContext:(NSDictionary *)arg1 ;
-(BOOL)secureTextEntry;
-(void)setLayoutState:(TIKeyboardLayoutState *)arg1 ;
-(void)_createTextInputTraitsIfNecessary;
-(void)setSecureCandidateRenderTraits:(TIKeyboardSecureCandidateRenderTraits *)arg1 ;
-(void)setLongPredictionListEnabled:(BOOL)arg1 ;
-(void)setNeedsCandidateMetadata:(BOOL)arg1 ;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(BOOL)hardwareKeyboardMode;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)auxiliaryInputModeLanguages;
-(void)setRecipientIdentifier:(NSString *)arg1 ;
-(NSString *)inputForMarkedText;
-(unsigned long long)autofillMode;
-(void)setSplitKeyboardMode:(BOOL)arg1 ;
-(BOOL)splitKeyboardMode;
-(BOOL)autocorrectionListUIDisplayed;
-(BOOL)omitEmojiCandidates;
-(BOOL)shortcutConversionEnabled;
-(TIInputContextHistory *)inputContextHistory;
-(BOOL)candidateSelectionPredictionEnabled;
-(BKSHIDEventAuthenticationMessage *)eventAuthenticationMessage;
-(NSString *)searchStringForMarkedText;
-(void)setAutocorrectionListUIDisplayed:(BOOL)arg1 ;
-(void)setAutocorrectionListUIAutoDisplayMode:(BOOL)arg1 ;
-(void)setKeyboardEventsLagging:(BOOL)arg1 ;
-(id)description;
-(BOOL)autocorrectionListUIAutoDisplayMode;
-(NSArray *)supportedPayloadIds;
-(void)setHardwareKeyboardMode:(BOOL)arg1 ;
-(NSDictionary *)autofillContext;
-(TIKeyboardLayout *)keyLayout;
-(void)setAutocapitalizationEnabled:(BOOL)arg1 ;
-(BOOL)wordLearningEnabled;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(int)shiftState;
-(void)setEmojiSearchMode:(BOOL)arg1 ;
-(TIKeyboardCandidate *)currentCandidate;
-(void)setInputForMarkedText:(NSString *)arg1 ;
-(TIKeyboardSecureCandidateRenderTraits *)secureCandidateRenderTraits;
-(NSUUID *)documentIdentifier;
-(NSString *)recipientIdentifier;
-(void)setCanSendCurrentLocation:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setNeedOneTimeCodeAutofill:(BOOL)arg1 ;
-(BOOL)longPredictionListEnabled;
-(void)setNeedAutofill:(BOOL)arg1 ;
-(void)setShortcutConversionEnabled:(BOOL)arg1 ;
-(BOOL)emojiPopoverMode;
-(void)setShouldSkipCandidateSelection:(BOOL)arg1 ;
-(BOOL)landscapeOrientation;
-(void)setWordLearningEnabled:(BOOL)arg1 ;
-(BOOL)floatingKeyboardMode;
-(NSString *)responseContext;
-(void)setInputContextHistory:(TIInputContextHistory *)arg1 ;
-(BOOL)needsCandidateMetadata;
-(TIKeyboardLayoutState *)layoutState;
-(BOOL)needContactAutofill;
-(BOOL)emojiSearchMode;
-(NSString *)clientIdentifier;
-(void)setAuxiliaryInputModeLanguages:(NSArray *)arg1 ;
-(void)setSupportedPayloadIds:(NSArray *)arg1 ;
-(void)setStatisticChanges:(NSArray *)arg1 ;
-(NSArray *)statisticChanges;
-(BOOL)shouldOutputFullwidthSpace;
-(BOOL)canSendCurrentLocation;
-(BOOL)keyboardEventsLagging;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(void)setShiftState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKeyLayout:(TIKeyboardLayout *)arg1 ;
-(void)setResponseContext:(NSString *)arg1 ;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(BOOL)autocorrectionEnabled;
-(void)setCurrentCandidate:(TIKeyboardCandidate *)arg1 ;
-(void)setOmitEmojiCandidates:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)autocapitalizationEnabled;
-(BOOL)needAutofill;
-(void)setEmojiPopoverMode:(BOOL)arg1 ;
@end

