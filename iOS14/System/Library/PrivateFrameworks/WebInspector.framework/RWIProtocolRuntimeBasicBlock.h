/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@interface RWIProtocolRuntimeBasicBlock : RWIProtocolJSONObject

@property (assign,nonatomic) int startOffset; 
@property (assign,nonatomic) int endOffset; 
@property (assign,nonatomic) BOOL hasExecuted; 
@property (assign,nonatomic) int executionCount; 
-(int)endOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(int)executionCount;
-(int)startOffset;
-(void)setHasExecuted:(BOOL)arg1 ;
-(void)setExecutionCount:(int)arg1 ;
-(id)initWithStartOffset:(int)arg1 endOffset:(int)arg2 hasExecuted:(BOOL)arg3 executionCount:(int)arg4 ;
-(BOOL)hasExecuted;
@end

