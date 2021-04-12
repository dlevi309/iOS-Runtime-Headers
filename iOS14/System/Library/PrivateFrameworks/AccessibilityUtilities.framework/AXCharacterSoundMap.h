/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
*/


@class NSMutableDictionary;

@interface AXCharacterSoundMap : NSObject {

	NSMutableDictionary* _phDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * phDictionaries;              //@synthesize phDictionaries=_phDictionaries - In the implementation block
-(id)init;
-(NSMutableDictionary *)phDictionaries;
-(void)setPhDictionaries:(NSMutableDictionary *)arg1 ;
-(id)_linguisticStringForCharacter:(id)arg1 language:(id)arg2 linguisticType:(long long)arg3 andVoiceIdentifier:(id)arg4 ;
-(id)phonemeStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
-(id)phoneticStringForCharacter:(id)arg1 forLanguage:(id)arg2 andVoiceIdentifier:(id)arg3 ;
@end

