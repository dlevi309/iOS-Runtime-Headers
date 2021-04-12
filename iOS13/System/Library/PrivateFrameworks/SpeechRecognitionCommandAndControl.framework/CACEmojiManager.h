/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/


@class NSString, EMFEmojiLocaleData, EMFEmojiPreferences;

@interface CACEmojiManager : NSObject {

	NSString* _localeIdentifier;
	EMFEmojiLocaleData* _emojiLocaleData;
	EMFEmojiPreferences* _emojiPreferences;

}

@property (nonatomic,retain) EMFEmojiLocaleData * emojiLocaleData;                //@synthesize emojiLocaleData=_emojiLocaleData - In the implementation block
@property (nonatomic,retain) EMFEmojiPreferences * emojiPreferences;              //@synthesize emojiPreferences=_emojiPreferences - In the implementation block
@property (nonatomic,copy,readonly) NSString * localeIdentifier;                  //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
+(id)sharedManager;
-(NSString *)localeIdentifier;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)emojiStringsFromEmojiTokens:(id)arg1 skinToneFilter:(int)arg2 ;
-(id)emojiTokenUsingPrefixApproachForText:(id)arg1 skinToneFilter:(int)arg2 ;
-(BOOL)isEmoji:(id)arg1 ;
-(EMFEmojiLocaleData *)emojiLocaleData;
-(id)stringByReplacingEmojisWithDescriptions:(id)arg1 ;
-(id)emojisForText:(id)arg1 skinToneFilter:(int)arg2 ;
-(EMFEmojiPreferences *)emojiPreferences;
-(void)enumerateEmojisInText:(id)arg1 skinToneFilter:(int)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)relatedEmojisForEmoji:(id)arg1 skinToneFilter:(int)arg2 ;
-(void)willInsertStringPotentiallyContainingEmojis:(id)arg1 ;
-(void)setEmojiLocaleData:(EMFEmojiLocaleData *)arg1 ;
-(void)setEmojiPreferences:(EMFEmojiPreferences *)arg1 ;
@end

