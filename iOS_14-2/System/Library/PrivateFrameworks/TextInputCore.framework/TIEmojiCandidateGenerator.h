/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/


#import <TextInputCore/TextInputCore-Structs.h>
@class NSArray, TIInputMode;

@interface TIEmojiCandidateGenerator : NSObject {

	void* m_emojiGeneratorPrimaryLanguage;
	void* m_emojiGeneratorSecondaryLanguage;
	BOOL m_didAttemptPrimaryEmojiGeneratorLoad;
	BOOL m_didAttemptSecondaryEmojiGeneratorLoad;
	BOOL m_shouldShowEmojis;
	EmojiLocaleDataWrapperRef m_emojiDataForPrimaryLocale;
	EmojiLocaleDataWrapperRef m_emojiDataForSecondaryLocale;
	BOOL m_didAttemptPrimaryLocaleForEmojiLoad;
	BOOL m_didAttemptSecondaryLocaleForEmojiLoad;
	BOOL m_isEmojiInputModeEnabled;
	NSArray* _activeInputModes;

}

@property (nonatomic,readonly) TIInputMode * primaryInputMode; 
@property (nonatomic,retain) NSArray * activeInputModes;                    //@synthesize activeInputModes=_activeInputModes - In the implementation block
-(void)updateEmojiStatusForKeyboardState:(id)arg1 ;
-(id)emojiReplacementCandidatesForText:(id)arg1 ;
-(void)setActiveInputModes:(NSArray *)arg1 ;
-(id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg2 asReplacementCandidate:(BOOL)arg3 ;
-(id)randomShuffle:(id)arg1 ;
-(id)getSkinToneSensitiveEmojis:(id)arg1 ;
-(id)createAndAddEmojiTokensFrom:(CFArrayRef)arg1 inArray:(id)arg2 forInputString:(id)arg3 ;
-(void)updateEmojiAdornmentGenerators;
-(id)emojiAdornmentCandidatesForKeyboardState:(id)arg1 ;
-(id)initWithActiveInputModes:(id)arg1 ;
-(id)generateEmojiAdornmentCandidates:(id)arg1 ;
-(id)emojiReplacementCandidates:(id)arg1 ;
-(id)emojiAdornmentCandidates:(id)arg1 ;
-(NSArray *)activeInputModes;
-(id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(EmojiLocaleDataWrapperRef)arg2 forInput:(id)arg3 ;
-(void)updateEmojiLocale;
-(id)emojiAppendCandidates:(id)arg1 ;
-(id)extractTokensForEmojiComputation:(id)arg1 ;
-(TIInputMode *)primaryInputMode;
-(void)logEmojiUsageFromCandidateBar:(id)arg1 ;
-(void)updateForActiveInputModes:(id)arg1 ;
-(void)dealloc;
-(id)emojiReplacementCandidatesForKeyboardState:(id)arg1 ;
@end

