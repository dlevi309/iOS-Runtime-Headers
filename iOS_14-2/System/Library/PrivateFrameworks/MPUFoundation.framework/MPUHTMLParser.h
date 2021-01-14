/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
*/


@protocol MPUHTMLParserDelegate;
@class _MPUHTMLDefaultDelegate;

@interface MPUHTMLParser : NSObject {

	_MPUHTMLDefaultDelegate* _defaultDelegate;
	id<MPUHTMLParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MPUHTMLParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)displayDelegateWithDefaultAttributes:(id)arg1 ;
+(id)parser;
+(id)parserWithDefaultAttributes:(id)arg1 ;
+(id)sanitizedHTMLString:(id)arg1 ;
+(id)attributedSanitizedStringFromHTMLString:(id)arg1 defaultAttributes:(id)arg2 ;
-(id)attributedStringForHTMLString:(id)arg1 error:(id*)arg2 ;
-(id<MPUHTMLParserDelegate>)delegate;
-(void)setDelegate:(id<MPUHTMLParserDelegate>)arg1 ;
@end

