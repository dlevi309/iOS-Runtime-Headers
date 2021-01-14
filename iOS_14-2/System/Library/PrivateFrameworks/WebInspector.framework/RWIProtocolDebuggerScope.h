/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(RWIProtocolDebuggerLocation *)location;
-(RWIProtocolRuntimeRemoteObject *)object;
-(void)setType:(long long)arg1 ;
-(void)setLocation:(RWIProtocolDebuggerLocation *)arg1 ;
-(NSString *)name;
-(void)setObject:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(long long)type;
-(BOOL)empty;
-(void)setName:(NSString *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithObject:(id)arg1 type:(long long)arg2 ;
@end

