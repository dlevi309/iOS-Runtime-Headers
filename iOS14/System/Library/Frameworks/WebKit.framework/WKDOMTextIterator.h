/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)atEnd;
-(void)advance;
-(const unsigned short*)currentTextPointer;
-(unsigned long long)currentTextLength;
-(id)initWithRange:(id)arg1 ;
-(WKDOMRange *)currentRange;
@end

