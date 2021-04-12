/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject, NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * object; 
@property (assign,nonatomic) long long type; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) RWIProtocolDebuggerLocation * location; 
@property (assign,nonatomic) BOOL empty; 
-(NSString *)name;
-(RWIProtocolRuntimeRemoteObject *)object;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(RWIProtocolDebuggerLocation *)location;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(BOOL)empty;
-(id)initWithObject:(id)arg1 type:(long long)arg2 ;
@end

