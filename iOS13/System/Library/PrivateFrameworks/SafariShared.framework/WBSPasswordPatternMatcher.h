/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSPasswordPatternMatcher : NSObject
-(id)patternMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)patternMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)_wordListMatchesForPassword:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)_sequencePatternMatchesForPassword:(id)arg1 ;
-(id)_keyboardLayoutPatternMatchesForPassword:(id)arg1 ;
-(id)_repetitionMatchesForPassword:(id)arg1 withMatches:(id)arg2 ;
-(id)_wordListMatchesForPasscode:(id)arg1 withWordListCollection:(id)arg2 ;
-(id)_sequenceMatchesForPasscode:(id)arg1 ;
-(id)_dateMatchesForPasscode:(id)arg1 ;
-(id)_repetitionMatchesForPasscode:(id)arg1 ;
-(id)_keyboardsByIdentifier;
-(id)_passwordWithoutShiftedCharacters:(id)arg1 shiftMap:(id)arg2 outShiftedCharacterIndexSet:(id*)arg3 ;
-(unsigned long long)_directionFromHexCoordinate:(id)arg1 to:(id)arg2 ;
-(id)_keyboardMatchWithPassword:(id)arg1 range:(NSRange)arg2 shiftedCharacterCount:(unsigned long long)arg3 keyboardIdentifier:(id)arg4 keyboard:(id)arg5 ;
-(id)_sequencePatternMatchWithPassword:(id)arg1 startIndex:(unsigned long long)arg2 endIndex:(unsigned long long)arg3 delta:(long long)arg4 ;
-(id)_obviousSequenceStartCharacterSet;
-(id)_commonlySubstitutedCharacterSet;
-(id)_passwordVariationsWithoutCommonCharacterSubstitutions:(id)arg1 ;
-(void)_enumerateGraphemeClusterSubrangesOfString:(id)arg1 withMinimumLength:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_commonlySubstitutedCharactersMap;
-(id)_patternWithFewestGuessesRequiredWithRange:(NSRange)arg1 patternMatches:(id)arg2 ;
-(id)_characterRepetitionPatternForPasscode:(id)arg1 ;
-(id)_commonPasscodeCharacterRepetitionPatterns;
@end

