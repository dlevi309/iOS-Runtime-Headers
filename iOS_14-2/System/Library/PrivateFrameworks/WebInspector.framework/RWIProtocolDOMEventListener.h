/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)once;
-(RWIProtocolDebuggerLocation *)location;
-(int)nodeId;
-(BOOL)passive;
-(void)setType:(NSString *)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setPassive:(BOOL)arg1 ;
-(NSString *)type;
-(BOOL)isAttribute;
-(BOOL)disabled;
-(void)setNodeId:(int)arg1 ;
-(void)setOnce:(BOOL)arg1 ;
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
-(void)setHasBreakpoint:(BOOL)arg1 ;
-(BOOL)hasBreakpoint;
@end

