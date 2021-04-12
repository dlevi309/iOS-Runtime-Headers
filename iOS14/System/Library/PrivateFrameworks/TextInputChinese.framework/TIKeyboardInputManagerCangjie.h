/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
*/

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign,nonatomic) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign,nonatomic) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
+(Class)wordSearchClass;
-(BOOL)supportsNumberKeySelection;
-(id)defaultCandidate;
-(unsigned long long)initialSelectedIndex;
-(id)keyboardBehaviors;
-(id)nonstopPunctuationCharacters;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)syncToLayoutState:(id)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)sortingMethods;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(BOOL)suchengEnabled;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(void)syncWordSearch;
-(void)updateMarkedText;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)selectedCandidateIsEnglish;
-(unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(id)cangjieSet;
-(id)cangjieAlphabetSet;
-(BOOL)isPunctuationInput;
@end

