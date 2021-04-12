/*
* Generated on Monday, March 1, 2021 at 2:35:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
*/


@class NSMutableString, NSMutableArray, NSString;

@interface TIZhuyinInputManager : NSObject {

	BOOL _leftSingleQuotationMarkInserted;
	BOOL _leftDoubleQuotationMarkInserted;
	unsigned short _syllableConsonantBuffer;
	unsigned short _syllableMedialBuffer;
	unsigned short _syllableVowelBuffer;
	unsigned short _syllableToneBuffer;
	NSMutableString* _inputBuffer;
	unsigned long long _inputCursorLocation;
	NSMutableArray* _inputBufferSplittingLengths;
	NSMutableArray* _composedBufferSplittingLengths;
	NSMutableString* _composedBuffer;

}

@property (assign) unsigned short syllableConsonantBuffer;                           //@synthesize syllableConsonantBuffer=_syllableConsonantBuffer - In the implementation block
@property (assign) unsigned short syllableMedialBuffer;                              //@synthesize syllableMedialBuffer=_syllableMedialBuffer - In the implementation block
@property (assign) unsigned short syllableVowelBuffer;                               //@synthesize syllableVowelBuffer=_syllableVowelBuffer - In the implementation block
@property (assign) unsigned short syllableToneBuffer;                                //@synthesize syllableToneBuffer=_syllableToneBuffer - In the implementation block
@property (retain) NSMutableString * inputBuffer;                                    //@synthesize inputBuffer=_inputBuffer - In the implementation block
@property (retain) NSMutableArray * inputBufferSplittingLengths;                     //@synthesize inputBufferSplittingLengths=_inputBufferSplittingLengths - In the implementation block
@property (retain) NSMutableArray * composedBufferSplittingLengths;                  //@synthesize composedBufferSplittingLengths=_composedBufferSplittingLengths - In the implementation block
@property (retain) NSMutableString * composedBuffer;                                 //@synthesize composedBuffer=_composedBuffer - In the implementation block
@property (assign) BOOL leftSingleQuotationMarkInserted;                             //@synthesize leftSingleQuotationMarkInserted=_leftSingleQuotationMarkInserted - In the implementation block
@property (assign) BOOL leftDoubleQuotationMarkInserted;                             //@synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted - In the implementation block
@property (readonly) unsigned long long bufferSplittingLengthsIndex; 
@property (readonly) unsigned long long composedBufferCursorLocation; 
@property (readonly) BOOL syllableBuffersValid; 
@property (readonly) unsigned long long syllableBuffersAggregateLength; 
@property (readonly) NSString * syllableBuffersAggregateString; 
@property (assign) unsigned long long inputCursorLocation;                           //@synthesize inputCursorLocation=_inputCursorLocation - In the implementation block
@property (retain,readonly) NSString * composedText; 
@property (readonly) unsigned long long cursorLocation; 
@property (readonly) BOOL syllableBuffersOccupied; 
@property (readonly) BOOL isCursorAtEnd; 
-(id)init;
-(void)reset;
-(unsigned long long)cursorLocation;
-(BOOL)deleteFromInput;
-(void)setInputBuffer:(NSMutableString *)arg1 ;
-(NSMutableString *)inputBuffer;
-(unsigned long long)inputCursorLocation;
-(unsigned long long)inputBufferIndexOf:(unsigned long long)arg1 ;
-(void)moveCursorForward;
-(void)moveCursorBackward;
-(BOOL)syllableBuffersOccupied;
-(BOOL)isCursorAtEnd;
-(NSString *)composedText;
-(BOOL)addZhuyinInput:(id)arg1 ;
-(BOOL)addNonZhuyinInput:(id)arg1 ;
-(BOOL)revertCurrentCharacterToTonelessZhuyin;
-(void)updateWithCandidate:(id)arg1 isWholeInputCandidate:(BOOL)arg2 ;
-(BOOL)addZhuyinInput:(id)arg1 withUpdatingComposedTextToClient:(BOOL)arg2 ;
-(unsigned long long)syllableBuffersAggregateLength;
-(void)setSyllableConsonantBuffer:(unsigned short)arg1 ;
-(void)setSyllableMedialBuffer:(unsigned short)arg1 ;
-(void)setSyllableVowelBuffer:(unsigned short)arg1 ;
-(NSString *)syllableBuffersAggregateString;
-(void)setSyllableToneBuffer:(unsigned short)arg1 ;
-(unsigned long long)bufferSplittingLengthsIndex;
-(NSMutableArray *)inputBufferSplittingLengths;
-(BOOL)forwardDeleteFromInput;
-(BOOL)shouldDirectlyCommitInput:(id)arg1 ;
-(BOOL)syllableBuffersValid;
-(NSMutableString *)composedBuffer;
-(unsigned long long)composedBufferCursorLocation;
-(NSMutableArray *)composedBufferSplittingLengths;
-(id)readingsLengths:(id)arg1 ;
-(void)setInputCursorLocation:(unsigned long long)arg1 ;
-(void)resetSyllableBuffers;
-(id)convertToFullWidth:(id)arg1 ;
-(unsigned short)syllableToneBuffer;
-(unsigned short)syllableVowelBuffer;
-(unsigned short)syllableMedialBuffer;
-(unsigned short)syllableConsonantBuffer;
-(BOOL)leftSingleQuotationMarkInserted;
-(void)setLeftSingleQuotationMarkInserted:(BOOL)arg1 ;
-(BOOL)leftDoubleQuotationMarkInserted;
-(void)setLeftDoubleQuotationMarkInserted:(BOOL)arg1 ;
-(id)inputStringForCharacters:(id)arg1 ;
-(void)setInputBufferSplittingLengths:(NSMutableArray *)arg1 ;
-(void)setComposedBufferSplittingLengths:(NSMutableArray *)arg1 ;
-(void)setComposedBuffer:(NSMutableString *)arg1 ;
@end

