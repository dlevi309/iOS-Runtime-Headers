/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
@property (assign,nonatomic) BOOL hasExecuted; 
@property (assign,nonatomic) int executionCount; 
-(int)startOffset;
-(int)endOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(int)executionCount;
-(void)setHasExecuted:(BOOL)arg1 ;
-(void)setExecutionCount:(int)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3 executionCount:(int)arg4 ;
-(BOOL)hasExecuted;
@end

