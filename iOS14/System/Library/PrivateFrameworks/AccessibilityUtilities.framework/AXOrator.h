/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol AXOratorDelegate;
@class AVSpeechUtterance, AXDispatchTimer, AXLanguageTaggedContent, NSArray, AVSpeechSynthesizer, NSMutableArray, NSString, AXLanguageTag;

@interface AXOrator : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechUtterance* _statusUtterance;
	BOOL _contentIsSpeakable;
	AXDispatchTimer* _audioSessionTimer;
	BOOL _spellOutContent;
	BOOL _shouldSpeakNextItemOnResume;
	BOOL _preferredLanguageWasSpecified;
	BOOL _isProcessingContentForSpeech;
	id<AXOratorDelegate> _delegate;
	long long _speakingContext;
	AXLanguageTaggedContent* _selectedContent;
	double _audioSessionInactiveTimeout;
	AXLanguageTaggedContent* _speakingContent;
	NSArray* _speakingContentTokenRanges;
	unsigned long long _numberOfTokensToSkip;
	AVSpeechSynthesizer* _speechSynthesizer;
	NSMutableArray* _speechSequenceItems;
	NSString* _lastUtteranceLanguageCode;
	AVSpeechUtterance* _lastUtterance;
	AXLanguageTag* _lastUtteranceLanguageTag;
	NSString* _currentLanguageCode;
	NSMutableArray* _additionalContentToProcess;
	NSRange _lastSpokenSubstringRange;
	NSRange _lastUtteranceSubstringRange;

}

@property (nonatomic,retain) AXLanguageTaggedContent * selectedContent;                //@synthesize selectedContent=_selectedContent - In the implementation block
@property (nonatomic,retain) AXLanguageTaggedContent * speakingContent;                //@synthesize speakingContent=_speakingContent - In the implementation block
@property (nonatomic,retain) NSArray * speakingContentTokenRanges;                     //@synthesize speakingContentTokenRanges=_speakingContentTokenRanges - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTokensToSkip;                  //@synthesize numberOfTokensToSkip=_numberOfTokensToSkip - In the implementation block
@property (nonatomic,retain) AVSpeechSynthesizer * speechSynthesizer;                  //@synthesize speechSynthesizer=_speechSynthesizer - In the implementation block
@property (nonatomic,retain) NSMutableArray * speechSequenceItems;                     //@synthesize speechSequenceItems=_speechSequenceItems - In the implementation block
@property (nonatomic,retain) NSString * lastUtteranceLanguageCode;                     //@synthesize lastUtteranceLanguageCode=_lastUtteranceLanguageCode - In the implementation block
@property (assign,nonatomic) NSRange lastUtteranceSubstringRange;                      //@synthesize lastUtteranceSubstringRange=_lastUtteranceSubstringRange - In the implementation block
@property (assign,nonatomic) NSRange lastSpokenSubstringRange;                         //@synthesize lastSpokenSubstringRange=_lastSpokenSubstringRange - In the implementation block
@property (nonatomic,retain) AVSpeechUtterance * lastUtterance;                        //@synthesize lastUtterance=_lastUtterance - In the implementation block
@property (nonatomic,retain) AXLanguageTag * lastUtteranceLanguageTag;                 //@synthesize lastUtteranceLanguageTag=_lastUtteranceLanguageTag - In the implementation block
@property (assign,nonatomic) BOOL shouldSpeakNextItemOnResume;                         //@synthesize shouldSpeakNextItemOnResume=_shouldSpeakNextItemOnResume - In the implementation block
@property (nonatomic,retain) NSString * currentLanguageCode;                           //@synthesize currentLanguageCode=_currentLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL preferredLanguageWasSpecified;                       //@synthesize preferredLanguageWasSpecified=_preferredLanguageWasSpecified - In the implementation block
@property (assign,nonatomic) BOOL isProcessingContentForSpeech;                        //@synthesize isProcessingContentForSpeech=_isProcessingContentForSpeech - In the implementation block
@property (nonatomic,retain) NSMutableArray * additionalContentToProcess;              //@synthesize additionalContentToProcess=_additionalContentToProcess - In the implementation block
@property (assign,nonatomic,__weak) id<AXOratorDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * content; 
@property (assign,nonatomic) long long speakingContext;                                //@synthesize speakingContext=_speakingContext - In the implementation block
@property (assign,nonatomic) BOOL spellOutContent;                                     //@synthesize spellOutContent=_spellOutContent - In the implementation block
@property (assign,nonatomic) double audioSessionInactiveTimeout;                       //@synthesize audioSessionInactiveTimeout=_audioSessionInactiveTimeout - In the implementation block
@property (nonatomic,readonly) NSString * currentVoiceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)content;
-(id)init;
-(void)setContent:(NSString *)arg1 ;
-(id<AXOratorDelegate>)delegate;
-(BOOL)isSpeaking;
-(void)setDelegate:(id<AXOratorDelegate>)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(BOOL)resumeSpeaking:(id*)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3 ;
-(float)speechRate;
-(NSString *)currentLanguageCode;
-(void)setLastUtteranceSubstringRange:(NSRange)arg1 ;
-(void)setLastSpokenSubstringRange:(NSRange)arg1 ;
-(void)setSpeakingContext:(long long)arg1 ;
-(void)setAdditionalContentToProcess:(NSMutableArray *)arg1 ;
-(void)_respeakUtteranceIfNeeded;
-(AXLanguageTaggedContent *)selectedContent;
-(void)setSelectedContent:(AXLanguageTaggedContent *)arg1 ;
-(BOOL)_canSpeakTaggedContent:(id)arg1 ;
-(BOOL)isProcessingContentForSpeech;
-(NSMutableArray *)additionalContentToProcess;
-(NSMutableArray *)speechSequenceItems;
-(id)_getLangCodeForItem:(id)arg1 ;
-(NSString *)lastUtteranceLanguageCode;
-(void)setCurrentLanguageCode:(NSString *)arg1 ;
-(BOOL)speakFaster;
-(BOOL)pauseSpeaking:(id*)arg1 ;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg1 delayBeforeStart:(double)arg2 error:(id*)arg3 ;
-(void)setPreferredLanguageWasSpecified:(BOOL)arg1 ;
-(AVSpeechSynthesizer *)speechSynthesizer;
-(void)setSpeechSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(void)_updateAudioSessionCategory;
-(void)_startSpeakingSequence;
-(AXLanguageTaggedContent *)speakingContent;
-(BOOL)_successWithCode:(long long)arg1 error:(id*)arg2 ;
-(AVSpeechUtterance *)lastUtterance;
-(void)_clearAllContentState;
-(void)setLastUtterance:(AVSpeechUtterance *)arg1 ;
-(BOOL)resumeSpeakingAfterDelay:(double)arg1 error:(id*)arg2 ;
-(BOOL)shouldSpeakNextItemOnResume;
-(void)setShouldSpeakNextItemOnResume:(BOOL)arg1 ;
-(void)_speakNextItemInSequence;
-(BOOL)_useLanguageSpecificSpeakingRate;
-(BOOL)_changeSpeakingSpeed:(double)arg1 usingLanugageSpecificRate:(BOOL)arg2 ;
-(BOOL)speakSlower;
-(double)currentSpeechRateForAdjustment;
-(BOOL)_skipByUnit:(BOOL)arg1 boundary:(unsigned long long)arg2 ;
-(void)setSpeakingContent:(AXLanguageTaggedContent *)arg1 ;
-(void)setSpeakingContentTokenRanges:(NSArray *)arg1 ;
-(void)setSpeechSequenceItems:(NSMutableArray *)arg1 ;
-(void)_updateSequenceForSpellOutBehavior;
-(BOOL)spellOutContent;
-(BOOL)isPaused;
-(BOOL)preferredLanguageWasSpecified;
-(void)_processAdditionalContentInPreparationForSpeech;
-(void)setLastUtteranceLanguageCode:(NSString *)arg1 ;
-(void)setLastUtteranceLanguageTag:(AXLanguageTag *)arg1 ;
-(NSRange)lastSpokenSubstringRange;
-(AXLanguageTag *)lastUtteranceLanguageTag;
-(NSRange)lastUtteranceSubstringRange;
-(NSArray *)speakingContentTokenRanges;
-(unsigned long long)numberOfTokensToSkip;
-(id)_speechSequenceItemsStartingAtContentLocation:(unsigned long long)arg1 ;
-(void)_tokenizeContentIfNeeded;
-(long long)_currentTokenIndex:(BOOL)arg1 ;
-(void)_speakNextTokenFromCurrentTokenIndex:(long long)arg1 forward:(BOOL)arg2 boundary:(unsigned long long)arg3 ;
-(void)setNumberOfTokensToSkip:(unsigned long long)arg1 ;
-(void)setAudioSessionInactiveTimeout:(double)arg1 ;
-(void)setIsProcessingContentForSpeech:(BOOL)arg1 ;
-(long long)speakingContext;
-(NSString *)currentVoiceIdentifier;
-(void)addAdditionalContentToSpeechQueue:(id)arg1 ;
-(BOOL)startSpeakingWithPreferredLanguage:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopSpeaking:(id*)arg1 ;
-(BOOL)setSpeakingRate:(double)arg1 ;
-(BOOL)fastForwardWithBoundary:(unsigned long long)arg1 ;
-(BOOL)rewindWithBoundary:(unsigned long long)arg1 ;
-(void)speakStatusWithLanguage:(id)arg1 rate:(id)arg2 ;
-(BOOL)contentIsSpeakable;
-(BOOL)canResumeWithContent:(id)arg1 ;
-(void)clearSelectedContent;
-(void)setSpellOutContent:(BOOL)arg1 ;
-(double)audioSessionInactiveTimeout;
@end

