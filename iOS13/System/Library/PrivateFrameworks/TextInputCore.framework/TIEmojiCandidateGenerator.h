/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSArray *)activeInputModes;
-(TIInputMode *)primaryInputMode;
-(id)initWithActiveInputModes:(id)arg1 ;
-(void)updateEmojiLocale;
-(void)updateEmojiAdornmentGenerators;
-(id)createAndAddEmojiTokensFrom:(CFArrayRef)arg1 inArray:(id)arg2 forInputString:(id)arg3 ;
-(id)enumerateForEmojiCandidatesIn:(id)arg1 forEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg2 asReplacementCandidate:(BOOL)arg3 ;
-(id)randomShuffle:(id)arg1 ;
-(id)extractTokensForEmojiComputation:(id)arg1 ;
-(id)getSkinToneSensitiveEmojis:(id)arg1 ;
-(id)skinToneModifiedAdornmentEmojis:(id)arg1 forLocale:(EmojiLocaleDataWrapperRef)arg2 forInput:(id)arg3 ;
-(id)emojiAppendCandidates:(id)arg1 ;
-(id)emojiAdornmentCandidates:(id)arg1 ;
-(id)generateEmojiAdornmentCandidates:(id)arg1 ;
-(void)updateForActiveInputModes:(id)arg1 ;
-(void)updateEmojiStatusForKeyboardState:(id)arg1 ;
-(id)emojiReplacementCandidates:(id)arg1 ;
-(id)emojiReplacementCandidatesForKeyboardState:(id)arg1 ;
-(id)emojiReplacementCandidatesForText:(id)arg1 ;
-(id)emojiAdornmentCandidatesForKeyboardState:(id)arg1 ;
-(void)logEmojiUsageFromCandidateBar:(id)arg1 ;
-(void)setActiveInputModes:(NSArray *)arg1 ;
@end

