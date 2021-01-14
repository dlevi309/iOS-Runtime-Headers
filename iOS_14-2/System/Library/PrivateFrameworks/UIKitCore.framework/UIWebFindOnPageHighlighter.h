/*
* Generated on Thursday, January 14, 2021 at 2:20:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)highlightNextMatch;
-(unsigned long long)numberOfMatches;
-(unsigned long long)highlightedMatchIndex;
-(void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
-(void)setSelectionRect:(CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(BOOL)arg4;
-(void)highlightPreviousMatch;
-(void)setDelegate:(id)arg1;
-(NSString *)searchText;

@end

