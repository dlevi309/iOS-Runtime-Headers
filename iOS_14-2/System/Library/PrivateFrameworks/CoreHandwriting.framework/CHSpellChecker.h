/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isWordInUserDictionaries:(id)arg1 caseSensitive:(BOOL)arg2 ;
-(void)dealloc;
-(id)correctionsForString:(id)arg1 shouldUseErrorModel:(BOOL)arg2 forLocale:(id)arg3 ;
-(id)topCorrectionForString:(id)arg1 contextBeforeToken:(id)arg2 contextSeparator:(id)arg3 shouldUseErrorModel:(BOOL)arg4 forLanguage:(id)arg5 ;
-(CHSpellCheckerErrorModel *)errorModel;
-(void)setErrorModel:(CHSpellCheckerErrorModel *)arg1 ;
@end

