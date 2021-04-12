/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject {

	NSMutableDictionary* _phDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * phDictionaries;              //@synthesize phDictionaries=_phDictionaries - In the implementation block
-(id)init;
-(id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4 ;
-(id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(NSMutableDictionary *)phDictionaries;
-(void)setPhDictionaries:(NSMutableDictionary *)arg1 ;
@end

