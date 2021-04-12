/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(int)lineNumber;
-(int)columnNumber;
-(void)setLineNumber:(int)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(NSString *)scriptId;
-(id)initWithScriptId:(id)arg1 lineNumber:(int)arg2 ;
@end

