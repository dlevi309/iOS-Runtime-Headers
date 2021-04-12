/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * scriptId; 
@property (assign,nonatomic) int lineNumber; 
@property (assign,nonatomic) int columnNumber; 
-(NSString *)url;
-(int)lineNumber;
-(int)columnNumber;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)functionName;
-(void)setLineNumber:(int)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setScriptId:(NSString *)arg1 ;
-(void)setColumnNumber:(int)arg1 ;
-(id)initWithFunctionName:(id)arg1 url:(id)arg2 scriptId:(id)arg3 lineNumber:(int)arg4 columnNumber:(int)arg5 ;
-(NSString *)scriptId;
@end

