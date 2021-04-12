/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class WKDOMRange;

@interface WKDOMTextIterator : NSObject {

	unique_ptr<WebCore::TextIterator, std::__1::default_delete<WebCore::TextIterator> >* _textIterator;
	Vector<unsigned short, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _upconvertedText;

}

@property (readonly) BOOL atEnd; 
@property (readonly) WKDOMRange * currentRange; 
@property (readonly) unsigned long long currentTextLength; 
@property (readonly) const unsigned short* currentTextPointer; 
-(id)initWithRange:(id)arg1 ;
-(void)advance;
-(BOOL)atEnd;
-(WKDOMRange *)currentRange;
-(const unsigned short*)currentTextPointer;
-(unsigned long long)currentTextLength;
@end

