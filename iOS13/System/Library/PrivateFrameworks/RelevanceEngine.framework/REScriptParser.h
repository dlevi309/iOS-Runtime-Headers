/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol REBacktrackingTokenBuffer, REScriptParserDelegate;
@interface REScriptParser : NSObject {

	id<REBacktrackingTokenBuffer> _buffer;
	id<REScriptParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<REScriptParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<REScriptParserDelegate>)delegate;
-(void)setDelegate:(id<REScriptParserDelegate>)arg1 ;
-(id)parse;
-(id)initWithBacktrackingBuffer:(id)arg1 ;
@end

