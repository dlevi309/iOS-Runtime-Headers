/*
* Generated on Thursday, January 14, 2021 at 2:29:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
*/

#import <TextInput_ja/TIKeyboardInputManagerLiveConversion_ja.h>

@class TIMathSymbolPunctuationController, NSMutableArray, NSString;

@interface TIKeyboardInputManagerLiveConversion_ja_Romaji : TIKeyboardInputManagerLiveConversion_ja {

	TIMathSymbolPunctuationController* _mathSymbolPunctuationController;
	NSMutableArray* _externalIndexToInternalIndexMappingArray;
	unsigned long long _externalInputIndex;
	NSString* _externalString;

}

@property (nonatomic,readonly) NSMutableArray * externalIndexToInternalIndexMappingArray;              //@synthesize externalIndexToInternalIndexMappingArray=_externalIndexToInternalIndexMappingArray - In the implementation block
@property (assign,nonatomic) unsigned long long externalInputIndex;                                    //@synthesize externalInputIndex=_externalInputIndex - In the implementation block
@property (nonatomic,copy) NSString * externalString;                                                  //@synthesize externalString=_externalString - In the implementation block
+(Class)wordSearchClass;
-(void)setInput:(id)arg1 ;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(void)updateState;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)inputString;
-(void)dealloc;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)displayStringForSearch;
-(id)rawInputStringFrom:(id)arg1 ;
-(id)hiraganaStringFor:(id)arg1 ;
-(id)segmentAdjustInputManager:(unsigned long long)arg1 ;
-(id)transliterate:(id)arg1 ;
-(void)_addInput:(id)arg1 ;
-(NSString *)externalString;
-(NSMutableArray *)externalIndexToInternalIndexMappingArray;
-(void)setExternalInputIndex:(unsigned long long)arg1 ;
-(void)setExternalString:(NSString *)arg1 ;
-(unsigned long long)externalInputIndex;
@end

