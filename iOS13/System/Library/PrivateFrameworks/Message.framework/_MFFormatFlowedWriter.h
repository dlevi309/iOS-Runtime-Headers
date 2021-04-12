/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


#import <Message/Message-Structs.h>
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
-(id)outputString;
-(BOOL)addedTrailingSpaces;
-(id)quotedString;
-(unsigned long long)_findLineBreakInRange:(NSRange)arg1 maxCharWidthCount:(unsigned long long)arg2 endIsURL:(BOOL)arg3 ;
-(void)_outputQuotedParagraph:(id)arg1 range:(NSRange)arg2 withQuoteLevel:(unsigned)arg3 ;
@end

