/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setInput:(id)arg1 ;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(id)inputString;
-(void)updateState;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)initWithConfig:(id)arg1 keyboardState:(id)arg2 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(id)displayStringForSearch;
-(id)rawInputStringFrom:(id)arg1 ;
-(id)segmentAdjustInputManager:(unsigned long long)arg1 ;
-(id)transliterate:(id)arg1 ;
-(void)_addInput:(id)arg1 ;
-(void)setExternalString:(NSString *)arg1 ;
-(NSMutableArray *)externalIndexToInternalIndexMappingArray;
-(void)setExternalInputIndex:(unsigned long long)arg1 ;
-(unsigned long long)externalInputIndex;
-(NSString *)externalString;
@end

