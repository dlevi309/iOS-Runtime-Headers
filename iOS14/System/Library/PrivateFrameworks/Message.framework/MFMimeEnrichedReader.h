/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject {

	SCD_Struct_MF21* _inputBuffer;
	long long _currentIndex;
	long long _inputLength;
	unsigned _noFillLevel : 30;
	unsigned _eatOneNewline : 1;
	unsigned _insideComment : 1;
	unsigned _wantsPlainText : 1;
	int _lastQuoteLevel;
	CFArrayRef _commandStack;
	id _outputString;
	NSMutableString* _outputBuffer;
	CFStringRef _prependHTML;
	CFStringRef _postpendHTML;
	float _indentWidth;

}
+(CFCharacterSetRef)parenSet;
+(CFCharacterSetRef)punctuationSet;
-(id)currentFont;
-(void)mismatchError:(id)arg1 ;
-(void)parseParameterString:(id)arg1 ;
-(void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
-(void)handleNoParameterCommand:(const SCD_Struct_MF24*)arg1 ;
-(void)setupFontStackEntry:(CommandStackEntry*)arg1 ;
-(void)appendNewLine:(id)arg1 ;
-(int)readTokenInto:(id*)arg1 ;
-(void)resetStateWithString:(id)arg1 outputString:(id)arg2 ;
-(void)beginCommand:(id)arg1 ;
-(void)endCommand:(id)arg1 ;
-(void)appendStringToBuffer:(id)arg1 ;
-(void)closeUpQuoting;
-(void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2 ;
-(void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2 ;
-(id)description;
-(void)setWantsHTML:(BOOL)arg1 ;
-(void)dealloc;
@end

