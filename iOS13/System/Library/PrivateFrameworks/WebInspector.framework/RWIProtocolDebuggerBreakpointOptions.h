/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, NSArray;

@interface RWIProtocolDebuggerBreakpointOptions : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * condition; 
@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) BOOL autoContinue; 
@property (assign,nonatomic) int ignoreCount; 
-(NSString *)condition;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(void)setCondition:(NSString *)arg1 ;
-(void)setAutoContinue:(BOOL)arg1 ;
-(BOOL)autoContinue;
-(void)setIgnoreCount:(int)arg1 ;
-(int)ignoreCount;
@end

