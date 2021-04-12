/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (assign,nonatomic) int eventListenerId; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) BOOL useCapture; 
@property (assign,nonatomic) BOOL isAttribute; 
@property (assign,nonatomic) int nodeId; 
@property (assign,nonatomic) BOOL onWindow; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (nonatomic,copy) NSString * handlerName; 
@property (assign,nonatomic) BOOL passive; 
@property (assign,nonatomic) BOOL once; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL hasBreakpoint; 
+(id)safe_initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(BOOL)arg3 isAttribute:(BOOL)arg4 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(RWIProtocolDebuggerLocation *)location;
-(BOOL)disabled;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)isAttribute;
-(int)nodeId;
-(BOOL)passive;
-(void)setPassive:(BOOL)arg1 ;
-(void)setNodeId:(int)arg1 ;
-(void)setEventListenerId:(int)arg1 ;
-(void)setUseCapture:(BOOL)arg1 ;
-(void)setIsAttribute:(BOOL)arg1 ;
-(id)initWithEventListenerId:(int)arg1 type:(id)arg2 useCapture:(BOOL)arg3 isAttribute:(BOOL)arg4 ;
-(int)eventListenerId;
-(BOOL)useCapture;
-(void)setOnWindow:(BOOL)arg1 ;
-(BOOL)onWindow;
-(void)setHandlerName:(NSString *)arg1 ;
-(NSString *)handlerName;
-(void)setOnce:(BOOL)arg1 ;
-(BOOL)once;
-(void)setHasBreakpoint:(BOOL)arg1 ;
-(BOOL)hasBreakpoint;
@end

