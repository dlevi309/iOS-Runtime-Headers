/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;
@interface REScriptParser : NSObject {

	id<REBacktrackingTokenBuffer> _buffer;
	id<REScriptParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REScriptParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)parse;
-(id<REScriptParserDelegate>)delegate;
-(void)setDelegate:(id<REScriptParserDelegate>)arg1 ;
-(id)initWithBacktrackingBuffer:(id)arg1 ;
@end

