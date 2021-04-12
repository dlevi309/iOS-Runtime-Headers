/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/WebInspector-Structs.h>
#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (assign,nonatomic) int startLine; 
@property (assign,nonatomic) int startColumn; 
@property (assign,nonatomic) int endLine; 
@property (assign,nonatomic) int endColumn; 
+(id)ik_newLineIndexSetForStyleMarkup:(id)arg1 ;
+(id)ik_cssSourceRangeForRange:(NSRange)arg1 withNewLineIndexSet:(id)arg2 ;
+(id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
+(id)ik_emptySourceRange;
-(NSRange)ik_rangeWithNewLineIndexSet:(id)arg1 ;
-(int)startLine;
-(int)endLine;
-(int)startColumn;
-(int)endColumn;
-(void)setStartLine:(int)arg1 ;
-(void)setStartColumn:(int)arg1 ;
-(void)setEndLine:(int)arg1 ;
-(void)setEndColumn:(int)arg1 ;
-(id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4 ;
@end

