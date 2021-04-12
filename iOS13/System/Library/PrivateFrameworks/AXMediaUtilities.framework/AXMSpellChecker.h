/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/


@class AppleSpell;

@interface AXMSpellChecker : NSObject {

	AppleSpell* _spellChecker;

}

@property (nonatomic,retain) AppleSpell * spellChecker;              //@synthesize spellChecker=_spellChecker - In the implementation block
-(AppleSpell *)spellChecker;
-(void)correctSpellingInText:(id)arg1 withLanguages:(id)arg2 ;
-(BOOL)textContainsMisspelling:(id)arg1 withLanguages:(id)arg2 ;
-(void)setSpellChecker:(AppleSpell *)arg1 ;
@end

