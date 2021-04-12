/*
* Generated on Monday, March 1, 2021 at 2:30:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class NSString;


@protocol UIWebFindOnPageHighlighter <NSObject>
@property (nonatomic,copy,readonly) NSString * searchText; 
@property (assign,nonatomic) id<UIWebFindOnPageHighlighterDelegate> delegate; 
@property (nonatomic,readonly) unsigned long long numberOfMatches; 
@property (nonatomic,readonly) unsigned long long highlightedMatchIndex; 
@required
-(id<UIWebFindOnPageHighlighterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)searchText;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
-(void)highlightNextMatch;
-(void)highlightPreviousMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;

@end

