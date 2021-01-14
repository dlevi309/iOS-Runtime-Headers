/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, NSArray, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * callFrameId; 
@property (nonatomic,copy) NSString * functionName; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSArray * scopeChain; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * thisObject; 
@property (assign,nonatomic) BOOL isTailDeleted; 
-(RWIProtocolDebuggerLocation *)location;
-(NSString *)functionName;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setThisObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(RWIProtocolRuntimeRemoteObject *)thisObject;
-(void)setScopeChain:(NSArray *)arg1 ;
-(NSArray *)scopeChain;
-(void)setCallFrameId:(NSString *)arg1 ;
-(void)setIsTailDeleted:(BOOL)arg1 ;
-(id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(BOOL)arg6 ;
-(NSString *)callFrameId;
-(BOOL)isTailDeleted;
@end

