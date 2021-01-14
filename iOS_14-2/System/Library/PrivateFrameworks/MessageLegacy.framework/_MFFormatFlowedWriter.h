/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
*/


#import <MessageLegacy/MessageLegacy-Structs.h>
@class MFPlainTextDocument, NSMutableString;

@interface _MFFormatFlowedWriter : NSObject {

	MFPlainTextDocument* _inputDocument;
	unsigned _encoding;
	NSMutableString* _outputString;
	NSMutableString* _quotedString;
	unsigned _addedTrailingSpaces : 1;
	NSMutableString* _lineString;

}
+(id)newWithPlainTextDocument:(id)arg1 encoding:(unsigned)arg2 ;
-(id)quotedString;
-(BOOL)addedTrailingSpaces;
-(unsigned long long)_findLineBreakInRange:(NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3 ;
-(void)_outputQuotedParagraph:(id)arg1 range:(NSRange)arg2 withQuoteLevel:(unsigned)arg3 ;
-(id)outputString;
@end

