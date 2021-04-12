/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@protocol BLM3U8ParserDelegate <NSObject>
@required
-(void)parser:(id)arg1 lineIsURL:(id)arg2;
-(void)parser:(id)arg1 lineIsTag:(id)arg2 value:(id)arg3 attributeList:(id)arg4;
-(void)parser:(id)arg1 lineIsComment:(id)arg2;
-(BOOL)parserShouldCollectLine:(id)arg1;

@end

