/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/

#import <MessageUI/MFMessageBodySubparser.h>

@protocol MFMessageBodyElement_Private;
@class NSMutableArray;

@interface MFMessageBodyOriginalTextSubparser : MFMessageBodySubparser {

	NSMutableArray* _lastTextElements;
	id<MFMessageBodyElement_Private> _lastNonWhitespaceTextElement;
	/*^block*/id _foundTextBlock;
	/*^block*/id _foundWhitespaceBlock;
	BOOL _foundText;
	BOOL _foundForwardSeparator;

}
-(void)dealloc;
-(void)copyBlocks;
-(void)_consumeTextElement:(id)arg1 isAttribution:(BOOL)arg2 ;
-(void)_consumeAnyLastTextElementAsAttribution:(BOOL)arg1 ;
-(void)setFoundTextBlock:(/*^block*/id)arg1 ;
-(void)setFoundWhitespaceBlock:(/*^block*/id)arg1 ;
-(void)messageBodyParser:(id)arg1 foundMessageBodyElement:(id)arg2 ;
-(void)messageBodyParserDidFinishParsing:(id)arg1 ;
@end

