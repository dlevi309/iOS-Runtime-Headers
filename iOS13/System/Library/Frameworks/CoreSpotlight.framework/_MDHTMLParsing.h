/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/


@class NSMutableDictionary, NSString;

@interface _MDHTMLParsing : NSObject {

	unsigned short* uniChars;
	unsigned long long uniCharLen;
	unsigned long long uniCharSize;
	unsigned char newLineBuffer[8];
	unsigned long long newLineLength;
	NSMutableDictionary* attributes;
	NSString* metaName;
	NSString* metaHttpEquiv;
	NSString* metaContent;
	unsigned long long sourceEncoding;
	unsigned sourceCFEncoding;
	unsigned long long indexingLimit;
	const char* titleStart;
	unsigned titleLength;
	BOOL inHead;
	BOOL inTitle;
	BOOL inScript;
	BOOL inStyle;

}
+(void)initialize;
-(void)dealloc;
-(void)appendUnichars:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithEncoding:(unsigned long long)arg1 ;
-(void)appendText:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)appendNewline;
@end

