/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@protocol MPUHTMLParserDelegate;
@class _MPUHTMLDefaultDelegate;

@interface MPUHTMLParser : NSObject {

	_MPUHTMLDefaultDelegate* _defaultDelegate;
	id<MPUHTMLParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUHTMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)parser;
+(id)sanitizedHTMLString:(id)arg1 ;
+(id)displayDelegateWithDefaultAttributes:(id)arg1 ;
+(id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2 ;
+(id)parserWithDefaultAttributes:(id)arg1 ;
-(id<MPUHTMLParserDelegate>)delegate;
-(void)setDelegate:(id<MPUHTMLParserDelegate>)arg1 ;
-(id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2 ;
@end

