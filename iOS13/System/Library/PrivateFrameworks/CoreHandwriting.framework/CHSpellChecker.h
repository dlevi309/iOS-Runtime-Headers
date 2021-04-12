/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/


@class AppleSpell, CHSpellCheckerErrorModel;

@interface CHSpellChecker : NSObject {

	AppleSpell* _spellServer;
	CHSpellCheckerErrorModel* _errorModel;

}

@property (nonatomic,retain) CHSpellCheckerErrorModel * errorModel;              //@synthesize errorModel=_errorModel - In the implementation block
+(id)sharedSpellServer;
+(id)newErrorModel;
-(id)init;
-(void)dealloc;
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(id)correctionsForString:(id)arg1 shouldUseErrorModel:(BOOL)arg2 forLocale:(id)arg3 ;
-(CHSpellCheckerErrorModel *)errorModel;
-(void)setErrorModel:(CHSpellCheckerErrorModel *)arg1 ;
@end

